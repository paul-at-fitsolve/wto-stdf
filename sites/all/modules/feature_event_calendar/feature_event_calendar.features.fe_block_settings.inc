<?php
/**
 * @file
 * feature_event_calendar.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_event_calendar_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['calendar-calendar_legend'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'calendar_legend',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'calendar',
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
        'region' => '',
        'status' => 0,
        'theme' => 'wto_stdf',
        'weight' => 0,
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

  $export['views-calendar-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendar-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
        'region' => '',
        'status' => 0,
        'theme' => 'wto_stdf',
        'weight' => 0,
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

  $export['views-calendar-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendar-block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'calendar-node-field-date-and-time',
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'wto_stdf',
        'weight' => -16,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => 'Upcoming Events',
    'visibility' => 1,
  );

  return $export;
}
