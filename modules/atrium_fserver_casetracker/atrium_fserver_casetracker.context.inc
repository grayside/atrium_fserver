<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_fserver_casetracker_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fserver-section-casetracker';
  $context->description = '';
  $context->tag = 'Feature Server';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fserver_distro' => 'fserver_distro',
        'fserver_project' => 'fserver_project',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'atrium_casetracker-filters' => array(
          'module' => 'atrium_casetracker',
          'delta' => 'filters',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-atrium_casetracker-block_2' => array(
          'module' => 'views',
          'delta' => 'atrium_casetracker-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-atrium_casetracker-block_1' => array(
          'module' => 'views',
          'delta' => 'atrium_casetracker-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
        'views-3de5a072e9754aa7bce60e3f05d1538e' => array(
          'module' => 'views',
          'delta' => '3de5a072e9754aa7bce60e3f05d1538e',
          'region' => 'page_tools',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Feature Server');

  $export['fserver-section-casetracker'] = $context;
  return $export;
}
