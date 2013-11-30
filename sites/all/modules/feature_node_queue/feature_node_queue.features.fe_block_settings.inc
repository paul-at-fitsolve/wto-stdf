<?php
/**
 * @file
 * feature_node_queue.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_node_queue_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-nodequeue_news_feed-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_news_feed-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'filedepot',
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
        'weight' => -19,
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
