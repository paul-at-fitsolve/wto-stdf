<?php
/**
 * @file
 * feature_mailchimp_integration.features.inc
 */

/**
 * Implements hook_default_mailchimp_list().
 */
function feature_mailchimp_integration_default_mailchimp_list() {
  $items = array();
  $items['stdf_mail_list'] = entity_import('mailchimp_list', '{
    "name" : "stdf_mail_list",
    "mc_list_id" : "25fa97adb1",
    "label" : "STDF Mail List",
    "description" : "",
    "list_type" : "freeform",
    "settings" : {
      "roles" : { "1" : "1" },
      "mergefields" : {
        "FNAME" : "field-first-name",
        "LNAME" : "field-last-name",
        "MMERGE4" : "field-organization",
        "MMERGE5" : "field_user_country",
        "EMAIL" : "mail",
        "MMERGE3" : "picture:field-language"
      },
      "doublein" : 1,
      "show_register_form" : 0,
      "default_register_form_optin" : 0,
      "show_account_form" : 0,
      "include_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0
    },
    "created" : "1376592188",
    "updated" : "1376592188",
    "rdf_mapping" : []
  }');
  return $items;
}
