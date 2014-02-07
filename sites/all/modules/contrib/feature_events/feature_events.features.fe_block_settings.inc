<?php
/**
 * @file
 * feature_events.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_events_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-nodequeue_upcoming_events-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_upcoming_events-block',
    'i18n_block_language' => array(
      0 => 'en',
      1 => 'es',
      2 => 'fr',
    ),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => 'second_content',
        'status' => 1,
        'theme' => 'wto_stdf',
        'weight' => -25,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
