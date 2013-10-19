<?php
/**
 * @file
 * feature_frontpage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_frontpage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_responsive_slide';
  $strongarm->value = 0;
  $export['comment_anonymous_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_responsive_slide';
  $strongarm->value = 1;
  $export['comment_default_mode_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_responsive_slide';
  $strongarm->value = '50';
  $export['comment_default_per_page_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_responsive_slide';
  $strongarm->value = 1;
  $export['comment_form_location_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_responsive_slide';
  $strongarm->value = '1';
  $export['comment_preview_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_responsive_slide';
  $strongarm->value = '1';
  $export['comment_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_responsive_slide';
  $strongarm->value = 1;
  $export['comment_subject_field_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_info';
  $strongarm->value = array(
    'value' => '<p>STDF Secretariat<br /> World Trade Organization<br /> Centre William Rappard<br /> Rue de Lausanne 154<br /> CH-1211 Geneva, Switzerland<br /><br /> Tel: +41(0)22 739 5295<br /> Fax: +41(0)22 739 5760 <a href="mailto:STDFSecretariat@wto.org">STDFSecretariat@wto.org</a></p>',
    'format' => 'wysiwyg_filter',
  );
  $export['contact_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__responsive_slide';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'frontpage' => array(
        'custom_settings' => TRUE,
      ),
      'publications' => array(
        'custom_settings' => TRUE,
      ),
      'briefings' => array(
        'custom_settings' => TRUE,
      ),
      'thematic' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '0',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'language' => array(
          'frontpage' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_responsive_slide';
  $strongarm->value = array();
  $export['i18n_sync_node_type_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_responsive_slide';
  $strongarm->value = '2';
  $export['language_content_type_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_responsive_slide';
  $strongarm->value = array();
  $export['menu_options_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_responsive_slide';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_responsive_slide';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_responsive_slide';
  $strongarm->value = '1';
  $export['node_preview_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_responsive_slide';
  $strongarm->value = 0;
  $export['node_submitted_responsive_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_css_selectors';
  $strongarm->value = '.nice-menu-main-menu';
  $export['responsive_menus_css_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_disable_mouse_events';
  $strongarm->value = array(
    1 => 0,
  );
  $export['responsive_menus_disable_mouse_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_ignore_admin';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_ignore_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_media_size';
  $strongarm->value = '960';
  $export['responsive_menus_media_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_remove_attributes';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_remove_attributes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_simple_absolute';
  $strongarm->value = array(
    1 => 0,
  );
  $export['responsive_menus_simple_absolute'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_simple_text';
  $strongarm->value = '☰ Menu';
  $export['responsive_menus_simple_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_style';
  $strongarm->value = 'mean_menu';
  $export['responsive_menus_style'] = $strongarm;

  return $export;
}
