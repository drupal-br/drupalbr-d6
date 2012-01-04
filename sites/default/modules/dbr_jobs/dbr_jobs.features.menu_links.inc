<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function dbr_jobs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:oportunidades
  $menu_links['primary-links:oportunidades'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'oportunidades',
    'router_path' => 'oportunidades',
    'link_title' => 'Oportunidades',
    'options' => array(
      'attributes' => array(
        'title' => 'Ofertas de empregos e trabalhos',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Oportunidades');


  return $menu_links;
}
