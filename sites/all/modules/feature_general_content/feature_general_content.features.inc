<?php
/**
 * @file
 * feature_general_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_general_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
