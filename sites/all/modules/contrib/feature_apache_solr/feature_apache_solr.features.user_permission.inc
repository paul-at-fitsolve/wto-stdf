<?php
/**
 * @file
 * feature_apache_solr.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_apache_solr_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'content author' => 'content author',
      'member' => 'member',
    ),
    'module' => 'search',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'content author' => 'content author',
      'member' => 'member',
    ),
    'module' => 'search',
  );

  return $permissions;
}