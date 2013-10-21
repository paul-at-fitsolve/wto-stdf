<?php

/**
 * @file
*/
class StdfMigrationImplementingEntityMigration extends StdfMigration
{
    public function __construct ($arguments)
    {
        parent::__construct($arguments);
        $this->description = t('Import Implementing Entity data from CSV.');
        $this->source = new MigrateSourceCSV($this->source_file, $this->csvcolumns(), array());
        // Create a MigrateDestination object.
        $term_options = MigrateDestinationTerm::options('en', 'WYSIWYG Filter');
        $this->destination = new MigrateDestinationTerm('implementing_entity');
        $this->addFieldMapping('name', 'implementing_entity');
    }
}