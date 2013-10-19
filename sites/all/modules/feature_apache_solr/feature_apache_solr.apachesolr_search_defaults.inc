<?php
/**
 * @file
 * feature_apache_solr.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function feature_apache_solr_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'core_search';
  $searcher->label = 'Core Search';
  $searcher->description = 'Core Search';
  $searcher->search_path = 'search/site';
  $searcher->page_title = 'Site';
  $searcher->env_id = 'defaultsearch';
  $searcher->settings = array(
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_browse' => 'browse',
    'apachesolr_search_spellcheck' => TRUE,
    'apachesolr_search_not_removable' => TRUE,
    'apachesolr_search_search_box' => TRUE,
  );
  $export['core_search'] = $searcher;

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'file_search';
  $searcher->label = 'File Search';
  $searcher->description = 'File Search';
  $searcher->search_path = 'search/file_entity';
  $searcher->page_title = 'File';
  $searcher->env_id = '';
  $searcher->settings = array(
    'fq' => array(
      0 => 'entity_type:file',
    ),
    'apachesolr_search_custom_enable' => TRUE,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_browse' => 'browse',
    'apachesolr_search_spellcheck' => TRUE,
    'apachesolr_search_search_box' => TRUE,
  );
  $export['file_search'] = $searcher;

  return $export;
}
