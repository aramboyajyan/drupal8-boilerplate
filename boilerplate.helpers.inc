<?php

/**
 * @file
 * Helper functions used in the module.
 *
 * Created by: Topsitemakers
 * http://www.topsitemakers.com/
 */

/**
 * Helper function - generate a random string.
 */
function _boilerplate_generate_random_string($length = 32) {
  $chars = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789';  
  $size  = strlen($chars);
  $str   = '';
  for ($i = 0; $i < $length; $i++) {
    $str .= $chars[rand(0, $size - 1)];
  }

  return $str;
}

/**
 * Helper function - secure string comparison.
 *
 * Taken from HTTP Auth library of Zend Framework.
 * See http://stackoverflow.com/q/10576827/1520477 for discussion.
 */
function _boilerplate_secure_compare($a, $b) {
  if (strlen($a) !== strlen($b)) {
    return FALSE;
  }
  $result = 0;
  for ($i = 0; $i < strlen($a); $i++) {
    $result |= ord($a[$i]) ^ ord($b[$i]);
  }
  return $result == 0;
}

/**
 * Helper function - check if the current request is an AJAX request.
 */
function _boilerplate_is_ajax_request() {
  return !empty($_SERVER['HTTP_X_REQUESTED_WITH']) && drupal_strtolower($_SERVER['HTTP_X_REQUESTED_WITH']) == 'xmlhttprequest';
}

/**
 * Helper function - trim a string.
 */
function _boilerplate_trim_string_with_ellipsis($string, $length) {
  if (strlen($string) > $length) {
    $string = drupal_substr($string, 0, $length) . '&hellip;';
  }

  return $string;
}
