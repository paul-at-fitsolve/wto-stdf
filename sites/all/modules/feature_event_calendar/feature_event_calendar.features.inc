<?php
/**
 * @file
 * feature_event_calendar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_event_calendar_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_event_calendar_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_event_calendar_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('A scheduled event organised by STDF and its partners.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
