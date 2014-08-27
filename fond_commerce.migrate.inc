<?php

/**
 * @file
 */

class FondProduct extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import products from CSV file.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sku' => array(
          'type' => 'varchar',
          'length' => 32,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('commerce_product', 'product')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'fond_commerce') . '/import/products.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationEntityAPI('commerce_product', 'product');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('sku', 'sku');
    $this->addFieldMapping('commerce_price', 'price');
    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('language', 'language');

    // Featured image
    $this->addFieldMapping('field_product_image', 'image');
    $this->addFieldMapping('field_product_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_product_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'fond_commerce') . '/import/files');

  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('sku', 'SKU');
    $columns[2] = array('price', 'Price');
    $columns[3] = array('image', 'Image');
    
    return $columns;
  }

  function prepareRow($row) {
    $row->uid = 1;
    $row->language = LANGUAGE_NONE;
  }
}

class FondProductNode extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import product nodes.');
    $this->dependencies = array('FondProduct');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'fond_commerce') . '/import/product_nodes.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('produkt');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title', 'title');

    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');

    // Connect the products.
    $this->addFieldMapping('field_product', 'skus');
  }

  public function prepareRow($row) {
    $products = array();
    foreach (explode(',', $row->sku) as $sku) {
      $product = commerce_product_load_by_sku($sku);
      $products[] = $product->product_id;
    }
    $row->skus = $products;
  }

  function csvcolumns() {
    $columns[0] = array('id', 'Id');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('body', 'Body');
    $columns[3] = array('sku', 'SKU');
    $columns[4] = array('image', 'Image');
    return $columns;
  }
}

class FondDonationProduct extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import donations from CSV file.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sku' => array(
          'type' => 'varchar',
          'length' => 32,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('commerce_product', 'donation')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'fond_commerce') . '/import/donations.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationEntityAPI('commerce_product', 'donation');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('sku', 'sku');
    $this->addFieldMapping('commerce_price', 'price');
    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('language', 'language');
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('sku', 'SKU');
    $columns[2] = array('price', 'Price');

    return $columns;
  }

  function prepareRow($row) {
    $row->uid = 1;
    $row->language = LANGUAGE_NONE;
  }
}

class FondDonationNode extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import product nodes.');
    $this->dependencies = array('FondDonationProduct');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'fond_commerce') . '/import/donation_nodes.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('donation');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title', 'title');

    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');

    // Connect the products.
    $this->addFieldMapping('field_product', 'skus');
  }

  public function prepareRow($row) {
    $products = array();
    foreach (explode(',', $row->sku) as $sku) {
      $product = commerce_product_load_by_sku($sku);
      $products[] = $product->product_id;
    }
    $row->skus = $products;
  }

  function csvcolumns() {
    $columns[0] = array('id', 'Id');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('body', 'Body');
    $columns[3] = array('sku', 'SKU');
    $columns[4] = array('image', 'Image');
    return $columns;
  }
}
