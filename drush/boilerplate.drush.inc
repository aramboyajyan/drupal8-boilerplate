<?php

/**
 * @file
 * Drush integration.
 */

/**
 * Implements hook_drush_command().
 */
function boilerplate_drush_command() {
  $items = array();

  // The key in the $items array is the name of the command.
  $items['boilerplate'] = array(
    'callback' => 'drush_boilerplate_callback',
    'description' => dt('Sample Drush action executed through the Boilerplate module.'),
    // For older version of Drush (v6 and lower). In newer versions this is
    // deprecated.
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'arguments' => array(
      'arg1' => dt('Optional. Sample argument 1.'),
      'arg2' => dt('Optional. Sample argument 2.'),
    ),
    'aliases' => array('bpl'),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function boilerplate_drush_help($section) {
  switch ($section) {
    case 'drush:boilerplate':
      return dt('This is the help text displayed for our custom Drush command.');
  }
}

/**
 * Command to download the Chosen plugin.
 */
function drush_boilerplate_callback() {
  // Default argument values.
  $arg1 = 'default argument 1';
  $arg2 = 'default argument 2';

  // Get the arguments from CLI.
  $args = func_get_args();
  if (!empty($args[1])) $arg2 = $args[0];
  if (!empty($args[2])) $arg2 = $args[1];

  drush_log(dt('This is a custom Drush command. Argument 1: @arg1. Argument 2: @arg2.', [
    '@arg1' => $arg1,
    '@arg2' => $arg2,
  ]));
}
