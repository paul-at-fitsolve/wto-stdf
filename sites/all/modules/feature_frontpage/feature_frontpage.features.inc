<?php
/**
 * @file
 * feature_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_frontpage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_frontpage_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_frontpage_image_default_styles() {
  $styles = array();

  // Exported image style: thematic_thumbnail.
  $styles['thematic_thumbnail'] = array(
    'name' => 'thematic_thumbnail',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_mailchimp_list().
 */
function feature_frontpage_default_mailchimp_list() {
  $items = array();
  $items['stdf_mail_list'] = entity_import('mailchimp_list', '{
    "name" : "stdf_mail_list",
    "mc_list_id" : "25fa97adb1",
    "label" : "STDF Mail List",
    "description" : "",
    "list_type" : "freeform",
    "settings" : {
      "roles" : { "1" : "1" },
      "mergefields" : {
        "FNAME" : "field-first-name",
        "LNAME" : "field-last-name",
        "MMERGE4" : "field-organization",
        "MMERGE5" : "field_user_country",
        "EMAIL" : "mail",
        "MMERGE3" : "picture:field-language"
      },
      "doublein" : 1,
      "show_register_form" : 0,
      "default_register_form_optin" : 0,
      "show_account_form" : 0,
      "include_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0
    },
    "created" : "1376592188",
    "updated" : "1383058314",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function feature_frontpage_node_info() {
  $items = array(
    'responsive_slide' => array(
      'name' => t('Responsive Slide'),
      'base' => 'node_content',
      'description' => t('An image that will be displayed via Flexslider making it responsive.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
