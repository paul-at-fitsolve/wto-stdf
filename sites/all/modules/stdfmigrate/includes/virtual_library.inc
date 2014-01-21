<?php
class StdfMigrationVirtualLibraryMigration extends StdfMigration {
  public function __construct($arguments) {
    parent::__construct ( $arguments );
    $this->description = t ( 'Import virtual library from CSV.' );
    $this->systemOfRecord = Migration::SOURCE;
    $this->source = new MigrateSourceCSV ( $this->virtual_library_source_file, $this->vlibrarycsvcolumns (), array (
        'header_rows' => 1 
    ) );
    $this->destination = new MigrateDestinationFile ( 'virtual_library_document' );
    
    $this->map = new MigrateSQLMap ( $this->machineName, array (
        'ref' => array (
            'type' => 'int',
            'unsigned' => TRUE,
            'not null' => TRUE,
            'description' => 'Reference ID' 
        ) 
    ), MigrateDestinationFile::getKeySchema () );
    
    $this->addFieldMapping ( 'value', 'filename' );
    
    $this->addFieldMapping ( 'field_publication_date', 'pub_date' );
    
    $this->addFieldMapping ( 'field_publisher', 'publisher_en' )->separator(';');
    $this->addFieldMapping ( 'field_publisher:create_term' )->defaultValue ( TRUE );
    
    $this->addFieldMapping ( 'field_publisher', 'publisher_fr' )->separator(';');
    $this->addFieldMapping ( 'field_publisher:create_term' )->defaultValue ( TRUE );
    
    $this->addFieldMapping ( 'field_publisher', 'publisher_sp' )->separator(';');
    $this->addFieldMapping ( 'field_publisher:create_term' )->defaultValue ( TRUE );

    
    $this->addFieldMapping ( 'field_language', 'language' );
    
    $this->addFieldMapping ( 'field_author', 'authors' )->separator ( ';' );
    $this->addFieldMapping ( 'field_author:create_term' )->defaultValue ( TRUE );
    
    $this->addFieldMapping ( 'field_country', 'country_en' );
    $this->addFieldMapping ( 'field_country:create_term' )->defaultValue ( TRUE );
    
    $source_dir = drupal_get_path ( 'module', 'stdfmigrate' ) . '/virtual_library';
    
    $this->addFieldMapping ( 'source_dir' )->defaultValue ( $source_dir );
    
    $unmigrated = array (
        'uid',
        'timestamp',
        'field_publisher:source_type',
        'field_publisher:ignore_case',
        'field_author:source_type',
        'field_author:ignore_case',
        'field_keywords:source_type',
        'field_keywords:ignore_case',
        'field_document_type:source_type',
        'field_document_type:ignore_case',
        'field_country:source_type',
        'field_country:ignore_case',
        'path',
        'preserve_files',
        'destination_dir',
        'destination_file',
        'file_replace',
        'urlencode' 
    );
    
    $this->addUnmigratedDestinations ( $unmigrated, t ( 'Do Not Migrate' ) );
  }
  
  function prepareRow($row) {
    if (parent::prepareRow ( $row ) === FALSE) {
      return FALSE;
    }
    //Don't let PHP return HH:MM from the year - cos it will - 2013 is nearly quarter past eight!
    //The "Year (and just the year)" format only works if a time string has already been found -- otherwise this format is recognised as HH MM. 
    $row->pub_date = $row->pub_date . '/01/01'; 
    $row->pub_date = strtotime ( $row->pub_date ) ;
    
    //We need to make sure the language code is in lower case to map onto the defined language codes.
    $row->language = strtolower($row->language);
  }
}