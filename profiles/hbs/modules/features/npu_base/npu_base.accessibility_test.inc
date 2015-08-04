<?php
/**
 * @file
 * npu_base.accessibility_test.inc
 */

/**
 * Implements hook_accessibility_test_default().
 */
function npu_base_accessibility_test_default() {
$accessibility_tests = array();
$accessibility_tests['aMustContainText'] = (object)array(
  'language' => 'en',
  'name' => 'Links should contain text',
  'quail_name' => 'aMustContainText',
  'severity' => 'severe',
  'status' => 1,
  'data' => array(),
  'error_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Because many users of screen-readers use links to navigate the page, providing links with no text (or with images that have empty "alt" attributes and no other readable text) hinders these users.',
        'summary' => NULL,
        'format' => 'filtered_html',
        'safe_value' => '<p>Because many users of screen-readers use links to navigate the page, providing links with no text (or with images that have empty "alt" attributes and no other readable text) hinders these users.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$accessibility_tests['aSuspiciousLinkText'] = (object)array(
  'language' => 'en',
  'name' => 'Link text should be useful',
  'quail_name' => 'aSuspiciousLinkText',
  'severity' => 'severe',
  'status' => 1,
  'data' => array(),
  'error_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Because many users of screen-readers use links to navigate the page, providing links with text that simply read "click here" gives no hint of the function of the link',
        'summary' => NULL,
        'format' => 'filtered_html',
        'safe_value' => '<p>Because many users of screen-readers use links to navigate the page, providing links with text that simply read "click here" gives no hint of the function of the link</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$accessibility_tests['blinkIsNotUsed'] = (object)array(
  'language' => 'en',
  'name' => 'The "blink" tag should not be used',
  'quail_name' => 'blinkIsNotUsed',
  'severity' => 'severe',
  'status' => 1,
  'data' => array(),
  'error_description' => array(
    'und' => array(
      0 => array(
        'value' => 'The <code>blink</code>. /code> tag should not be used. Ever.',
        'summary' => NULL,
        'format' => 'filtered_html',
        'safe_value' => '<p>The <code>blink</code>. /code&gt; tag should not be used. Ever.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$accessibility_tests['imgAltNotEmptyInAnchor'] = (object)array(
  'language' => 'en',
  'name' => 'An image within a link cannot have an empty "alt" attribute if there is no other text within the link',
  'quail_name' => 'imgAltNotEmptyInAnchor',
  'severity' => 'severe',
  'status' => 1,
  'data' => array(),
  'error_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Any image that is within a link (an <code>a</code>. /code> element) that has no other text cannot have an empty or missing "alt" attribute.',
        'summary' => NULL,
        'format' => 'filtered_html',
        'safe_value' => '<p>Any image that is within a link (an <code>a</code>. /code&gt; element) that has no other text cannot have an empty or missing "alt" attribute.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
return $accessibility_tests;
}
