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

  // Exported permission: create responsive_slide content.
  $permissions['create responsive_slide content'] = array(
    'name' => 'create responsive_slide content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any responsive_slide content.
  $permissions['delete any responsive_slide content'] = array(
    'name' => 'delete any responsive_slide content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own responsive_slide content.
  $permissions['delete own responsive_slide content'] = array(
    'name' => 'delete own responsive_slide content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any responsive_slide content.
  $permissions['edit any responsive_slide content'] = array(
    'name' => 'edit any responsive_slide content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own responsive_slide content.
  $permissions['edit own responsive_slide content'] = array(
    'name' => 'edit own responsive_slide content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  return $permissions;
}
