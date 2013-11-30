<?php
/**
 * @file
 * feature_members_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_members_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: create members_content content.
  $permissions['create members_content content'] = array(
    'name' => 'create members_content content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any members_content content.
  $permissions['delete any members_content content'] = array(
    'name' => 'delete any members_content content',
    'roles' => array(
      'administrator' => 'administrator',
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own members_content content.
  $permissions['delete own members_content content'] = array(
    'name' => 'delete own members_content content',
    'roles' => array(
      'administrator' => 'administrator',
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any members_content content.
  $permissions['edit any members_content content'] = array(
    'name' => 'edit any members_content content',
    'roles' => array(
      'administrator' => 'administrator',
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own members_content content.
  $permissions['edit own members_content content'] = array(
    'name' => 'edit own members_content content',
    'roles' => array(
      'administrator' => 'administrator',
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  return $permissions;
}
