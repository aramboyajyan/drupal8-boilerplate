<?php

namespace Drupal\boilerplate\Plugin\Block;

use Drupal\Core\Block\BlockBase;

/**
 * Provides a sample block.
 *
 * @Block(
 *   id = "boilerplate_block",
 *   admin_label = @Translation("Boilerplate: sample block")
 * )
 */
class BoilerplateBlock extends BlockBase {

  /**
   * {@inheritdoc}
   */
  public function build() {
    return array(
      '#markup' => $this->t('Content of the sample block.'),
    );
  }

}
