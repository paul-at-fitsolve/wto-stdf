<?php

class StdfMigrationVirtualLibraryMigration extends StdfMigration {
  public function __construct($arguments) {
    parent::__construct ( $arguments );
    $this->description = t ( 'Import virtual library from CSV.' );
    $this->systemOfRecord = Migration::SOURCE;
    $this->source = new MigrateSourceCSV ( $this->virtual_library_source_file, $this->vlibrarycsvcolumns (), array (
        'header_rows' => 1 
    ) );
    $this->destination = new MigrateDestinationFile ( 'document' );
    
    $this->map = new MigrateSQLMap ( $this->machineName, array (
        'ref' => array (
            'type' => 'int',
            'unsigned' => TRUE,
            'not null' => TRUE,
            'description' => 'Reference ID' 
        ) 
    ), MigrateDestinationFile::getKeySchema () );
  
  
  $this->addFieldMapping('value', 'filename');
  
  $this->addFieldMapping('field_publication_date', 'pub_date');

  $this->addFieldMapping('field_keywords','keywords');
  $this->addFieldMapping('field_keywords:create_term' )->defaultValue ( TRUE );
  
  $this->addFieldMapping('field_document_type','type');
  $this->addFieldMapping('field_document_type:create_term' )->defaultValue ( TRUE );
  
  $this->addFieldMapping('field_publisher','publisher');
  $this->addFieldMapping('field_publisher:create_term' )->defaultValue ( TRUE );
  
  $this->addFieldMapping('field_language','language');
  
  $this->addFieldMapping('field_author' , 'authors')->separator(';');
  $this->addFieldMapping('field_author:create_term' )->defaultValue ( TRUE );
  
  $source_dir = drupal_get_path('module', 'stdfmigrate') . '/virtual_library';
  
  $this->addFieldMapping('source_dir')
     ->defaultValue($source_dir);

  
  }
  
}