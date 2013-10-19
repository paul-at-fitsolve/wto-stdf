<?php

/**
 * @file
*/
class StdfMigrationProjectMigration extends StdfMigration {
  public function __construct($arguments) {
    parent::__construct ( $arguments );
    $this->description = t ( 'Import project data from CSV.' );
    $this->systemOfRecord = Migration::SOURCE;
    $this->source = new MigrateSourceCSV ( $this->project_source_file, $this->projectcsvcolumns (), array (
        'header_rows' => 1 
    ) );
    $this->destination = new MigrateDestinationNode ( 'project' );
    
    $this->map = new MigrateSQLMap ( $this->machineName, array (
        'reference_number' => array (
            'type' => 'varchar',
            'length' => 255,
            'not null' => TRUE,
            'description' => 'Reference ID' 
        ) 
    ), MigrateDestinationNode::getKeySchema () );
    
    $unmigrated = array (
        'status',
        'uid',
        'created',
        'changed',
        'promote',
        'sticky',
        'revision',
        'log',
        'language',
        'tnid',
        'translate',
        'revision_uid',
        'is_new',
        'body:summary',
        'body:format',
        'body:language',
        'field_reference_number:language',
        'field_responsible:language',
        'field_accounting_code:language',
        'field_implementing_entity:source_type',
        'field_implementing_entity:ignore_case',
        'field_actions:language' 
    )
    ;
    
    $this->addUnmigratedDestinations ( $unmigrated, t ( 'Do Not Migrate' ) );
    
    $this->addFieldMapping ( 'body', 'objective' );
    $this->addFieldMapping ( 'field_reference_number', 'reference_number' );
    $this->addFieldMapping ( 'field_responsible', 'responsible' );
    $this->addFieldMapping ( 'field_previous_responsible', 'previous_responsible' );
    $this->addFieldMapping ( 'field_accounting_code', 'accounting_code' );
    $this->addFieldMapping ( 'field_type', 'type' );
    $this->addFieldMapping ( 'field_status', 'status' );
    $this->addFieldMapping ( 'field_ppg_outcome', 'ppg_outcome' );
    $this->addFieldMapping ( 'field_region', 'region' );
    $this->addFieldMapping ( 'title', 'title' );
    $this->addFieldMapping ( 'field_dac', 'dac' );
    $this->addFieldMapping ( 'field_sector', 'sector' );
    $this->addFieldMapping ( 'field_implementing_entity', 'implementing_entity' );
    $this->addFieldMapping ( 'field_implementing_entity:create_term' )->defaultValue ( TRUE );
    $this->addFieldMapping ( 'field_partner', 'partners' );
    $this->addFieldMapping ( 'field_partner:create_term' )->defaultValue ( TRUE );
    $this->addFieldMapping ( 'field_approval_date', 'approval_date' );
    // $this->addFieldMapping('approval_year');
    $this->addFieldMapping ( 'field_start_date', 'start_date' );
    // $this->addFieldMapping('start_year');
    $this->addFieldMapping ( 'field_start_date:value2', 'end_date' );
    $this->addFieldMapping ( 'field_extension_date', 'extension' );
    $this->addFieldMapping ( 'field_end_date', 'actual_end_date' );
    // $this->addFieldMapping('end_year');
    $this->addFieldMapping ( 'field_actions', 'actions_since' );
    $this->addFieldMapping ( 'field_actions_required', 'actions_required' );
    $this->addFieldMapping ( 'field_budget_total_stdf', 'total_stdf' );
    $this->addFieldMapping ( 'field_budget_implementation', 'implementation_budget' );
    // $this->addFieldMapping('overhead');
    $this->addFieldMapping ( 'field_budget_non_stdf_contributi', 'non_stdf_contribution' );
    $this->addFieldMapping ( 'field_budget_total_project_value', 'total_project_value' );
    $this->addFieldMapping ( 'field_budget_euros', 'budget_eur' );
    $this->addFieldMapping ( 'field_budget_swiss_francs', 'budget_chf' );
    $this->addFieldMapping ( 'field_comments', 'comments' );
    
    // Special
  // mapping
  // for
  // migrating
  // and
  // downloading
  // file
  // attachments
    // $associated_file_arguments
  // =
  // MigrateFileFieldHandler::arguments(NULL,
    // 'file_copy',
  // FILE_EXISTS_RENAME);
    // $this->addFieldMapping('field_documents',
    // 'files')->arguments($associated_file_arguments);
  }
}
 