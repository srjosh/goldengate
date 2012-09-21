<?php
/**
 * @file
 * gg_site_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gg_site_settings_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '3',
  );

  // Exported role: game master
  $roles['game master'] = array(
    'name' => 'game master',
    'weight' => '2',
  );

  return $roles;
}
