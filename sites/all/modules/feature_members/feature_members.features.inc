<?php
/**
 * @file
 * feature_members.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_members_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_members_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_members_node_info() {
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
