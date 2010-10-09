<?php

/**
 * Implementation of hook_strongarm().
 */
function atrium_fserver_casetracker_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fserver_project';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_fserver_project';
  $strongarm->value = '1';

  $export['upload_fserver_project'] = $strongarm;
  return $export;
}
