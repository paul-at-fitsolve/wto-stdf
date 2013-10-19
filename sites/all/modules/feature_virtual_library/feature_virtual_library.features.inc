<?php
/**
 * @file
 * feature_virtual_library.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_virtual_library_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
}
