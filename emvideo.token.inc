/*
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


<?php

// hook token list implementation
function emvideo_token_list($type = 'all') {
  if ($type == 'field' || $type == 'all') {
    $tokens = array();
    $tokens['emvideo']['emvideo-url'] = t('embed-url');
    $tokens['emvideo']['emvideo-value'] = t('embed-value');
    $tokens['emvideo']['emvideo-provider'] = t('provider');
    $tokens['embed']['emvideo-duration']           = t('duration');
    $tokens['emvideo']['emvideo-title']            = t('if title is enable');
    $tokens['emvideo']['emvideo-description']           = t('if description is enable');
    $tokens['emvideo']['emvideo-data-thumbnail']           = t('thumbnail');
    $tokens['emvideo']['emvideo-data-emthumb-fid'] = t('emthumb fid (pretty printed)');
    $tokens['emvideo']['emvideo-data-emthmub-filemime'] = t('converted filemime type');
    $tokens['emvideo']['emvideo-data-emthumb-filename'] = t('filename');
    $tokens['emvideo']['filefield-data-emthumb-destination'] = t('destination path');
    return $tokens;
  }
}

// hook token values implementation
function emvideo_token_values($type, $object = NULL) {
  $tokens = array();
 if ($type == 'field' && isset($object[0]['embed'])) {
    $item = $object[0];
    $tokens['emvideo-url']  = $item['embed'];
    $tokens['emvideo-value'] = $item['value'];
    $tokens['emvideo-provider'] = $item['duration'];
    $tokens['emvideo-url'] = $item['embed'];
    $tokens['emvideo-value'] = $item['value'];
    $tokens['emvideo-provider'] = $item['provider'];
    $tokens['emvideo-duration'] = $item['duration'];
    $tokens['emvideo-title'] = $item['title'];
    $tokens['emvideo-description'] = $item['description'];
    $tokens['emvideo-data-thumbnail'] = $item['data']['thumbnail']['url'];
    $tokens['emvideo-data-emthumb-fid'] = $item['data']['emthumb']['fid'];
    $tokens['emvideo-data-emthmub-filemime'] = $item['data']['emthumb']['filemime'];
    $tokens['emvideo-data-emthumb-filename'] = $item['data']['emthumb']['filename'];
    $tokens['emvideo']['filefield-data-emthumb-destination'] = $item['data']['emthumb']['destination'];
  }
  return $tokens;  
}





