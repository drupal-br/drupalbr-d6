<?php

/**
 * Implementation of hook_strongarm().
 */
function dbr_jobs_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_dbr_jobs';
  $strongarm->value = 0;
  $export['comment_anonymous_dbr_jobs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_dbr_jobs';
  $strongarm->value = '3';
  $export['comment_controls_dbr_jobs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_dbr_jobs';
  $strongarm->value = '2';
  $export['comment_dbr_jobs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_dbr_jobs';
  $strongarm->value = '4';
  $export['comment_default_mode_dbr_jobs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_dbr_jobs';
  $strongarm->value = '1';
  $export['comment_default_order_dbr_jobs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_dbr_jobs';
  $strongarm->value = '50';
  $export['comment_default_per_page_dbr_jobs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_dbr_jobs';
  $strongarm->value = '0';
  $export['comment_form_location_dbr_jobs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_dbr_jobs';
  $strongarm->value = '1';
  $export['comment_preview_dbr_jobs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_dbr_jobs';
  $strongarm->value = '1';
  $export['comment_subject_field_dbr_jobs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_dbr_jobs';
  $strongarm->value = array(
    'title' => '38',
    'body_field' => '40',
    'revision_information' => '49',
    'author' => '48',
    'options' => '50',
    'comment_settings' => '52',
    'menu' => '39',
    'taxonomy' => '43',
    'book' => '47',
    'path' => '53',
    'attachments' => '51',
  );
  $export['content_extra_weights_dbr_jobs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_dbr_jobs';
  $strongarm->value = '0';
  $export['language_content_type_dbr_jobs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dbr_jobs';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_dbr_jobs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_dbr_jobs';
  $strongarm->value = '1';
  $export['upload_dbr_jobs'] = $strongarm;

  return $export;
}
