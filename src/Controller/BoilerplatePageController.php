<?php

namespace Drupal\boilerplate\Controller;

use Drupal\Core\Controller\ControllerBase;

/**
 * Controller for our sample page route.
 */
class BoilerplatePageController extends ControllerBase {

  /**
   * Returns build array for the simple page.
   */
  public function showSimplePage() {
    return [
      '#markup' => $this->t('This is a simple page.'),
    ];
  }

  /**
   * Returns build array for the arguments page.
   */
  public function showArgumentsPage($arg1, $arg2) {
    return [
      '#markup' => $this->t('This is the page demonstrating how to pass arguments through URL. Firsrt argument is: %arg1 and the second one is %arg2.', [
        '%arg1' => $arg1,
        '%arg2' => $arg2,
      ]),
    ];
  }

  /**
   * Returns build array for our sample themed page.
   */
  public function showThemedPage() {
    return [
      '#theme' => 'boilerplate',
    ];
  }

}
