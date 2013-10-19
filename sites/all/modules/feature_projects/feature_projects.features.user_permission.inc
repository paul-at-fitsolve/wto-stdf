<?php
/**
 * @file
 * feature_projects.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_projects_user_default_permissions() {
  $permissions = array();

  // Exported permission: create beneficiary content.
  $permissions['create beneficiary content'] = array(
    'name' => 'create beneficiary content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: create project content.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any beneficiary content.
  $permissions['delete any beneficiary content'] = array(
    'name' => 'delete any beneficiary content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any project content.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own beneficiary content.
  $permissions['delete own beneficiary content'] = array(
    'name' => 'delete own beneficiary content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own project content.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any beneficiary content.
  $permissions['edit any beneficiary content'] = array(
    'name' => 'edit any beneficiary content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any project content.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own beneficiary content.
  $permissions['edit own beneficiary content'] = array(
    'name' => 'edit own beneficiary content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own project content.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  return $permissions;
}
