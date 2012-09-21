<?php
/**
 * @file
 * gg_site_settings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function gg_site_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:characters
  $menu_links['main-menu:characters'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'characters',
    'router_path' => 'characters',
    'link_title' => 'Characters',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:faces
  $menu_links['main-menu:faces'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faces',
    'router_path' => 'faces',
    'link_title' => 'Faces',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:map/node
  $menu_links['main-menu:map/node'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'map/node',
    'router_path' => 'map/node',
    'link_title' => 'Map',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:node/1
  $menu_links['main-menu:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:places
  $menu_links['main-menu:places'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'places',
    'router_path' => 'places',
    'link_title' => 'Places',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-brainstorming:node/5
  $menu_links['menu-brainstorming:node/5'] = array(
    'menu_name' => 'menu-brainstorming',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Locations',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-19',
  );
  // Exported menu link: menu-brainstorming:node/6
  $menu_links['menu-brainstorming:node/6'] = array(
    'menu_name' => 'menu-brainstorming',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Personalities',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-16',
  );
  // Exported menu link: menu-brainstorming:node/7
  $menu_links['menu-brainstorming:node/7'] = array(
    'menu_name' => 'menu-brainstorming',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Resources',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-12',
  );
  // Exported menu link: menu-brainstorming:node/8
  $menu_links['menu-brainstorming:node/8'] = array(
    'menu_name' => 'menu-brainstorming',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Themes and Thoughts',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-sidebar-menu:node/2
  $menu_links['menu-sidebar-menu:node/2'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Character Creation',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-sidebar-menu:node/3
  $menu_links['menu-sidebar-menu:node/3'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'A Darkening World',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-sidebar-menu:node/4
  $menu_links['menu-sidebar-menu:node/4'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Campaign Rules',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-sidebar-menu:node/59
  $menu_links['menu-sidebar-menu:node/59'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'node/59',
    'router_path' => 'node/%',
    'link_title' => 'What\'s What in SF',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
    'parent_path' => 'node/9',
  );
  // Exported menu link: menu-sidebar-menu:node/62
  $menu_links['menu-sidebar-menu:node/62'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Fragile Balance',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/59',
  );
  // Exported menu link: menu-sidebar-menu:node/63
  $menu_links['menu-sidebar-menu:node/63'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'node/63',
    'router_path' => 'node/%',
    'link_title' => 'Bigger than Life',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'node/59',
  );
  // Exported menu link: menu-sidebar-menu:node/64
  $menu_links['menu-sidebar-menu:node/64'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'node/64',
    'router_path' => 'node/%',
    'link_title' => 'Someone\'s Rocking the Boat',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '12',
    'parent_path' => 'node/59',
  );
  // Exported menu link: menu-sidebar-menu:node/65
  $menu_links['menu-sidebar-menu:node/65'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'node/65',
    'router_path' => 'node/%',
    'link_title' => 'Who\'s Who in SF',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '33',
    'parent_path' => 'node/9',
  );
  // Exported menu link: menu-sidebar-menu:node/9
  $menu_links['menu-sidebar-menu:node/9'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'San Francisco',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A Darkening World');
  t('Bigger than Life');
  t('Campaign Rules');
  t('Character Creation');
  t('Characters');
  t('Faces');
  t('Fragile Balance');
  t('Home');
  t('Locations');
  t('Map');
  t('Personalities');
  t('Places');
  t('Resources');
  t('San Francisco');
  t('Someone\'s Rocking the Boat');
  t('Themes and Thoughts');
  t('What\'s What in SF');
  t('Who\'s Who in SF');


  return $menu_links;
}
