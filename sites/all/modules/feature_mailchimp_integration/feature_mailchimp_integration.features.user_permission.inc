<?php
/**
 * @file
 * feature_mailchimp_integration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_mailchimp_integration_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer mailchimp.
  $permissions['administer mailchimp'] = array(
    'name' => 'administer mailchimp',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp',
  );

  // Exported permission: administer mailchimp campaigns.
  $permissions['administer mailchimp campaigns'] = array(
    'name' => 'administer mailchimp campaigns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_campaign',
  );

  return $permissions;
}
