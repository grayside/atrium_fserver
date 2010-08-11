<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_fserver_casetracker_context_default_contexts() {
  module_load_include('inc', 'atrium_fserver_casetracker', 'atrium_fserver_casetracker.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_fserver_casetracker_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_fserver_casetracker_ctools_plugin_api() {
  module_load_include('inc', 'atrium_fserver_casetracker', 'atrium_fserver_casetracker.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_fserver_casetracker_ctools_plugin_api', $args);
}
