<?php
/**
 * @file
 * feature_node_queue.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_node_queue_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer nodequeue.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: manipulate all queues.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'administrator' => 'administrator',
      'content author' => 'content author',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: manipulate queues.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'administrator' => 'administrator',
      'content author' => 'content author',
    ),
    'module' => 'nodequeue',
  );

  return $permissions;
}
