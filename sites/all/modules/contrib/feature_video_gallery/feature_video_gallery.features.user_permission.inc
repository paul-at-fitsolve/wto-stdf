<?php
/**
 * @file
 * feature_video_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_video_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create media content.
  $permissions['create media content'] = array(
    'name' => 'create media content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any media content.
  $permissions['delete any media content'] = array(
    'name' => 'delete any media content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own media content.
  $permissions['delete own media content'] = array(
    'name' => 'delete own media content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any media content.
  $permissions['edit any media content'] = array(
    'name' => 'edit any media content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own media content.
  $permissions['edit own media content'] = array(
    'name' => 'edit own media content',
    'roles' => array(
      'content author' => 'content author',
    ),
    'module' => 'node',
  );

  return $permissions;
}
