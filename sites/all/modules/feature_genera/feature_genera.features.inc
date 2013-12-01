<?php
/**
 * @file
 * feature_genera.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_genera_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function feature_genera_image_default_styles() {
  $styles = array();

  // Exported image style: wto-stdf-flexslider.
  $styles['wto-stdf-flexslider'] = array(
    'name' => 'wto-stdf-flexslider',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => 300,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feature_genera_node_info() {
  $items = array(
    'general_content' => array(
      'name' => t('General Content'),
      'base' => 'node_content',
      'description' => t('All general content on the site including articles about STDF.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
