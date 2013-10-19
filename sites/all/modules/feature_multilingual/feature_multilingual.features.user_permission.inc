<?php
/**
 * @file
 * feature_multilingual.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_multilingual_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer content translations.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
      'content author' => 'content author',
    ),
    'module' => 'locale',
  );

  // Exported permission: display admin pages in another language.
  $permissions['display admin pages in another language'] = array(
    'name' => 'display admin pages in another language',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_language',
  );

  // Exported permission: translate admin strings.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: translate content.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrator' => 'administrator',
      'content author' => 'content author',
    ),
    'module' => 'translation',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
      'content author' => 'content author',
    ),
    'module' => 'locale',
  );

  // Exported permission: translate user-defined strings.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: use all enabled languages.
  $permissions['use all enabled languages'] = array(
    'name' => 'use all enabled languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_language',
  );

  return $permissions;
}
