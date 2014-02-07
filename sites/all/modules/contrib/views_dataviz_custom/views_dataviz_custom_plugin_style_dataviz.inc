<?php
/**
 * @file
 * Contains the chart display plugin.
 *
 * @author Jurriaan Roelofs http://drupal.org/user/52638
 */

/**
 * The plugin that handles the chart style.
 *
 * @ingroup views_style_plugins
 */
class views_dataviz_custom_plugin_style_dataviz extends views_plugin_style {
  function option_definition () {
    $options = parent::option_definition();
    $options['type'] = array('default' => 'PieChart');
    $options['_curveType'] = array('default' => 'none');
    $options['_pieSliceText'] = array('default' => 'value');
    $options['_displayMode'] = array('default' => 'region');
    $options['_region'] = array('default' => '');
    $options['_resolution'] = array('default' => 'countries');
    $options['_width'] = array('default' => '');
    $options['_height'] = array('default' => '');
    $options['colors'] = array('default' => '');
    $options['_enableInteractivity'] = array('default' => 1);

    return $options;
  }

  function options_form(&$form, &$form_state) {
    // Include ctools dependent support
    ctools_include('dependent');

    parent::options_form($form, $form_state);

    $form['type'] = array(
      '#type' => 'select',
      '#title' => t('Type'),
      '#description' => t('Chart type, see <a href="http://code.google.com/apis/chart/">Google Chart API documentation</a>.'),
      '#options' => views_dataviz_custom_types(),
      '#required' => TRUE,
      '#default_value' => $this->options['type'],
      '#id' => 'dataviz-chart-type',
    );
    // Google chart options are _prefixed so that they can be autoloaded later
    $form['_curveType'] = array(
      '#type' => 'select',
      '#dependency' => array(
        'dataviz-chart-type' => array('LineChart'),
      ),
      '#title' => t('Line smoothing'),
      '#description' => t('The angles of the line will be smoothed.'),
      '#options' => array(0 => 'none', 'function' => 'function'),
      '#default_value' => $this->options['_curveType'],
    );
    // Google chart options are _prefixed so that they can be autoloaded later
    $form['_pieSliceText'] = array(
      '#type' => 'select',
      '#dependency' => array(
        'dataviz-chart-type' => array('PieChart'),
      ),
      '#title' => t('Pie Slice Text'),
      '#description' => t('The content of the text displayed on the slice.'),
      '#options' => array(
        'percentage' => 'percentage',
        'value' => 'value',
        'label' => 'label',
        'none' => 'none',
      ),
      '#default_value' => $this->options['_pieSliceText'],
    );
    
    $form['_displayMode'] = array(
            '#type' => 'select',
            '#dependency' => array(
                    'dataviz-chart-type' => array('GeoChart'),
            ),
            '#title' => t('Display Mode'),
            '#description' => t('The display mode for the Geo Chart.'),
            '#options' => array(
                    'region' => 'region',
                    'markers' => 'markers',
            ),
            '#default_value' => $this->options['_displayMode'],
    );
    $form['_region'] = array(
            '#type' => 'textfield',
            '#dependency' => array(
                    'dataviz-chart-type' => array('GeoChart'),
            ),
            '#title' => t('Region'),
            '#description' => t('The region on which to focus for this chart, ex: US for the United States. Leave blank to not focus on a specific region. Acceptable formats include 3-digit numerics for continents, ISO-3166-1 alpha-2 codes, and ISO-3166-2:US states codes like US-AL.'),
            '#size' => 6,
            '#required' => FALSE,
            '#default_value' => $this->options['_region'],
    );
    $form['_resolution'] = array(
            '#type' => 'select',
            '#dependency' => array(
                    'dataviz-chart-type' => array('GeoChart'),
            ),
            '#title' => t('Resolution'),
            '#description' => t('The resolution at which to draw borders. Provinces work for U.S. states and some other country regions.'),
            '#options' => array(
                    'continents' => 'continents',
                    'countries' => 'countries',
                    'provinces' => 'provinces',
            ),
            '#default_value' => $this->options['_resolution'],
    );  
    $form['_width'] = array(
      '#type' => 'textfield',
      '#title' => t('Width'),
      '#description' => t('Chart width in pixels. Leave blank for auto width.'),
      '#size' => 8,
      '#required' => FALSE,
      '#default_value' => $this->options['_width'],
    );
    $form['_height'] = array(
      '#type' => 'textfield',
      '#title' => t('Height'),
      '#description' => t('Chart height in pixels. Leave blank for auto height.'),
      '#size' => 8,
      '#required' => FALSE,
      '#default_value' => $this->options['_height'],
    );
    $form['label1'] = array(
            '#type' => 'textfield',
            '#title' > t('Label 1'),
            '#description' => t('Label to use'),
            '#required' => FALSE,
            '#default_value' => $this->options['label1'],
    );
    $form['label2'] = array(
            '#type' => 'textfield',
            '#title' > t('Label 2'),
            '#description' => t('Label to use'),
            '#required' => FALSE,
            '#default_value' => $this->options['label2'],
    );
    $form['_backgroundColor'] = array(
          '#type' => 'textfield',
            '#title' => t('Background Color'),
            '#description' => t('Color to use for the background - will set the sea color. Use valid css colors such as red, #00ff00, rgb(200,0,0) etc.'),
            '#required' => FALSE,
            '#default_value' => $this->options['_backgroundColor'],
    );
    $form['colors'] = array(
      '#type' => 'textfield',
      '#title' => t('Colors'),
      '#description' => t('Space separated list of colors to use for the chart elements. Use valid css colors such as red, #00ff00, rgb(200,0,0) etc.'),
      '#required' => FALSE,
      '#default_value' => $this->options['colors'],
    );
    $form['_enableInteractivity'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable Interactivity'),
      '#description' => t('Whether the chart throws user-based events or reacts to user interaction.'),
      '#default_value' => $this->options['_enableInteractivity'],
    );
  }

  function render() {
    // For some reason render(); gets called twice, we can't allow that
    global $views_dataviz_custom_log;
    if (empty($views_dataviz_custom_log)) {
      drupal_add_js('if (!Boolean(Drupal.settings.Dataviz)) { Drupal.settings.Dataviz = new Object(); } if (!Boolean(Drupal.settings.Dataviz.chart)) { Drupal.settings.Dataviz.chart = new Object();google.load("visualization", "1", {packages:["corechart", "gauge", "orgchart", "geochart"]}); }', 'inline');
      drupal_add_js('https://www.google.com/jsapi', array('type' => 'external', 'weight' => JS_LIBRARY));
      drupal_add_js(drupal_get_path('module', 'views_dataviz_custom') . '/js/dataviz-goo-chart.js');
    }
    if (isset($views_dataviz_custom_log[$this->display->vid][$this->display->id])) {
      return;
    }
    $views_dataviz_custom_log[$this->display->vid][$this->display->id] = TRUE;

    $settings = $output = array();
    $options = $this->options;
    $sets = $this->render_grouping($this->view->result, $this->options['grouping']);
    $one = count($sets) == 1;
    $set = 0;
    $chartArea = new stdClass();
    $chartArea->width = '100%';
    $chartArea->left = 90;
    $chartArea->right = 90;
    $chartArea->top = 50;
            // dsm($options);
        foreach ($sets as $title => $records) {
            $chart_id = 'dataviz_ch' . $this->display->vid . '_' .
                     $this->display->id . '_' . $set;
            $output[] = '<div class="dataviz" id="' . $chart_id . '"></div>';
            
            // Get the header values from the labels set on each field in the
            // view object.
            //dpm($this->view->field);
            $header = array();
            foreach ($this->view->field as $field) {
               // dpm($field->options['group_type']);
                if ($field->options['group_type'] == 'sum') {
                    $header[] = $field->options['label'];
                } else {
                    array_unshift($header, $field->options['label']);
                }
            }
      
      
      $settings['chart'][$chart_id] = array(
        'header' => $header,
        'rows' => array(),
        'chartType' => $options['type'],
        'containerId' =>  $chart_id,
        'options' => array(
          'forceIFrame' => FALSE,
          'titlePosition' => 'in',
          'chartArea' => $chartArea,
          'title' => $one ? $this->display->display_title : $title,
        ),
      );

      foreach ($options as $key => $option) {
        if (($option) && ($key{0} == '_')) {
          $key = ltrim($key, '_');
          $settings['chart'][$chart_id]['options'][$key] = $option;
        }
      }

      if ($options['colors']) {
        $colors = explode(' ', $options['colors']);
        $settings['chart'][$chart_id]['options']['colors'] = $colors;
      }
      //dpm($records);
      foreach ($records as $row_index => $row) {
        foreach ($this->view->field as $key => $field) {
            //dpm($this->view->field);
          if (!$field->options['exclude']) {
             
            //$field_value = $field->advanced_render($row);
            //dpm($field_value);
            
           // dpm($field->field_info['type']);
            if ($field->field_info['type'] == 'number_integer') {
                $settings['chart'][$chart_id]['rows'][$row_index][] = (int)$field->advanced_render($row);
                //$newrow[] = $field->advanced_render($row);
            } else {
                array_unshift($settings['chart'][$chart_id]['rows'][$row_index], $field->advanced_render($row));
            }
            /**
             * @todo JurriaanRoelofs
             * This probably isn't the best way to determine data/header
             
            
             
            if (is_numeric($field_value)) {
              $settings['chart'][$chart_id]['rows'][0][] = $field_value ;
            } else {
              $settings['chart'][$chart_id]['header'][] = $field_value;
            }
            */
            //$settings['chart'][$chart_id]['rows'][] = $header
            //dpm($settings['chart'][$chart_id]['rows']);
          }
        }
      }

      // Allow modules to alter the chart based on views context.
      drupal_alter('views_dataviz', $chart, $this->view->name, $this->display->id);

      // Since view expects string output we can't save render array for later.
      $set++;
    } // END of loop

    $output[] = '<script>Drupal.settings.Dataviz.chart.' . $chart_id . ' = null;jQuery.extend(true, Drupal.settings.Dataviz, ' . json_encode($settings) . ');</script>';

    return implode($output);
  }
}
