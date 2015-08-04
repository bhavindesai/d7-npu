<?php
/**
 * @file
 * npu_base.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function npu_base_default_rules_configuration() {
  $items = array();
  $items['rules__nr_send_email_on_article_creation'] = entity_import('rules_config', '{ "rules__nr_send_email_on_article_creation" : {
      "LABEL" : "[NR] Send Email on Article Creation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "NR_Article" ],
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : { "node_insert--article" : { "bundle" : "article" } },
      "IF" : [
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "bdesai@northpointdigital.com",
            "subject" : "New Article Created by Larry",
            "message" : "New article created by Larry. Please login to xyz site and check it.",
            "from" : "admin@blehlalalalalallalallala.com",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
