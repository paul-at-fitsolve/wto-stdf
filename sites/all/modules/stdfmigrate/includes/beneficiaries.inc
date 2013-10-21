<?php
/**
 * @file


class StdfMigrationBeneficiariesMigration extends StdfMigration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $this->description = t('Import beneficiary data from CSV.');
        
        // Create a MigrateSource object, which manages retrieving the input data.
        $source_file = drupal_get_path('module', 'stdfmigrate') . '/stdfprojects.csv';
        $this->source = new MigrateSourceCSV( $source_file, $this->csvcolumns(), array());
        
   
        
    }
    
    
    
   
    
}
*/