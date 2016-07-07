<?php

namespace Drupal\boilerplate\Controller;

use Drupal\Core\Controller\ControllerBase;

/**
 * Controller for our sample page route.
 */
class BoilerplatePageController extends ControllerBase {

  /**
   * Returns build array for our sample page.
   */
  public function showPage() {
    $output = [];

    $output[] = [
      '#markup' => $this->t('This is a sample page.'),
    ];

    return $output;
  }

}
