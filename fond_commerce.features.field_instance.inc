<?php
/**
 * @file
 * fond_commerce.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fond_commerce_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'commerce_customer_profile-billing-commerce_customer_address'
  $field_instances['commerce_customer_profile-billing-commerce_customer_address'] = array(
    'bundle' => 'billing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => -10,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => -10,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'default_country' => 'site_default',
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => -10,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'commerce_customer_address',
    'label' => 'Address',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'format_handlers' => array(
          0 => 'address',
          1 => 'name-oneline',
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => -10,
    ),
  );

  // Exported field_instance: 'commerce_customer_profile-billing-field_cpr_nummer'
  $field_instances['commerce_customer_profile-billing-field_cpr_nummer'] = array(
    'bundle' => 'billing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'CPR-nummeret er nødvendigt indtil fonden er etableret. Derefter sletter vi alle CPR-numre.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -9,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_cpr_nummer',
    'label' => 'CPR-nummer',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -9,
    ),
  );

  // Exported field_instance: 'commerce_product-product-commerce_price'
  $field_instances['commerce_product-product-commerce_price'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'commerce_line_item_display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_line_item_token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'line_item' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'node_featured' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_full' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_rss' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_search_index' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_search_result' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 2,
      ),
      'node_token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'commerce_price',
    'label' => 'Price',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'commerce_product-product-field_product_image'
  $field_instances['commerce_product-product-field_product_image'] = array(
    'bundle' => 'product',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'line_item' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'field_product_image',
    'label' => 'Billede',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'products',
      'file_extensions' => 'png jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => TRUE,
        'manualcrop_default_crop_area' => TRUE,
        'manualcrop_enable' => FALSE,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => TRUE,
        'manualcrop_keyboard' => TRUE,
        'manualcrop_maximize_default_crop_area' => FALSE,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => FALSE,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-produkt-body'
  $field_instances['node-produkt-body'] = array(
    'bundle' => 'produkt',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-produkt-field_product'
  $field_instances['node-produkt-field_product'] = array(
    'bundle' => 'produkt',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => 1,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => 0,
          'show_single_product_attributes' => 0,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 3,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_product',
    'label' => 'Product',
    'required' => 0,
    'settings' => array(
      'field_injection' => 1,
      'referenceable_types' => array(
        'donation' => 0,
        'product' => 'product',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 0,
          'autogenerate_title' => 1,
          'delete_references' => 0,
          'match_operator' => 'CONTAINS',
          'use_variation_language' => 1,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Billede');
  t('Body');
  t('CPR-nummer');
  t('CPR-nummeret er nødvendigt indtil fonden er etableret. Derefter sletter vi alle CPR-numre.');
  t('Price');
  t('Product');

  return $field_instances;
}
