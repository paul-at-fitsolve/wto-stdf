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
    'apachesolr_index_last' => array(
      'comment' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'field_collection_item' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'i18n_translation' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'mailchimp_campaign' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'mailchimp_list' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'node' => array(
        'last_changed' => '1385887131',
        'last_entity_id' => '983',
      ),
      'file' => array(
        'last_changed' => '1385887131',
        'last_entity_id' => '2811',
      ),
      'taxonomy_term' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_vocabulary' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'user' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'wysiwyg_profile' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
    ),
    'apachesolr_index_updated' => 1385967431,
    'apachesolr_last_optimize' => 1385898863,
    'apachesolr_search_facet_pages' => '',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'event',
      1 => 'general_content',
      2 => 'members_content',
      3 => 'project',
    ),
    'file' => array(
      0 => 'private_document',
      1 => 'public_documents',
      2 => 'virtual_library_document',
    ),
  );
  $export['defaultsearch'] = $environment;

  return $export;
}
