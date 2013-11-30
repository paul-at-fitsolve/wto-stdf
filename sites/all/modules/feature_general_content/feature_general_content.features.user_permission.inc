<?php
/**
 * @file
 * feature_general_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_general_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: create general_content content.
  $permissions['create general_content content'] = array(
    'name' => 'create general_content content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any general_content content.
  $permissions['delete any general_content content'] = array(
    'name' => 'delete any general_content content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own general_content content.
  $permissions['delete own general_content content'] = array(
    'name' => 'delete own general_content content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any general_content content.
  $permissions['edit any general_content content'] = array(
    'name' => 'edit any general_content content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own general_content content.
  $permissions['edit own general_content content'] = array(
    'name' => 'edit own general_content content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  return $permissions;
}
