<?php
/**
 * @file
 * gg_site_settings.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function gg_site_settings_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-brainstorming.
  $menus['menu-brainstorming'] = array(
    'menu_name' => 'menu-brainstorming',
    'title' => 'Brainstorming',
    'description' => 'Pages from the Brainstorming of this project',
  );
  // Exported menu: menu-sidebar-menu.
  $menus['menu-sidebar-menu'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'title' => 'Game & World Notes',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Brainstorming');
  t('Game & World Notes');
  t('Main menu');
  t('Pages from the Brainstorming of this project');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
