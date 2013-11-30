<?php
/**
 * @file
 * feature_members_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_members_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_members_content_node_info() {
  $items = array(
    'members_content' => array(
      'name' => t('Members\' Content'),
      'base' => 'node_content',
      'description' => t('This content is for members only.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
