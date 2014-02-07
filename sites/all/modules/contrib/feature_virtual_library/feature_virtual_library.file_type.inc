<?php
/**
 * @file
 * feature_virtual_library.file_type.inc
 */

/**
 * Implements hook_file_default_types().
 */
function feature_virtual_library_file_default_types() {
  $export = array();

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'private_document';
  $file_type->label = 'Private Document';
  $file_type->description = 'This is used for all attachments to members\' content. These documents are served by Drupal rather than the webserver as they should not be accessed by anyone, other than a logged in authenticated member.';
  $file_type->mimetypes = array(
    0 => 'text/plain',
    1 => 'application/msword',
    2 => 'application/vnd.ms-excel',
    3 => 'application/pdf',
    4 => 'application/vnd.ms-powerpoint',
    5 => 'application/vnd.oasis.opendocument.text',
    6 => 'application/vnd.oasis.opendocument.spreadsheet',
    7 => 'application/vnd.oasis.opendocument.presentation',
    8 => 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet',
    9 => 'application/vnd.openxmlformats-officedocument.presentationml.presentation',
    10 => 'application/vnd.openxmlformats-officedocument.wordprocessingml.document',
  );
  $export['private_document'] = $file_type;

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'public_documents';
  $file_type->label = 'Public Document';
  $file_type->description = 'These documents are outside the virtual library, and are freely accessible by all. They have no meta-data beyond their title.';
  $file_type->mimetypes = array(
    0 => 'text/plain',
    1 => 'application/msword',
    2 => 'application/vnd.ms-excel',
    3 => 'application/pdf',
    4 => 'application/vnd.ms-powerpoint',
    5 => 'application/vnd.oasis.opendocument.text',
    6 => 'application/vnd.oasis.opendocument.spreadsheet',
    7 => 'application/vnd.oasis.opendocument.presentation',
    8 => 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet',
    9 => 'application/vnd.openxmlformats-officedocument.presentationml.presentation',
    10 => 'application/vnd.openxmlformats-officedocument.wordprocessingml.document',
  );
  $export['public_documents'] = $file_type;

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'virtual_library_document';
  $file_type->label = 'Virtual Library Document';
  $file_type->description = 'These documents are freely accessible and have metadata that allows them to be indexed as a resource within the Virtual Library. The Virtual Library is therefore a subset of the overall media library with the characteristics of being indexed with metadata such as Author and Publisher.';
  $file_type->mimetypes = array(
    0 => 'text/plain',
    1 => 'application/msword',
    2 => 'application/vnd.ms-excel',
    3 => 'application/pdf',
    4 => 'application/vnd.ms-powerpoint',
    5 => 'application/vnd.oasis.opendocument.text',
    6 => 'application/vnd.oasis.opendocument.spreadsheet',
    7 => 'application/vnd.oasis.opendocument.presentation',
    8 => 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet',
    9 => 'application/vnd.openxmlformats-officedocument.presentationml.presentation',
    10 => 'application/vnd.openxmlformats-officedocument.wordprocessingml.document',
  );
  $export['virtual_library_document'] = $file_type;

  return $export;
}
