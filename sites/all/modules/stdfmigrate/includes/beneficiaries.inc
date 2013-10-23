<?php
/**
 * @file
*/
class StdfMigrationBeneficiariesMigration extends StdfMigration {
  public function __construct($arguments) {
    parent::__construct ( $arguments );
    
    $this->description = t ( 'Import beneficiary data from CSV.' );
    $this->dependencies = array (
        'ProjectNode' 
    );
    
    $this->source = new MigrateSourceCSV ( $this->project_source_file, $this->projectcsvcolumns (), array (
        'header_rows' => 1 
    ) );
    
    $this->map = new MigrateSQLMap ( $this->machineName, array (
        'reference_number' => array (
            'type' => 'varchar',
            'length' => 255,
            'not null' => TRUE,
            'description' => 'Reference ID' 
        ) 
    ), MigrateDestinationFieldCollection::getKeySchema () );
    
    $this->destination = new MigrateDestinationFieldCollection ( 'field_beneficiaries', array (
        'host_entity_type' => 'node' 
    ) );
    
    $this->addFieldMapping ( 'host_entity_id', 'reference_number' )->sourceMigration ( 'ProjectNode' );
    
    $this->addFieldMapping ( 'field_beneficiary_text', 'beneficiary' );
    $this->addFieldMapping ( 'field_beneficiary_text:create_term' )->defaultValue ( TRUE );
  }
}
