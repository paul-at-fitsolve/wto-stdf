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
