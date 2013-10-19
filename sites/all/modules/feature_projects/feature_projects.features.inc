<?php
/**
 * @file
 * feature_projects.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_projects_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_projects_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_projects_node_info() {
  $items = array(
    'beneficiary' => array(
      'name' => t('Beneficiary'),
      'base' => 'node_content',
      'description' => t('This entity type represents the beneficiaries that are associated with STDF projects. Each beneficiary consists of a set of one or more countries.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Projects and project preparations undertaken by STDF.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
