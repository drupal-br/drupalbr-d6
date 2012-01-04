<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dbr_jobs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function dbr_jobs_node_info() {
  $items = array(
    'dbr_jobs' => array(
      'name' => t('Oportunidade'),
      'module' => 'features',
      'description' => t('Cadastre uma oportunidade para a comunidade de Drupal'),
      'has_title' => '1',
      'title_label' => t('Cargo'),
      'has_body' => '1',
      'body_label' => t('Descrição do cargo'),
      'min_word_count' => '10',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function dbr_jobs_views_api() {
  return array(
    'api' => '2',
  );
}
