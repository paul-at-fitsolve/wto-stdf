<?php
/**
 * @file
 * feature_general_content.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_general_content_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: content author.
  $roles['content author'] = array(
    'name' => 'content author',
    'weight' => 3,
  );

  return $roles;
}
