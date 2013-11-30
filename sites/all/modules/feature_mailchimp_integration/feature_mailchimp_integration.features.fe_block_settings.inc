<?php
/**
 * @file
 * feature_mailchimp_integration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_mailchimp_integration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['mailchimp_lists-stdf_mail_list'] = array(
    'cache' => 2,
    'custom' => 0,
    'delta' => 'stdf_mail_list',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'mailchimp_lists',
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
        'region' => 'content',
        'status' => 1,
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

  return $export;
}
