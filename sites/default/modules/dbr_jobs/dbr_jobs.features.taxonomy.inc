<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function dbr_jobs_taxonomy_default_vocabularies() {
  return array(
    'dbr_jobs_categoria' => array(
      'name' => 'Categoria',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'weight' => '0',
      'module' => 'features_dbr_jobs_categoria',
      'tags' => '1',
      'nodes' => array(
        'dbr_jobs' => 'dbr_jobs',
      ),
    ),
  );
}
