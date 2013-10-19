<?php
/**
 * @file
 * feature_apache_solr.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function feature_apache_solr_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'defaultsearch';
  $environment->name = 'defaultsearch';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(),
    'apachesolr_index_updated' => 1378391962,
    'apachesolr_read_only' => '0',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'members_content',
      1 => 'responsive_slide',
    ),
  );
  $export['defaultsearch'] = $environment;

  return $export;
}
