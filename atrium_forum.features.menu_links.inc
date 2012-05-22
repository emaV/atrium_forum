<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function atrium_forum_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:forum
  $menu_links['features:forum'] = array(
    'menu_name' => 'features',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forum',
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
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Forum');


  return $menu_links;
}
