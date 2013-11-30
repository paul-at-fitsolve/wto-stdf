<?php
/**
 * @file
 * feature_event_calendar.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function feature_event_calendar_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'STDF Working Group Meeting',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c197e7c6-ecfe-446b-b78b-172e986e4cde',
  'type' => 'event',
  'language' => 'en',
  'created' => 1378724867,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '223d8022-03d6-4a72-bee2-fd089db6e844',
  'revision_uid' => 1,
  'body' => array(),
  'field_date_and_time' => array(
    'und' => array(
      0 => array(
        'value' => '2013-03-18 09:00:00',
        'value2' => '2013-03-19 18:00:00',
        'timezone' => 'Europe/London',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_agenda' => array(),
  'field_location' => array(
    'und' => array(
      0 => array(
        'lid' => 43,
        'name' => 'Geneva, Switzerland',
        'street' => '',
        'additional' => '',
        'city' => 'Geneva',
        'province' => '',
        'postal_code' => '',
        'country' => 'ch',
        'latitude' => 46.198392,
        'longitude' => 6.142296,
        'source' => 3,
        'is_primary' => 0,
        'province_name' => '',
        'country_name' => 'Switzerland',
      ),
    ),
  ),
  'field_slideshow' => array(),
  'field_organizer' => array(
    'und' => array(
      0 => array(
        'value' => 'STDF',
        'format' => NULL,
        'safe_value' => 'STDF',
      ),
    ),
  ),
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
  'date' => '2013-09-09 12:07:47 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Codex Committee on Pesticide Residues',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '85ccd7cc-c37c-4676-976d-60811bb72839',
  'type' => 'event',
  'language' => 'en',
  'created' => 1378725077,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '29c9bddc-1674-4df0-b959-0a47bbf440ac',
  'revision_uid' => 1,
  'body' => array(),
  'field_date_and_time' => array(
    'und' => array(
      0 => array(
        'value' => '2013-05-06 08:00:00',
        'value2' => '2013-09-13 17:00:00',
        'timezone' => 'Europe/London',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_agenda' => array(),
  'field_location' => array(
    'und' => array(
      0 => array(
        'lid' => 45,
        'name' => 'TBA, China',
        'street' => '',
        'additional' => '',
        'city' => 'TBA',
        'province' => '',
        'postal_code' => '',
        'country' => 'cn',
        'latitude' => 0,
        'longitude' => 0,
        'source' => 0,
        'is_primary' => 0,
        'province_name' => '',
        'country_name' => 'China',
      ),
    ),
  ),
  'field_slideshow' => array(),
  'field_organizer' => array(
    'und' => array(
      0 => array(
        'value' => 'Codex',
        'format' => NULL,
        'safe_value' => 'Codex',
      ),
    ),
  ),
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
  'date' => '2013-09-09 12:11:17 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Codex Committee on Contaminants in Foods',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '817e3499-2e27-4bd1-98a9-f9379069eb80',
  'type' => 'event',
  'language' => 'en',
  'created' => 1378724981,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8c0ae627-e5ed-4974-a9e0-7f65347762a8',
  'revision_uid' => 1,
  'body' => array(),
  'field_date_and_time' => array(
    'und' => array(
      0 => array(
        'value' => '2013-04-08 08:00:00',
        'value2' => '2013-04-12 17:00:00',
        'timezone' => 'Europe/London',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_agenda' => array(),
  'field_location' => array(
    'und' => array(
      0 => array(
        'lid' => 44,
        'name' => 'Moscow, Russian Federation',
        'street' => '',
        'additional' => '',
        'city' => 'Moscow',
        'province' => '',
        'postal_code' => '',
        'country' => 'ru',
        'latitude' => 0,
        'longitude' => 0,
        'source' => 0,
        'is_primary' => 0,
        'province_name' => '',
        'country_name' => 'Russia',
      ),
    ),
  ),
  'field_slideshow' => array(),
  'field_organizer' => array(
    'und' => array(
      0 => array(
        'value' => 'Codex',
        'format' => NULL,
        'safe_value' => 'Codex',
      ),
    ),
  ),
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
  'date' => '2013-09-09 12:09:41 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'WTO-SPS Committee Meeting',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a9407512-be53-4ebd-80ce-e02ad2f36cfe',
  'type' => 'event',
  'language' => 'en',
  'created' => 1378724555,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cfafa52f-2e9c-4f05-b0ae-d253396866cc',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>optional description</p>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>optional description</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_date_and_time' => array(
    'und' => array(
      0 => array(
        'value' => '2013-03-21 09:00:00',
        'value2' => '2013-03-22 18:00:00',
        'timezone' => 'Europe/London',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_agenda' => array(),
  'field_location' => array(
    'und' => array(
      0 => array(
        'lid' => 42,
        'name' => 'Geneva, Switzerland',
        'street' => '',
        'additional' => '',
        'city' => 'Geneva',
        'province' => '',
        'postal_code' => '',
        'country' => 'ch',
        'latitude' => 0,
        'longitude' => 0,
        'source' => 0,
        'is_primary' => 0,
        'province_name' => '',
        'country_name' => 'Switzerland',
      ),
    ),
  ),
  'field_slideshow' => array(),
  'field_organizer' => array(
    'und' => array(
      0 => array(
        'value' => 'WTO',
        'format' => NULL,
        'safe_value' => 'WTO',
      ),
    ),
  ),
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
  'date' => '2013-09-09 12:02:35 +0100',
);
  return $nodes;
}
