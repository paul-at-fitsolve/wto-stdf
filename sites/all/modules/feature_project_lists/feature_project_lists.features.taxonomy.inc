<?php
/**
 * @file
 * feature_project_lists.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_project_lists_taxonomy_default_vocabularies() {
  return array(
    'implementing_entity' => array(
      'name' => 'Implementing entity',
      'machine_name' => 'implementing_entity',
      'description' => 'The entity that has prime responsibility for implementing the project.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
