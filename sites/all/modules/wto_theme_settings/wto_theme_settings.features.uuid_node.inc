<?php
/**
 * @file
 * wto_theme_settings.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function wto_theme_settings_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'New Front Page',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'bea25597-4460-4b7d-80d0-2f2882c2613d',
  'type' => 'general_content',
  'language' => 'fr',
  'created' => 1378240456,
  'tnid' => 91,
  'translate' => 0,
  'uuid' => '4e43e0cd-afbe-4a9b-b49c-e80b1ccdbf39',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>C\'est comment ils le font.</p>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>C\'est comment ils le font.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(
    'und' => array(
      0 => array(
        'value' => 25,
        'revision_id' => 71,
      ),
      1 => array(
        'value' => 26,
        'revision_id' => 72,
      ),
      2 => array(
        'value' => 27,
        'revision_id' => 73,
      ),
      3 => array(
        'value' => 28,
        'revision_id' => 74,
      ),
    ),
  ),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-03 21:34:16 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'New Front Page',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 1,
  'vuuid' => '4c71747f-61ac-48a5-8a14-0afc9dcb68bd',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1376854526,
  'tnid' => 91,
  'translate' => 0,
  'uuid' => '81f1aebf-1aa2-4c54-9f92-b4a31b37ec3d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This is how they do it.</p>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>This is how they do it.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(
    'und' => array(
      0 => array(
        'value' => 25,
        'revision_id' => 75,
      ),
      1 => array(
        'value' => 26,
        'revision_id' => 76,
      ),
      2 => array(
        'value' => 27,
        'revision_id' => 77,
      ),
      3 => array(
        'value' => 28,
        'revision_id' => 78,
      ),
    ),
  ),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-18 20:35:26 +0100',
);
  return $nodes;
}
