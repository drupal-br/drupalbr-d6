<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function eventos_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:eventos
  $menu_links['primary-links:eventos'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'eventos',
    'router_path' => 'eventos',
    'link_title' => 'Eventos',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Eventos');


  return $menu_links;
}
