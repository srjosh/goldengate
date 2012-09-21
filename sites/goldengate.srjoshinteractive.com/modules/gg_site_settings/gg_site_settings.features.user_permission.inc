<?php
/**
 * @file
 * gg_site_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gg_site_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access private fields
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(),
  );

  // Exported permission: access site in maintenance mode
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access toolbar
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer corresponding node references settings
  $permissions['administer corresponding node references settings'] = array(
    'name' => 'administer corresponding node references settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'corresponding_node_references',
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer field collections
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(),
  );

  // Exported permission: administer field permissions
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: administer fieldgroups
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer image styles
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer modules
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer relation types
  $permissions['administer relation types'] = array(
    'name' => 'administer relation types',
    'roles' => array(),
  );

  // Exported permission: administer relations
  $permissions['administer relations'] = array(
    'name' => 'administer relations',
    'roles' => array(),
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: cancel account
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
  );

  // Exported permission: cancel own vote
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'poll',
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: create character content
  $permissions['create character content'] = array(
    'name' => 'create character content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create face content
  $permissions['create face content'] = array(
    'name' => 'create face content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create field_character_sheet
  $permissions['create field_character_sheet'] = array(
    'name' => 'create field_character_sheet',
    'roles' => array(
      0 => 'administrator',
      1 => 'game master',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_dmnotes
  $permissions['create field_dmnotes'] = array(
    'name' => 'create field_dmnotes',
    'roles' => array(
      0 => 'administrator',
      1 => 'game master',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_npc_type
  $permissions['create field_npc_type'] = array(
    'name' => 'create field_npc_type',
    'roles' => array(
      0 => 'administrator',
      1 => 'game master',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create gmap macro
  $permissions['create gmap macro'] = array(
    'name' => 'create gmap macro',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'gmap_macro_builder',
  );

  // Exported permission: create place content
  $permissions['create place content'] = array(
    'name' => 'create place content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create poll content
  $permissions['create poll content'] = array(
    'name' => 'create poll content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create relations
  $permissions['create relations'] = array(
    'name' => 'create relations',
    'roles' => array(),
  );

  // Exported permission: create site_page content
  $permissions['create site_page content'] = array(
    'name' => 'create site_page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create theme_threat content
  $permissions['create theme_threat content'] = array(
    'name' => 'create theme_threat content',
    'roles' => array(),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'path',
  );

  // Exported permission: delete any character content
  $permissions['delete any character content'] = array(
    'name' => 'delete any character content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any face content
  $permissions['delete any face content'] = array(
    'name' => 'delete any face content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any place content
  $permissions['delete any place content'] = array(
    'name' => 'delete any place content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any poll content
  $permissions['delete any poll content'] = array(
    'name' => 'delete any poll content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any site_page content
  $permissions['delete any site_page content'] = array(
    'name' => 'delete any site_page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any theme_threat content
  $permissions['delete any theme_threat content'] = array(
    'name' => 'delete any theme_threat content',
    'roles' => array(),
  );

  // Exported permission: delete own character content
  $permissions['delete own character content'] = array(
    'name' => 'delete own character content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own face content
  $permissions['delete own face content'] = array(
    'name' => 'delete own face content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own place content
  $permissions['delete own place content'] = array(
    'name' => 'delete own place content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own poll content
  $permissions['delete own poll content'] = array(
    'name' => 'delete own poll content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own site_page content
  $permissions['delete own site_page content'] = array(
    'name' => 'delete own site_page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete relations
  $permissions['delete relations'] = array(
    'name' => 'delete relations',
    'roles' => array(),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any character content
  $permissions['edit any character content'] = array(
    'name' => 'edit any character content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any face content
  $permissions['edit any face content'] = array(
    'name' => 'edit any face content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any place content
  $permissions['edit any place content'] = array(
    'name' => 'edit any place content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any poll content
  $permissions['edit any poll content'] = array(
    'name' => 'edit any poll content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any site_page content
  $permissions['edit any site_page content'] = array(
    'name' => 'edit any site_page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any theme_threat content
  $permissions['edit any theme_threat content'] = array(
    'name' => 'edit any theme_threat content',
    'roles' => array(),
  );

  // Exported permission: edit field_character_sheet
  $permissions['edit field_character_sheet'] = array(
    'name' => 'edit field_character_sheet',
    'roles' => array(
      0 => 'administrator',
      1 => 'game master',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_dmnotes
  $permissions['edit field_dmnotes'] = array(
    'name' => 'edit field_dmnotes',
    'roles' => array(
      0 => 'administrator',
      1 => 'game master',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_npc_type
  $permissions['edit field_npc_type'] = array(
    'name' => 'edit field_npc_type',
    'roles' => array(
      0 => 'administrator',
      1 => 'game master',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own character content
  $permissions['edit own character content'] = array(
    'name' => 'edit own character content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own face content
  $permissions['edit own face content'] = array(
    'name' => 'edit own face content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own field_character_sheet
  $permissions['edit own field_character_sheet'] = array(
    'name' => 'edit own field_character_sheet',
    'roles' => array(
      0 => 'administrator',
      1 => 'game master',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_dmnotes
  $permissions['edit own field_dmnotes'] = array(
    'name' => 'edit own field_dmnotes',
    'roles' => array(),
  );

  // Exported permission: edit own field_npc_type
  $permissions['edit own field_npc_type'] = array(
    'name' => 'edit own field_npc_type',
    'roles' => array(
      0 => 'administrator',
      1 => 'game master',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own place content
  $permissions['edit own place content'] = array(
    'name' => 'edit own place content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own poll content
  $permissions['edit own poll content'] = array(
    'name' => 'edit own poll content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own site_page content
  $permissions['edit own site_page content'] = array(
    'name' => 'edit own site_page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own theme_threat content
  $permissions['edit own theme_threat content'] = array(
    'name' => 'edit own theme_threat content',
    'roles' => array(),
  );

  // Exported permission: edit relations
  $permissions['edit relations'] = array(
    'name' => 'edit relations',
    'roles' => array(),
  );

  // Exported permission: inspect all votes
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'poll',
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(),
  );

  // Exported permission: select account cancellation method
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
  );

  // Exported permission: skip comment approval
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: submit latitude/longitude
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'location',
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(),
  );

  // Exported permission: use text format full_html
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: view field_character_sheet
  $permissions['view field_character_sheet'] = array(
    'name' => 'view field_character_sheet',
    'roles' => array(
      0 => 'administrator',
      1 => 'game master',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_dmnotes
  $permissions['view field_dmnotes'] = array(
    'name' => 'view field_dmnotes',
    'roles' => array(
      0 => 'administrator',
      1 => 'game master',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_npc_type
  $permissions['view field_npc_type'] = array(
    'name' => 'view field_npc_type',
    'roles' => array(
      0 => 'administrator',
      1 => 'game master',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view location directory
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'location',
  );

  // Exported permission: view node location table
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'location',
  );

  // Exported permission: view node map
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: view own field_character_sheet
  $permissions['view own field_character_sheet'] = array(
    'name' => 'view own field_character_sheet',
    'roles' => array(
      0 => 'administrator',
      1 => 'game master',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_dmnotes
  $permissions['view own field_dmnotes'] = array(
    'name' => 'view own field_dmnotes',
    'roles' => array(),
  );

  // Exported permission: view own field_npc_type
  $permissions['view own field_npc_type'] = array(
    'name' => 'view own field_npc_type',
    'roles' => array(
      0 => 'administrator',
      1 => 'game master',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own unpublished content
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: view user location details
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(),
  );

  // Exported permission: view user location table
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(),
  );

  // Exported permission: view user map
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(),
  );

  // Exported permission: vote on polls
  $permissions['vote on polls'] = array(
    'name' => 'vote on polls',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'poll',
  );

  return $permissions;
}
