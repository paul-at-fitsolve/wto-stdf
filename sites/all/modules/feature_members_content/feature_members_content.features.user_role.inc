<?php
/**
 * @file
 * feature_members_content.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_members_content_user_default_roles() {
  $roles = array();

  // Exported role: member.
  $roles['member'] = array(
    'name' => 'member',
    'weight' => 4,
  );

  return $roles;
}
