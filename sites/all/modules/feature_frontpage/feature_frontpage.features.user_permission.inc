<?php
/**
 * @file
 * feature_frontpage.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_frontpage_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer flexslider.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

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
