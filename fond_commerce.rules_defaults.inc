<?php

/**
 * Implements hook_default_rules_configuration().
 */
function fond_commerce_default_rules_configuration() {
  $items = array();
  $items['fond_commerce_update_the_order_status_when_paid_in_full'] = entity_import('rules_config', '{ "fond_commerce_update_the_order_status_when_paid_in_full" : {
      "LABEL" : "Update the order status when paid in full",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Checkout" ],
      "REQUIRES" : [ "commerce_order", "commerce_payment" ],
      "ON" : { "commerce_payment_order_paid_in_full" : [] },
      "DO" : [
        { "commerce_order_update_state" : { "commerce_order" : [ "commerce-order" ], "order_state" : "completed" } }
      ]
    }
  }');
  $items['rules_checkout_when_adding_product_to_cart'] = entity_import('rules_config', '{ "rules_checkout_when_adding_product_to_cart" : {
      "LABEL" : "Go directly to checkout when adding product to cart",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce" ],
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "DO" : [ { "redirect" : { "url" : "checkout" } } ]
    }
  }');
  return $items;
}
