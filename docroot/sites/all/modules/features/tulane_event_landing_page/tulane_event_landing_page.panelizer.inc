<?php
/**
 * @file
 * tulane_event_landing_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tulane_event_landing_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3d904fdf-cb0b-4c36-b42b-a376718917df';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-94900f60-115c-44de-963f-1db83895afb3';
    $pane->panel = 'left';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94900f60-115c-44de-963f-1db83895afb3';
    $display->content['new-94900f60-115c-44de-963f-1db83895afb3'] = $pane;
    $display->panels['left'][0] = 'new-94900f60-115c-44de-963f-1db83895afb3';
    $pane = new stdClass();
    $pane->pid = 'new-d21ef32b-541a-42b4-bea9-f259c8cfbc1b';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'arguments' => array(
        'field_organizations_ref_tid' => '%node:field_organizations_ref',
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd21ef32b-541a-42b4-bea9-f259c8cfbc1b';
    $display->content['new-d21ef32b-541a-42b4-bea9-f259c8cfbc1b'] = $pane;
    $display->panels['right'][0] = 'new-d21ef32b-541a-42b4-bea9-f259c8cfbc1b';
    $pane = new stdClass();
    $pane->pid = 'new-7a3806f6-5388-4d5b-89ae-257f8ba3ffe2';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'arguments' => array(
        'field_organizations_ref_tid' => '%node:field_organizations_ref',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7a3806f6-5388-4d5b-89ae-257f8ba3ffe2';
    $display->content['new-7a3806f6-5388-4d5b-89ae-257f8ba3ffe2'] = $pane;
    $display->panels['right'][1] = 'new-7a3806f6-5388-4d5b-89ae-257f8ba3ffe2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0498f509-c2ce-4dc2-bf26-986e29361048';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-26ecd833-7905-481c-93b1-780298ade362';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'plain_text',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26ecd833-7905-481c-93b1-780298ade362';
    $display->content['new-26ecd833-7905-481c-93b1-780298ade362'] = $pane;
    $display->panels['center'][0] = 'new-26ecd833-7905-481c-93b1-780298ade362';
    $pane = new stdClass();
    $pane->pid = 'new-af7fae3c-332c-4c4a-aedc-29cf2e7c6ac5';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'quickedit' => array(
          'editor' => 'form',
        ),
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'af7fae3c-332c-4c4a-aedc-29cf2e7c6ac5';
    $display->content['new-af7fae3c-332c-4c4a-aedc-29cf2e7c6ac5'] = $pane;
    $display->panels['center'][1] = 'new-af7fae3c-332c-4c4a-aedc-29cf2e7c6ac5';
    $pane = new stdClass();
    $pane->pid = 'new-910cc429-81e3-45a9-8469-f9bd59f009fe';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_organizations_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '910cc429-81e3-45a9-8469-f9bd59f009fe';
    $display->content['new-910cc429-81e3-45a9-8469-f9bd59f009fe'] = $pane;
    $display->panels['center'][2] = 'new-910cc429-81e3-45a9-8469-f9bd59f009fe';
    $pane = new stdClass();
    $pane->pid = 'new-22413f80-e020-4a44-a463-dbf7b45f73ed';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '22413f80-e020-4a44-a463-dbf7b45f73ed';
    $display->content['new-22413f80-e020-4a44-a463-dbf7b45f73ed'] = $pane;
    $display->panels['center'][3] = 'new-22413f80-e020-4a44-a463-dbf7b45f73ed';
    $pane = new stdClass();
    $pane->pid = 'new-c070811a-c8fe-406f-aa45-c7152da89f86';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c070811a-c8fe-406f-aa45-c7152da89f86';
    $display->content['new-c070811a-c8fe-406f-aa45-c7152da89f86'] = $pane;
    $display->panels['center'][4] = 'new-c070811a-c8fe-406f-aa45-c7152da89f86';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-26ecd833-7905-481c-93b1-780298ade362';
  $panelizer->display = $display;
  $export['node:event:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f61327f4-ede2-468a-a89f-80230b665250';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f775d860-7592-4328-b0d9-4ff8c865c87e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'colorbox',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'colorbox_node_style' => '',
        'colorbox_node_style_first' => '',
        'colorbox_image_style' => '',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'auto',
        'colorbox_caption_custom' => '',
        'colorbox_multivalue_index' => NULL,
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f775d860-7592-4328-b0d9-4ff8c865c87e';
    $display->content['new-f775d860-7592-4328-b0d9-4ff8c865c87e'] = $pane;
    $display->panels['center'][0] = 'new-f775d860-7592-4328-b0d9-4ff8c865c87e';
    $pane = new stdClass();
    $pane->pid = 'new-1b996d72-0bbc-429f-937e-6753691eb0c8';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'plain_text',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1b996d72-0bbc-429f-937e-6753691eb0c8';
    $display->content['new-1b996d72-0bbc-429f-937e-6753691eb0c8'] = $pane;
    $display->panels['center'][1] = 'new-1b996d72-0bbc-429f-937e-6753691eb0c8';
    $pane = new stdClass();
    $pane->pid = 'new-0cec04dc-c844-4ae4-bc20-ff951c9a3f95';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'quickedit' => array(
          'editor' => 'form',
        ),
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0cec04dc-c844-4ae4-bc20-ff951c9a3f95';
    $display->content['new-0cec04dc-c844-4ae4-bc20-ff951c9a3f95'] = $pane;
    $display->panels['center'][2] = 'new-0cec04dc-c844-4ae4-bc20-ff951c9a3f95';
    $pane = new stdClass();
    $pane->pid = 'new-820906ad-b62c-46d5-9a4f-3f927d74fd8f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_organizations_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '820906ad-b62c-46d5-9a4f-3f927d74fd8f';
    $display->content['new-820906ad-b62c-46d5-9a4f-3f927d74fd8f'] = $pane;
    $display->panels['center'][3] = 'new-820906ad-b62c-46d5-9a4f-3f927d74fd8f';
    $pane = new stdClass();
    $pane->pid = 'new-1fedbb1b-a377-4018-8407-4b4e32a2e2f6';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1fedbb1b-a377-4018-8407-4b4e32a2e2f6';
    $display->content['new-1fedbb1b-a377-4018-8407-4b4e32a2e2f6'] = $pane;
    $display->panels['center'][4] = 'new-1fedbb1b-a377-4018-8407-4b4e32a2e2f6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f775d860-7592-4328-b0d9-4ff8c865c87e';
  $panelizer->display = $display;
  $export['node:event:default:full'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:homepage';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'homepage';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7e79f76c-0013-4170-93f4-ddb4ca8fd3d2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f40011d1-14ed-4232-9862-f5302c8d58c2';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'plain_text',
        ),
        'trim_length' => 600,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f40011d1-14ed-4232-9862-f5302c8d58c2';
    $display->content['new-f40011d1-14ed-4232-9862-f5302c8d58c2'] = $pane;
    $display->panels['center'][0] = 'new-f40011d1-14ed-4232-9862-f5302c8d58c2';
    $pane = new stdClass();
    $pane->pid = 'new-549a3d3e-ef4b-42f1-9f99-b9bead1d0dea';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'short',
        'fromto' => 'value',
        'multiple_number' => '1',
        'multiple_from' => '',
        'multiple_to' => '',
        'show_repeat_rule' => 'hide',
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '549a3d3e-ef4b-42f1-9f99-b9bead1d0dea';
    $display->content['new-549a3d3e-ef4b-42f1-9f99-b9bead1d0dea'] = $pane;
    $display->panels['center'][1] = 'new-549a3d3e-ef4b-42f1-9f99-b9bead1d0dea';
    $pane = new stdClass();
    $pane->pid = 'new-07aad3a4-0033-4411-9c38-0877fa9d6e9e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '175x175',
        'image_link' => 'content',
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '07aad3a4-0033-4411-9c38-0877fa9d6e9e';
    $display->content['new-07aad3a4-0033-4411-9c38-0877fa9d6e9e'] = $pane;
    $display->panels['center'][2] = 'new-07aad3a4-0033-4411-9c38-0877fa9d6e9e';
    $pane = new stdClass();
    $pane->pid = 'new-3ba1500b-0181-402b-b9a5-a1abd3a681cc';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_organizations_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3ba1500b-0181-402b-b9a5-a1abd3a681cc';
    $display->content['new-3ba1500b-0181-402b-b9a5-a1abd3a681cc'] = $pane;
    $display->panels['center'][3] = 'new-3ba1500b-0181-402b-b9a5-a1abd3a681cc';
    $pane = new stdClass();
    $pane->pid = 'new-e82c3128-ec86-4f5f-a401-d11d99d2a6dd';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'homepage',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e82c3128-ec86-4f5f-a401-d11d99d2a6dd';
    $display->content['new-e82c3128-ec86-4f5f-a401-d11d99d2a6dd'] = $pane;
    $display->panels['center'][4] = 'new-e82c3128-ec86-4f5f-a401-d11d99d2a6dd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f40011d1-14ed-4232-9862-f5302c8d58c2';
  $panelizer->display = $display;
  $export['node:event:default:homepage'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd9e500f1-1fb7-49a9-aed0-3d48c6038861';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-be7f5056-2e4b-4597-8605-a58f7dd2ae98';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => 600,
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'be7f5056-2e4b-4597-8605-a58f7dd2ae98';
    $display->content['new-be7f5056-2e4b-4597-8605-a58f7dd2ae98'] = $pane;
    $display->panels['center'][0] = 'new-be7f5056-2e4b-4597-8605-a58f7dd2ae98';
    $pane = new stdClass();
    $pane->pid = 'new-440a7a13-d6ce-4ec2-9a49-2c4ec364c05b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '440a7a13-d6ce-4ec2-9a49-2c4ec364c05b';
    $display->content['new-440a7a13-d6ce-4ec2-9a49-2c4ec364c05b'] = $pane;
    $display->panels['center'][1] = 'new-440a7a13-d6ce-4ec2-9a49-2c4ec364c05b';
    $pane = new stdClass();
    $pane->pid = 'new-90495e82-456e-4d55-9e73-cbbeea23e2a0';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'fromto' => 'value',
        'multiple_number' => '1',
        'multiple_from' => '',
        'multiple_to' => '',
        'show_repeat_rule' => 'hide',
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '90495e82-456e-4d55-9e73-cbbeea23e2a0';
    $display->content['new-90495e82-456e-4d55-9e73-cbbeea23e2a0'] = $pane;
    $display->panels['center'][2] = 'new-90495e82-456e-4d55-9e73-cbbeea23e2a0';
    $pane = new stdClass();
    $pane->pid = 'new-c33fbf01-6e23-46ba-8e1c-87146a2d0ad7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_organizations_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c33fbf01-6e23-46ba-8e1c-87146a2d0ad7';
    $display->content['new-c33fbf01-6e23-46ba-8e1c-87146a2d0ad7'] = $pane;
    $display->panels['center'][3] = 'new-c33fbf01-6e23-46ba-8e1c-87146a2d0ad7';
    $pane = new stdClass();
    $pane->pid = 'new-2c1cb156-d0c0-4e3a-aa49-81dbd35f9c6d';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'teaser',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2c1cb156-d0c0-4e3a-aa49-81dbd35f9c6d';
    $display->content['new-2c1cb156-d0c0-4e3a-aa49-81dbd35f9c6d'] = $pane;
    $display->panels['center'][4] = 'new-2c1cb156-d0c0-4e3a-aa49-81dbd35f9c6d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-be7f5056-2e4b-4597-8605-a58f7dd2ae98';
  $panelizer->display = $display;
  $export['node:event:default:teaser'] = $panelizer;

  return $export;
}
