<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function fserver_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fserver-section-feature';
  $context->description = 'Feature Server > All';
  $context->tag = 'Feature Server';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fserver_distro' => 'fserver_distro',
        'fserver_project' => 'fserver_project',
        'fserver_release' => 'fserver_release',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'views' => array(
      'values' => array(
        'fserver_projects:page_1' => 'fserver_projects:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'fserver',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Feature Server');
  t('Feature Server > All');

  $export['fserver-section-feature'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fserver-section-project';
  $context->description = 'Feature Server > Projects';
  $context->tag = 'Feature Server';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fserver_distro' => 'fserver_distro',
        'fserver_project' => 'fserver_project',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fserver_releases-block_1' => array(
          'module' => 'views',
          'delta' => 'fserver_releases-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Feature Server');
  t('Feature Server > Projects');

  $export['fserver-section-project'] = $context;
  return $export;
}
