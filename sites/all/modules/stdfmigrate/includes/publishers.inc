<?php
class StdfMigrationPublisherMigration extends StdfMigration {
  public function __construct($arguments) {
    parent::__construct ( $arguments );
    $this->description = t ( 'Import publishers from CSV.' );
    $this->systemOfRecord = Migration::SOURCE;
    $this->source = new MigrateSourceCSV ( $this->publishers_source_file, $this->publisherscolumns(), array (
        'header_rows' => 1 
    ) );

    $term_options = MigrateDestinationTerm::options('en','',FALSE);
    $this->destination = new MigrateDestinationTerm('publisher', $term_options);
    $this->map = new MigrateSQLMap ( $this->machineName, array (
        'ref' => array (
            'type' => 'int',
            'unsigned' => TRUE,
            'not null' => TRUE,
            'description' => 'Reference ID' 
        ) 
    ), MigrateDestinationTerm::getKeySchema () );
    
    
    $this->addFieldMapping('name', 'publisher');
  }
}