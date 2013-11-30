<?php
/**
 * @file
 * feature_general_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function feature_general_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Good practice',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd33595df-1011-400a-b234-d0e387b9fa5d',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1379016056,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '014ea535-e2d5-412e-95b6-3e5242621c4c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>As part of its objective to enhance coordination in SPS-related technical assistance, the STDF analyses and disseminates information on good practice in the provision and receipt of SPS-related assistance.</p>


<div class="accordion">
    <h3><a href="#">Research on good practice in SPS-related technical assistance</a></h3>
    <div>
    <p>The STDF and OECD carried out joint research in 2008 in three regions – Central America, East Africa and the Greater Mekong Delta Sub-Region – to identify good practices in SPS-related technical assistance that could be replicated more widely</p>
   <p>The research was based on responses to a survey (G/SPS/GEN/816 and Add.1), which requested WTO Members and OECD contact points to nominate SPS-related projects in the three regions that could be considered as examples of good practice. Interviews were subsequently carried out with project beneficiaries and partners to seek their views on good practice aspects in the identified projects.</p>
    <p>The findings of the good practice research are summarized in an overview and synthesis paper (G/SPS/GEN/875). Detailed information on the findings in each region is also available:</p>
    <ul>
       <li><a href="#">Regional report for Central America</a></li>
       <li><a href="#">Regional report for East Africa</a></li>
       <li><a href="#">Regional report for Greater Mekong Delta</a></li>
    </ul>
    </div>

 <h3><a href="#">Workshop on good practice in SPS technical cooperation – October 2008</a></h3>
    <div>
    <p>The findings of the STDF/OECD research on good practice in SPS-related technical cooperation were presented at a workshop, organized in collaboration with the WTO Secretariat, in Geneva on 6 October 2008. The workshop was attended by some 250 delegates to the SPS Committee including 60 persons funded by the WTO Secretariat and the STDF.</p>
   <p>The workshop provided an opportunity to consider the Paris Principles in the context of the highly technical area of SPS-related technical cooperation, and considered how to maximize the positive impact on trade performance of SPS-related technical assistance. Detailed information on the workshop – including the programme, presentations, podcasts of discussions and a summary report – is available on the <a href="#">WTO SPS gateway</a>.</p>
    <p>See the <a href="#">Summary Report</a> of the meeting and the <a href="#">Final Report</a> for more information.</p>
    <p>See the <a href="#">STDF Briefing Note No. 1</a> summarizing the key findings of the STDF survey on good practice and highlights major conclusion of the workshop</p>
    </div>
</div>
 ',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>As part of its objective to enhance coordination in SPS-related technical assistance, the STDF analyses and disseminates information on good practice in the provision and receipt of SPS-related assistance.</p>
<div class="accordion">
<h3><a href="#">Research on good practice in SPS-related technical assistance</a></h3>
<div>
<p>The STDF and OECD carried out joint research in 2008 in three regions – Central America, East Africa and the Greater Mekong Delta Sub-Region – to identify good practices in SPS-related technical assistance that could be replicated more widely</p>
<p>The research was based on responses to a survey (G/SPS/GEN/816 and Add.1), which requested WTO Members and OECD contact points to nominate SPS-related projects in the three regions that could be considered as examples of good practice. Interviews were subsequently carried out with project beneficiaries and partners to seek their views on good practice aspects in the identified projects.</p>
<p>The findings of the good practice research are summarized in an overview and synthesis paper (G/SPS/GEN/875). Detailed information on the findings in each region is also available:</p>
<ul><li><a href="#">Regional report for Central America</a></li>
<li><a href="#">Regional report for East Africa</a></li>
<li><a href="#">Regional report for Greater Mekong Delta</a></li>
</ul></div>
<h3><a href="#">Workshop on good practice in SPS technical cooperation – October 2008</a></h3>
<div>
<p>The findings of the STDF/OECD research on good practice in SPS-related technical cooperation were presented at a workshop, organized in collaboration with the WTO Secretariat, in Geneva on 6 October 2008. The workshop was attended by some 250 delegates to the SPS Committee including 60 persons funded by the WTO Secretariat and the STDF.</p>
<p>The workshop provided an opportunity to consider the Paris Principles in the context of the highly technical area of SPS-related technical cooperation, and considered how to maximize the positive impact on trade performance of SPS-related technical assistance. Detailed information on the workshop – including the programme, presentations, podcasts of discussions and a summary report – is available on the <a href="#">WTO SPS gateway</a>.</p>
<p>See the <a href="#">Summary Report</a> of the meeting and the <a href="#">Final Report</a> for more information.</p>
<p>See the <a href="#">STDF Briefing Note No. 1</a> summarizing the key findings of the STDF survey on good practice and highlights major conclusion of the workshop</p>
</div>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-12 21:00:56 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Documents for the Policy Committee',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '52c67972-9cd1-47ed-9c4b-62717475c804',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378926798,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '09876d3f-d4b4-4bcd-a4ec-c865dbad7d5d',
  'revision_uid' => 1,
  'body' => array(),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 20:13:18 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Who can apply',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b57a970d-b238-4263-b79c-55c6b84f3467',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378929076,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0a1283c5-f14d-4bcf-86e8-1c27cbe3d762',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The following organizations are eligible to apply for STDF funding:</p>

<ol type="A">
<li>Public sector entities (including regional or international bodies) with responsibility for SPS measures or policy, either in their own right or in cooperation with the private sector. The STDF encourages implementation of projects and activities through public-private partnerships;</li>
<li>Private sector entities, either in their own right or in cooperation with the public sector. Examples of private sector entities are legally registered farmers\' organizations, trade and industry associations, and private enterprises;</li>
<li>Non-profit non-governmental organizations (NGOs) with expertise in the SPS area and with an organization in the relevant beneficiary country or countries, in cooperation with the public and/or private sector; and</li>
<li>STDF partners</li>
</ol>

<p>Applications for funding should have written endorsement from all the organizations referenced as being involved in its implementation. In particular:</p>

<ol type="A">
<li>Applications submitted under the responsibility of one government ministry or organization should produce evidence of support for the application across all relevant government ministries or organizations;</li>
<li>Applications submitted under the responsibility of private sector organizations should include letters of support from the relevant competent governmental authority or authorities;</li>
<li>Regional applications (i.e. with two or more applicants in different countries) should include letters of support on the part of all the national governments concerned.</li>
</ol>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The following organizations are eligible to apply for STDF funding:</p>
<ol type="A"><li>Public sector entities (including regional or international bodies) with responsibility for SPS measures or policy, either in their own right or in cooperation with the private sector. The STDF encourages implementation of projects and activities through public-private partnerships;</li>
<li>Private sector entities, either in their own right or in cooperation with the public sector. Examples of private sector entities are legally registered farmers\' organizations, trade and industry associations, and private enterprises;</li>
<li>Non-profit non-governmental organizations (NGOs) with expertise in the SPS area and with an organization in the relevant beneficiary country or countries, in cooperation with the public and/or private sector; and</li>
<li>STDF partners</li>
</ol><p>Applications for funding should have written endorsement from all the organizations referenced as being involved in its implementation. In particular:</p>
<ol type="A"><li>Applications submitted under the responsibility of one government ministry or organization should produce evidence of support for the application across all relevant government ministries or organizations;</li>
<li>Applications submitted under the responsibility of private sector organizations should include letters of support from the relevant competent governmental authority or authorities;</li>
<li>Regional applications (i.e. with two or more applicants in different countries) should include letters of support on the part of all the national governments concerned.</li>
</ol>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 20:51:16 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Observers',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c2d2e044-b4cc-4ef2-bec9-38fb935a9e14',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378906841,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0a2258f2-585a-4299-909b-b942484c21f0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>International Trade Centre (ITC)</h3>

<p>ITC is a joint agency between the World Trade Organization and the United Nations. Since 1964, the ITC has helped to enable small business export success in developing countries by providing trade development programmes to the private sector, trade support institutions and policymakers. ITC contributes the business perspective, offering solutions to supply-side constraints that keep developing countries from participating more fully in world trade.</p>


<h3>United Nations Conference on Trade and Development (UNCTAD)</h3>

<p>UNCTAD was established 1964. It is a knowledge-based institution. It aims to help shape current policy debates and thinking on development, with a particular focus on ensuring that domestic policies and international action are mutually supportive in bringing about sustainable development. In the trade area, UNCTAD works on commodity diversification and development, competition and consumer policies, trade negotiations and consumer policies, trade negotiations and commercial diplomacy, trade analysis and information system, trade and environment.</p>


<h3>United Nations Industrial Development Organization (UNIDO)</h3>

<p>UNIDO was established in 1966. The organization promotes the creation of wealth and poverty alleviation through manufacturing. Its work focuses on three inter-related thematic priorities: poverty reduction through productive activities, trade capacity-building and energy and environment. UNIDO\'s activities in trade-related capacity building include interventions in the area of standards, metrology, testing and accreditation to overcome TBT/SPS constraints.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h3>International Trade Centre (ITC)</h3>
<p>ITC is a joint agency between the World Trade Organization and the United Nations. Since 1964, the ITC has helped to enable small business export success in developing countries by providing trade development programmes to the private sector, trade support institutions and policymakers. ITC contributes the business perspective, offering solutions to supply-side constraints that keep developing countries from participating more fully in world trade.</p>
<h3>United Nations Conference on Trade and Development (UNCTAD)</h3>
<p>UNCTAD was established 1964. It is a knowledge-based institution. It aims to help shape current policy debates and thinking on development, with a particular focus on ensuring that domestic policies and international action are mutually supportive in bringing about sustainable development. In the trade area, UNCTAD works on commodity diversification and development, competition and consumer policies, trade negotiations and consumer policies, trade negotiations and commercial diplomacy, trade analysis and information system, trade and environment.</p>
<h3>United Nations Industrial Development Organization (UNIDO)</h3>
<p>UNIDO was established in 1966. The organization promotes the creation of wealth and poverty alleviation through manufacturing. Its work focuses on three inter-related thematic priorities: poverty reduction through productive activities, trade capacity-building and energy and environment. UNIDO\'s activities in trade-related capacity building include interventions in the area of standards, metrology, testing and accreditation to overcome TBT/SPS constraints.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 14:40:41 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Donors',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '815909d0-8c57-4dcb-96ea-f4e32d025fc5',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378906739,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1137a587-2504-4b35-972b-0768e004d6c2',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The STDF is currently supported by:</p>

<ul>
  <li>Canada</li>
  <li>Denmark</li>
  <li>The European Commission</li>
  <li>Finland</li>
  <li>Germany</li>
  <li>Ireland</li>
  <li>Japan</li>
  <li>Netherlands</li>
  <li>Norway</li>
  <li>Sweden</li>
  <li>Switzerland</li>
  <li>Chinese Taipei</li>
  <li>The United States</li>
</ul>

<p>See <a href="#">donor support</a></p>
<p class="note">Chinese Taipei is a WTO Member in application of Article XII of the Marrakesh Agreement (1994).  WTO membership has no implication regarding the sovereignty of the Member pursuant to international law.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The STDF is currently supported by:</p>
<ul><li>Canada</li>
<li>Denmark</li>
<li>The European Commission</li>
<li>Finland</li>
<li>Germany</li>
<li>Ireland</li>
<li>Japan</li>
<li>Netherlands</li>
<li>Norway</li>
<li>Sweden</li>
<li>Switzerland</li>
<li>Chinese Taipei</li>
<li>The United States</li>
</ul><p>See <a href="#">donor support</a></p>
<p class="note">Chinese Taipei is a WTO Member in application of Article XII of the Marrakesh Agreement (1994).  WTO membership has no implication regarding the sovereignty of the Member pursuant to international law.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 14:38:59 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Working group',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '91d68ce9-38a5-4556-9764-8b963eb64a9a',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378924047,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '14e98d9b-7e68-46ef-aac0-8f941d06f187',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The Working Group consists of <strong>technical-level representatives</strong> of STDF’s partners and donors, as well as the experts of developing countries. It also includes participation by the Secretariats of the Codex Alimentarius Commission (Codex) and the International Plant Protection Convention (IPPC). It reviews and approves the STDF’s work programmes and funding requests, and oversees operation of the STDF Secretariat. Responsibilities of the Working Group include:</p>

<ul>
<li>Preparation of work programmes;</li>
<li>Exchange of experiences in relation to the provision and implementation of SPS-related technical cooperation;</li>
<li>Guiding the development of resources for coordination and dissemination of good practice; and</li>
<li>Support for fund raising activities.</li>
</ul>

<p>The Working Group has final responsibility for allocating grants and it normally meets at least twice a year.</p>
 
<p>See <a href="#">documents for the Working Group</a></p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The Working Group consists of <strong>technical-level representatives</strong> of STDF’s partners and donors, as well as the experts of developing countries. It also includes participation by the Secretariats of the Codex Alimentarius Commission (Codex) and the International Plant Protection Convention (IPPC). It reviews and approves the STDF’s work programmes and funding requests, and oversees operation of the STDF Secretariat. Responsibilities of the Working Group include:</p>
<ul><li>Preparation of work programmes;</li>
<li>Exchange of experiences in relation to the provision and implementation of SPS-related technical cooperation;</li>
<li>Guiding the development of resources for coordination and dissemination of good practice; and</li>
<li>Support for fund raising activities.</li>
</ul><p>The Working Group has final responsibility for allocating grants and it normally meets at least twice a year.</p>
<p>See <a href="#">documents for the Working Group</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 19:27:27 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Documents for the Working Group',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '12310a53-f8f3-41bb-b5f7-56faf37c7c17',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378926737,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '18b210ad-c37e-40b9-9e3c-6e140381eb09',
  'revision_uid' => 1,
  'body' => array(),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 20:12:17 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'STDF Secretariat',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5ffef2b7-05ac-42c6-9d39-4d9518f95684',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378923780,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '296eefe7-67b3-46b2-9b92-8a713c987bbf',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="person clearfix">
  <img class="image" src="/sites/default/files/persons/Photo_Marlynne.jpg" alt="Marlynne Hopper" />
  <div class="description">
    <h3>Marlynne Hopper</h3>
       <p>Joined the STDF Secretariat in March 2008 and is responsible for various activities to enhance coordination in SPS-related technical cooperation. Prior to 2008, Marlynne developed and implemented food safety and biosecurity capacity building activities, including needs assessment tools and training programmes, for FAO. Marlynne has also worked in on broader agricultural and rural development activities with the World Bank, GTZ and UNDP, including three years in Viet Nam. She has a Masters Degree in International Affairs from Georgetown University, Washington D.C.</p>
  </div>
</div>

<div class="person clearfix">
  <img class="image" src="/sites/default/files/persons/Pablo.jpg" alt="Pablo Jenkins" />
  <div class="description">
    <h3>Pablo Jenkins</h3>
       <p>Pablo holds a bachelor\'s degree in Biochemistry and Molecular Biology with a focus on plant biology. He also holds a master\'s degree in International Economics from the University of California, San Diego. Since 2007, Pablo has worked in both the SPS and TBT sections of the World Trade Organization and recently joined the STDF team in 2011.</p>
  </div>
</div>

<div class="person clearfix">
  <img class="image" src="/sites/default/files/persons/Photo_Kenza.jpg" alt="Kenza Le Mentec" />
  <div class="description">
    <h3>Kenza Le Mentec</h3>
       <p>With a double background in finance and international affairs as well as in agri-food, Kenza has worked on various aspects related to the design and implementation of development projects and policies. Over the past years, she has been working on international trade and SPS related topics. She has joined the STDF in 2008 as an economic affairs officer. Kenza holds a PhD in agri-food, a Masters in business administration and management and a first degree in agriculture and rural economics.</p>
  </div>
</div>

<div class="person clearfix">
  <img class="image" src="/sites/default/files/persons/Photo_Simon.jpg" alt="Simon Padilla" />
  <div class="description">
    <h3>Simon Padilla</h3>
       <p>Joined the STDF team in 2007. He holds a MA in Economics from the Université Catholique de Louvain and a MS in International Economics and Development from the Facultés Universitaires Notre Dame de la Paix in Belgium. Simon\'s current work focuses mainly on projects and other activities involving countries in Latin America and the Caribbean. He has worked on international trade related issues at the WTO since November 2006.</p>
  </div>
</div>

<div class="person clearfix">
  <img class="image" src="/sites/default/files/persons/Photo_Melvin.jpg" alt="Melvin Spreij" />
  <div class="description">
    <h3>Melvin Spreij</h3>
       <p>Melvin holds a degree in civil and business law from the State University in Leiden, The Netherlands. Before joining the STDF team in 2006, he worked for many years in various legal positions, including as international legal consultant for the Food and Agriculture Organization (FAO) in Rome. He has wide experience in the development of food safety, animal and plant health legislation and published several papers on issues related to development and natural resources law. Melvin is currently the Secretary of the STDF.</p>
  </div>
</div>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div class="person clearfix">
  <img class="image" src="/sites/default/files/persons/Photo_Marlynne.jpg" alt="Marlynne Hopper" /><div class="description">
<h3>Marlynne Hopper</h3>
<p>Joined the STDF Secretariat in March 2008 and is responsible for various activities to enhance coordination in SPS-related technical cooperation. Prior to 2008, Marlynne developed and implemented food safety and biosecurity capacity building activities, including needs assessment tools and training programmes, for FAO. Marlynne has also worked in on broader agricultural and rural development activities with the World Bank, GTZ and UNDP, including three years in Viet Nam. She has a Masters Degree in International Affairs from Georgetown University, Washington D.C.</p>
</div>
</div>
<div class="person clearfix">
  <img class="image" src="/sites/default/files/persons/Pablo.jpg" alt="Pablo Jenkins" /><div class="description">
<h3>Pablo Jenkins</h3>
<p>Pablo holds a bachelor\'s degree in Biochemistry and Molecular Biology with a focus on plant biology. He also holds a master\'s degree in International Economics from the University of California, San Diego. Since 2007, Pablo has worked in both the SPS and TBT sections of the World Trade Organization and recently joined the STDF team in 2011.</p>
</div>
</div>
<div class="person clearfix">
  <img class="image" src="/sites/default/files/persons/Photo_Kenza.jpg" alt="Kenza Le Mentec" /><div class="description">
<h3>Kenza Le Mentec</h3>
<p>With a double background in finance and international affairs as well as in agri-food, Kenza has worked on various aspects related to the design and implementation of development projects and policies. Over the past years, she has been working on international trade and SPS related topics. She has joined the STDF in 2008 as an economic affairs officer. Kenza holds a PhD in agri-food, a Masters in business administration and management and a first degree in agriculture and rural economics.</p>
</div>
</div>
<div class="person clearfix">
  <img class="image" src="/sites/default/files/persons/Photo_Simon.jpg" alt="Simon Padilla" /><div class="description">
<h3>Simon Padilla</h3>
<p>Joined the STDF team in 2007. He holds a MA in Economics from the Université Catholique de Louvain and a MS in International Economics and Development from the Facultés Universitaires Notre Dame de la Paix in Belgium. Simon\'s current work focuses mainly on projects and other activities involving countries in Latin America and the Caribbean. He has worked on international trade related issues at the WTO since November 2006.</p>
</div>
</div>
<div class="person clearfix">
  <img class="image" src="/sites/default/files/persons/Photo_Melvin.jpg" alt="Melvin Spreij" /><div class="description">
<h3>Melvin Spreij</h3>
<p>Melvin holds a degree in civil and business law from the State University in Leiden, The Netherlands. Before joining the STDF team in 2006, he worked for many years in various legal positions, including as international legal consultant for the Food and Agriculture Organization (FAO) in Rome. He has wide experience in the development of food safety, animal and plant health legislation and published several papers on issues related to development and natural resources law. Melvin is currently the Secretary of the STDF.</p>
</div>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 19:23:00 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Eligibility',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '796dca30-0feb-4b2c-b7a0-93af3e6ca105',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378928904,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3789a090-8897-44e2-a843-afde5f2f1f86',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The following type of projects will be given favourable consideration by the <a href="#">STDF Working Group:</a></p>

<ol type="A">
<li>Projects relevant to the identification, development and dissemination of good practice in SPS-related technical cooperation, including projects that develop and apply innovative and replicable approaches;</li>
<li>Projects linked to STDF work on cross-cutting topics of common interest;</li>
<li>Projects that address SPS constraints through regional approaches; and</li>
<li>Collaborative and inter-disciplinary projects focused on the interface / linkages between human, animal and plant health and trade, and benefiting from the involvement of two or more partners or other relevant organizations.</li>
</ol>

<p>The STDF supports projects whose aim is to achieve compliance with commercial standards only as part of a broader market access strategy, which also fulfils SPS requirements. The STDF does not "officially" endorse commercial schemes or fund projects whose sole focus is on compliance with a commercial standard. The STDF does not fund projects whose main objective is to address environmental or labour standards.</p>

<p>The STDF does not provide funding for buildings, vehicles or other major equipment items, with the qualified exception of information technology, laboratory and minor equipment items that are necessary to achieve the specific outputs and objective of the project. Funding provided for information technology, laboratory and minor equipment items shall not exceed 10% of the total STDF contribution to the project.</p>

<p>The <a href="#">STDF Secretariat</a> provides advice and information about all requirements for submission of applications; and helps beneficiary organizations in identifying and/or developing possible projects in priority areas of interest.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The following type of projects will be given favourable consideration by the <a href="#">STDF Working Group:</a></p>
<ol type="A"><li>Projects relevant to the identification, development and dissemination of good practice in SPS-related technical cooperation, including projects that develop and apply innovative and replicable approaches;</li>
<li>Projects linked to STDF work on cross-cutting topics of common interest;</li>
<li>Projects that address SPS constraints through regional approaches; and</li>
<li>Collaborative and inter-disciplinary projects focused on the interface / linkages between human, animal and plant health and trade, and benefiting from the involvement of two or more partners or other relevant organizations.</li>
</ol><p>The STDF supports projects whose aim is to achieve compliance with commercial standards only as part of a broader market access strategy, which also fulfils SPS requirements. The STDF does not "officially" endorse commercial schemes or fund projects whose sole focus is on compliance with a commercial standard. The STDF does not fund projects whose main objective is to address environmental or labour standards.</p>
<p>The STDF does not provide funding for buildings, vehicles or other major equipment items, with the qualified exception of information technology, laboratory and minor equipment items that are necessary to achieve the specific outputs and objective of the project. Funding provided for information technology, laboratory and minor equipment items shall not exceed 10% of the total STDF contribution to the project.</p>
<p>The <a href="#">STDF Secretariat</a> provides advice and information about all requirements for submission of applications; and helps beneficiary organizations in identifying and/or developing possible projects in priority areas of interest.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 20:48:24 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Policy documents',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c933398f-2730-4a0c-80ae-208da37b8087',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378926766,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '40d0db32-6502-4f9c-8a7d-e66075d89c92',
  'revision_uid' => 1,
  'body' => array(),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 20:12:46 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'PAN-SPSO Programme',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '99a87d69-f85f-47e6-8eda-cb1cc607ff32',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1379020863,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '483e5b05-d80e-4b45-a77d-296f6dcb1782',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The Participation of African Nations in Sanitary and Phytosanitary Standard Setting Organizations Programme (PAN-SPSO), financed by the European Commission (EC), and implemented by the African Union Inter-African Bureau for Animal Resources (AU/IBAR) in collaboration with the African Union Inter-African Phytosanitary Council (AU/IAPSC) and seven Regional Economic Communities (RECs) in Africa, seeks to facilitate effective involvement of African countries in the activities of the OIE, IPPC, Codex and the WTO-SPS Committee. To find out more, see the <a href="http://www.au-ibar.org/index.php?option=com_flexicontent&view=items&cid=67:projects&id=83:pan-spso&Itemid=39">AU-IBAR web site</a>.</p>
 
<p>The STDF participates in the PAN-SPSO as a technical and strategic partner. The STDF has assisted AU/IBAR in the implementation of the following activities:</p>

<div class="accordion">
   <h3><a href="#">Organization of SPS seminars (train-the-trainers approach)</a></h3>
   <div>
      <p>Seminars for relevant officials from the RECs and other selected African SPS experts were organized in Nairobi (13-16 July 2009) and Bamako (20-23 July 2009). Trainers from the WTO, STDF, Codex, OIE and IPPC Secretariats shared their knowledge and guidance to enable the participants to deliver SPS-related training after the event.</p>
 
    <p>Complete training packages (<a href="#">English</a>, <a href="#">French</a>) were developed and distributed including material from the WTO, STDF, OIE, IPPC and Codex Secretariats.</p>
   </div>

    <h3><a href="#">Scoping study and analysis of existing SPS regional/national coordination mechanisms</a></h3>
    <div>
      <p>In 2011, the STDF published a study on "<a href="#">National SPS Coordination Mechanisms: An African Perspective</a>", complementing the 2010 study on "<a href="#">Regional SPS Frameworks and Strategies in Africa</a>". These publications present and analyze the terms of reference, mandate and membership of existing coordination mechanisms and provide suggestions and guidance on the feasibility and modalities to further establish such mechanisms in Africa – both at the regional and national level.</p>
    </div>


     <h3><a href="#">Support to the RECs to obtain observer status in meetings of the WTO SPS Committee, Codex, OIE and IPPC</a></h3>
    <div>
      <p>A document outlining the requirements and procedures for observer status was provided to AU/IBAR for onward dissemination to the RECs. In March 2010, the WTO SPS Committee granted ad hoc observer status to three African RECs, specifically the Economic Commission of West African States (ECOWAS), the Community of Sahel Saharan States (CEN-SAD) and the Southern African Development Commission (SADC).</p>

    </div>
</div>


<p><strong>RECs:</strong> Community of Sahel-Saharan States (CEN-SAD); Common Market for Eastern and Southern Africa (COMESA); East African Community (EAC); Economic Community of West African States (ECOWAS); Economic Community of Central African States (ECCAS); Inter-Governmental Authority on Development (IGAD); Southern Africa Development Community (SADC)</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The Participation of African Nations in Sanitary and Phytosanitary Standard Setting Organizations Programme (PAN-SPSO), financed by the European Commission (EC), and implemented by the African Union Inter-African Bureau for Animal Resources (AU/IBAR) in collaboration with the African Union Inter-African Phytosanitary Council (AU/IAPSC) and seven Regional Economic Communities (RECs) in Africa, seeks to facilitate effective involvement of African countries in the activities of the OIE, IPPC, Codex and the WTO-SPS Committee. To find out more, see the <a href="http://www.au-ibar.org/index.php?option=com_flexicontent&amp;view=items&amp;cid=67:projects&amp;id=83:pan-spso&amp;Itemid=39">AU-IBAR web site</a>.</p>
<p>The STDF participates in the PAN-SPSO as a technical and strategic partner. The STDF has assisted AU/IBAR in the implementation of the following activities:</p>
<div class="accordion">
<h3><a href="#">Organization of SPS seminars (train-the-trainers approach)</a></h3>
<div>
<p>Seminars for relevant officials from the RECs and other selected African SPS experts were organized in Nairobi (13-16 July 2009) and Bamako (20-23 July 2009). Trainers from the WTO, STDF, Codex, OIE and IPPC Secretariats shared their knowledge and guidance to enable the participants to deliver SPS-related training after the event.</p>
<p>Complete training packages (<a href="#">English</a>, <a href="#">French</a>) were developed and distributed including material from the WTO, STDF, OIE, IPPC and Codex Secretariats.</p>
</div>
<h3><a href="#">Scoping study and analysis of existing SPS regional/national coordination mechanisms</a></h3>
<div>
<p>In 2011, the STDF published a study on "<a href="#">National SPS Coordination Mechanisms: An African Perspective</a>", complementing the 2010 study on "<a href="#">Regional SPS Frameworks and Strategies in Africa</a>". These publications present and analyze the terms of reference, mandate and membership of existing coordination mechanisms and provide suggestions and guidance on the feasibility and modalities to further establish such mechanisms in Africa – both at the regional and national level.</p>
</div>
<h3><a href="#">Support to the RECs to obtain observer status in meetings of the WTO SPS Committee, Codex, OIE and IPPC</a></h3>
<div>
<p>A document outlining the requirements and procedures for observer status was provided to AU/IBAR for onward dissemination to the RECs. In March 2010, the WTO SPS Committee granted ad hoc observer status to three African RECs, specifically the Economic Commission of West African States (ECOWAS), the Community of Sahel Saharan States (CEN-SAD) and the Southern African Development Commission (SADC).</p>
</div>
</div>
<p><strong>RECs:</strong> Community of Sahel-Saharan States (CEN-SAD); Common Market for Eastern and Southern Africa (COMESA); East African Community (EAC); Economic Community of West African States (ECOWAS); Economic Community of Central African States (ECCAS); Inter-Governmental Authority on Development (IGAD); Southern Africa Development Community (SADC)</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-12 22:21:03 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Invasive Alien Species',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ba1175c1-3c82-4fbf-aadb-96765b405b91',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378932018,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4a2e4897-cf7a-4daa-978a-bd70400b6e9f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The STDF, in collaboration with the International Plant Protection Convention (IPPC) and the World Organisation for Animal Health (OIE), organized a <strong>Seminar on International Trade and Invasive Alien Species</strong> (IAS) in Geneva on 12-13 July 2012.</p>

<p>The seminar sought to:</p>

<ol type="a">
<li>raise awareness about the mutually beneficial goals of the SPS Agreement and Convention on Biological Diversity (CBD), and the contribution of effective SPS systems to help protect against the entry of harmful species, including pests, diseases and other IAS</li>
<li>foster collaboration between the SPS and the CBD "communities" at both regional and national levels; and</li>
<li>review initiatives that aim to build national and/or regional capacities to manage the entry and spread of IAS, including pests and diseases, and discuss common challenges, good practices, and additional capacity building efforts required (e.g. needs assessments, pest risk analysis (PRA), surveillance, development of training toolkits and materials, etc.)</li>
</ol>

<p>The Seminar was attended by approximately 110 participants working in areas related to both biodiversity and SPS measures. The list of participants will be available soon.</p>
<p>Click <a href="#">here</a> to view the workshop programme, as well as the presentations and speeches delivered.</p>

<p>See the <strong><a href="#">STDF Briefing Note No. 9</a></strong> summarizing the key messages and conclusions emerging from the seminar.</p>

<h3>STDF Publication on International Trade and Invasive Alien Species</h3>

<div class="highlighted border">
    <a href=""><img src="" alt="" /></a>
    <p>This study reviews and analyses key concepts and principles relevant to Invasive Alien Species (IAS) and international trade in the context of the Convention on Biological Diversity (CBD) and the SPS Agreement,       as well as in relation to the IPPC and the OIE. It also considers various initiatives to enhance capacities for managing the entry and spread of IAS (including plant pests and animal diseases), reviews common challenges and good practices, and makes a number of targeted recommendations.</p>
</div>


',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The STDF, in collaboration with the International Plant Protection Convention (IPPC) and the World Organisation for Animal Health (OIE), organized a <strong>Seminar on International Trade and Invasive Alien Species</strong> (IAS) in Geneva on 12-13 July 2012.</p>
<p>The seminar sought to:</p>
<ol type="a"><li>raise awareness about the mutually beneficial goals of the SPS Agreement and Convention on Biological Diversity (CBD), and the contribution of effective SPS systems to help protect against the entry of harmful species, including pests, diseases and other IAS</li>
<li>foster collaboration between the SPS and the CBD "communities" at both regional and national levels; and</li>
<li>review initiatives that aim to build national and/or regional capacities to manage the entry and spread of IAS, including pests and diseases, and discuss common challenges, good practices, and additional capacity building efforts required (e.g. needs assessments, pest risk analysis (PRA), surveillance, development of training toolkits and materials, etc.)</li>
</ol><p>The Seminar was attended by approximately 110 participants working in areas related to both biodiversity and SPS measures. The list of participants will be available soon.</p>
<p>Click <a href="#">here</a> to view the workshop programme, as well as the presentations and speeches delivered.</p>
<p>See the <strong><a href="#">STDF Briefing Note No. 9</a></strong> summarizing the key messages and conclusions emerging from the seminar.</p>
<h3>STDF Publication on International Trade and Invasive Alien Species</h3>
<div class="highlighted border">
    <a href=""><img src="" alt="" /></a>
<p>This study reviews and analyses key concepts and principles relevant to Invasive Alien Species (IAS) and international trade in the context of the Convention on Biological Diversity (CBD) and the SPS Agreement,       as well as in relation to the IPPC and the OIE. It also considers various initiatives to enhance capacities for managing the entry and spread of IAS (including plant pests and animal diseases), reviews common challenges and good practices, and makes a number of targeted recommendations.</p>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 21:40:18 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Capacity evaluation tools',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8e3df6e3-a1ec-4b26-a587-c6f88c1920c4',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1379021435,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '50794a1e-e885-4247-84e4-ca8dddd64157',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Activities to improve food safety, animal and plant health situation should be based on a careful identification, assessment and prioritization of needs to be successful and sustainable. Capacity assessment is therefore an important initial step in the process of building and enhancing SPS capacity.</p>

<div class="accordion">
   <h3><a href="#">Existing SPS-related capacity evaluation tools and their application</a></h3>
   <div>
      <p>While the standards of Codex, OIE and IPPC are recognized by the SPS Agreement, many more organizations are involved in SPS capacity building and have developed accompanying evaluation tools.</p>
      <ul>
           <li><a href="https://www.ippc.int/servlet/CDSServlet?status=ND0xMzQwNiZjdG5faW5mb192aWV3X3NpemU9Y3RuX2luZm9fdmlld19mdWxsJjY9ZW4mMzM9KiYzNz1rb3M~">IPPC Phytosanitary Capacity Evaluation Tool (PCE)</a></li> 
           <li><a href="ftp://ftp.fao.org/docrep/fao/009/a0601e/a0601e00.pdf">FAO Strengthening national food control systems: Guidelines to assess capacity building needs</a></li> 
           <li><a href="ftp://ftp.fao.org/docrep/fao/010/a1142e/a1142e00.pdf">FAO Strengthening national food control systems: Quick guide to assess capacity building needs</a></li> 
           <li><a href="http://www.fao.org/docrep/010/a1140e/a1140e00.htm">FAO Guide to assess biosecurity capacity (Part 2 of the FAO Biosecurity Toolkit)</a></li> 
           <li><a href="http://www.oie.int/eng/oie/organisation/EN_OIE%20PVS%20Tool_2008.pdf">OIE Tool for the Evaluation of Performance of Veterinary Services</a></li> 
           <li><a href="http://www.iica.int/Esp/organizacion/LTGC/Sanidad/Publicaciones%20de%20SAIA/PVS-NVS-EN.pdf">IICA Performance, Vision and Strategy (PVS) for National Veterinary Services</a></li> 
           <li><a href="http://www.iica.int/Esp/organizacion/LTGC/Sanidad/Publicaciones%20de%20SAIA/PVS-NFSS-EN-2007.pdf">IICA Performance, Vision and Strategy (PVS) for National Food Safety Services</a></li> 
           <li><a href="http://www.iica.int/Esp/organizacion/LTGC/Sanidad/Publicaciones%20de%20SAIA/PVS-NPP-EN-2007.pdf">IICA Performance, Vision and Strategy (PVS) for National Plant Protection Organizations</a></li> 
           <li><a href="http://www.iica.int/Esp/organizacion/LTGC/Sanidad/Publicaciones%20de%20SAIA/B0744I.pdf">IICA Performance, Vision and Strategy (PVS) for SPS: An Institutional Vision</a></li> 
           <li><a href="UNDP/GEF National Capacity Self Assessments (Resource Kit No. 3)">UNDP/GEF National Capacity Self Assessments (Resource Kit No. 3)</a></li> 
      </ul>
   </div>


   <h3><a href="#">STDF Workshop on SPS-related Capacity Evaluation Tools – March 2008</a></h3>
   <div>
       <p>Capacity evaluation tools developed by international organizations were the subject of an STDF workshop held in Geneva on 31 March 2008. Information on this workshop, including ten presentations on SPS-related capacity evaluation tools and approaches, is available on the WTO SPS gateway.</p>
   </div>
</div>


<h3>STDF Publication on capacity evaluation tools developed by international organizations</h3>
<div class="border">
<a href="#"><img src="/sites/default/files/book2.jpg" alt="" /></a>
<p>The STDF has released a publication providing information on the scope and use of 12 capacity evaluation tools developed by international organizations. This publication is a useful reference for all those interested in evaluating capacity needs in the SPS area. It covers sectoral tools related to food safety, animal and plant health, as well as cross-sectoral tools and related methodologies.</p>
</div>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Activities to improve food safety, animal and plant health situation should be based on a careful identification, assessment and prioritization of needs to be successful and sustainable. Capacity assessment is therefore an important initial step in the process of building and enhancing SPS capacity.</p>
<div class="accordion">
<h3><a href="#">Existing SPS-related capacity evaluation tools and their application</a></h3>
<div>
<p>While the standards of Codex, OIE and IPPC are recognized by the SPS Agreement, many more organizations are involved in SPS capacity building and have developed accompanying evaluation tools.</p>
<ul><li><a href="https://www.ippc.int/servlet/CDSServlet?status=ND0xMzQwNiZjdG5faW5mb192aWV3X3NpemU9Y3RuX2luZm9fdmlld19mdWxsJjY9ZW4mMzM9KiYzNz1rb3M~">IPPC Phytosanitary Capacity Evaluation Tool (PCE)</a></li>
<li><a href="ftp://ftp.fao.org/docrep/fao/009/a0601e/a0601e00.pdf">FAO Strengthening national food control systems: Guidelines to assess capacity building needs</a></li>
<li><a href="ftp://ftp.fao.org/docrep/fao/010/a1142e/a1142e00.pdf">FAO Strengthening national food control systems: Quick guide to assess capacity building needs</a></li>
<li><a href="http://www.fao.org/docrep/010/a1140e/a1140e00.htm">FAO Guide to assess biosecurity capacity (Part 2 of the FAO Biosecurity Toolkit)</a></li>
<li><a href="http://www.oie.int/eng/oie/organisation/EN_OIE%20PVS%20Tool_2008.pdf">OIE Tool for the Evaluation of Performance of Veterinary Services</a></li>
<li><a href="http://www.iica.int/Esp/organizacion/LTGC/Sanidad/Publicaciones%20de%20SAIA/PVS-NVS-EN.pdf">IICA Performance, Vision and Strategy (PVS) for National Veterinary Services</a></li>
<li><a href="http://www.iica.int/Esp/organizacion/LTGC/Sanidad/Publicaciones%20de%20SAIA/PVS-NFSS-EN-2007.pdf">IICA Performance, Vision and Strategy (PVS) for National Food Safety Services</a></li>
<li><a href="http://www.iica.int/Esp/organizacion/LTGC/Sanidad/Publicaciones%20de%20SAIA/PVS-NPP-EN-2007.pdf">IICA Performance, Vision and Strategy (PVS) for National Plant Protection Organizations</a></li>
<li><a href="http://www.iica.int/Esp/organizacion/LTGC/Sanidad/Publicaciones%20de%20SAIA/B0744I.pdf">IICA Performance, Vision and Strategy (PVS) for SPS: An Institutional Vision</a></li>
<li><a href="UNDP/GEF National Capacity Self Assessments (Resource Kit No. 3)">UNDP/GEF National Capacity Self Assessments (Resource Kit No. 3)</a></li>
</ul></div>
<h3><a href="#">STDF Workshop on SPS-related Capacity Evaluation Tools – March 2008</a></h3>
<div>
<p>Capacity evaluation tools developed by international organizations were the subject of an STDF workshop held in Geneva on 31 March 2008. Information on this workshop, including ten presentations on SPS-related capacity evaluation tools and approaches, is available on the WTO SPS gateway.</p>
</div>
</div>
<h3>STDF Publication on capacity evaluation tools developed by international organizations</h3>
<div class="border">
<a href="#"><img src="/sites/default/files/book2.jpg" alt="" /></a>
<p>The STDF has released a publication providing information on the scope and use of 12 capacity evaluation tools developed by international organizations. This publication is a useful reference for all those interested in evaluating capacity needs in the SPS area. It covers sectoral tools related to food safety, animal and plant health, as well as cross-sectoral tools and related methodologies.</p>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-12 22:30:35 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'History',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '878354f5-665f-46b8-bc0c-6262756d01d3',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378928207,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5fb17303-df72-402e-b659-9ccddd0e167c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p align="justify">The STDF grew out of a joint communiqué issued by the Heads of FAO, OIE, World Bank, WHO and WTO at the Doha Ministerial Conference in November 2001. In the communiqué, the five organizations agreed to jointly explore new technical and financial mechanisms for coordination and resource mobilization to ensure the most effective use of technical and financial resources.</p><p align="justify">The five organizations formally established the STDF in August 2002 as a partnership and a trust fund with seed funding from the World Bank and WTO. On 10 September 2004, the partners formally adopted a first Business Plan. Membership of the STDF was further expanded in 2005 to include representatives of donors and developing countries. In 2007, observer status was granted to various organizations with SPS expertise or implementing SPS-related technical assistance projects.</p><p align="justify">Two independent evaluations of the STDF have been undertaken to date. The first one was completed in December 2005 (<a href="http://www.standardsfacility.org/Files/KeyDocs/STDF_76_Evaluation_Report.pdf" target="_blank">STDF-76</a>) and led to the adoption of a Medium Term Strategy for the period 2007-2011. The second evaluation was completed in November 2008 (<a href="http://www.standardsfacility.org/Files/KeyDocs/STDF_248_Evaluation_Report_2008.pdf" target="_blank">STDF-248</a>); it judged STDF’s overall performance "to be good and in many important areas very good" and highlighted that STDF carries out an important role that no other organization would be able to accomplish.</p><p align="justify">In January 2012, the STDF Policy Committee adopted a new Medium Term Strategy for the period 2012-2016 and agreed on a revised set of Operational Rules and a Work Plan for 2012.</p>',
        'summary' => '',
        'format' => 'wysiwyg_filter',
        'safe_value' => '<p align="justify">The STDF grew out of a joint communiqué issued by the Heads of FAO, OIE, World Bank, WHO and WTO at the Doha Ministerial Conference in November 2001. In the communiqué, the five organizations agreed to jointly explore new technical and financial mechanisms for coordination and resource mobilization to ensure the most effective use of technical and financial resources.</p>
<p align="justify">The five organizations formally established the STDF in August 2002 as a partnership and a trust fund with seed funding from the World Bank and WTO. On 10 September 2004, the partners formally adopted a first Business Plan. Membership of the STDF was further expanded in 2005 to include representatives of donors and developing countries. In 2007, observer status was granted to various organizations with SPS expertise or implementing SPS-related technical assistance projects.</p>
<p align="justify">Two independent evaluations of the STDF have been undertaken to date. The first one was completed in December 2005 (<a href="http://www.standardsfacility.org/Files/KeyDocs/STDF_76_Evaluation_Report.pdf" target="_blank" rel="nofollow">STDF-76</a>) and led to the adoption of a Medium Term Strategy for the period 2007-2011. The second evaluation was completed in November 2008 (<a href="http://www.standardsfacility.org/Files/KeyDocs/STDF_248_Evaluation_Report_2008.pdf" target="_blank" rel="nofollow">STDF-248</a>); it judged STDF’s overall performance "to be good and in many important areas very good" and highlighted that STDF carries out an important role that no other organization would be able to accomplish.</p>
<p align="justify">In January 2012, the STDF Policy Committee adopted a new Medium Term Strategy for the period 2012-2016 and agreed on a revised set of Operational Rules and a Work Plan for 2012.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 20:36:47 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Project Preparation Grants',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '17658242-a436-402b-a2c5-b1889605917c',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378928535,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '67b49515-10c8-4d88-a87c-f2978d9f0904',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Funds up to normally US$50,000 are available for project preparation grants (PPGs), which can be used for any of the following purposes (or a combination thereof):</p>

<ul>
<li>Application of SPS-related capacity evaluation and prioritization tools;</li>
<li>Preparation of feasibility studies that precede project development to assess the potential impact and economic viability of proposals in terms of their expected costs and benefits; and/or</li>
<li>Preparation of project proposals that can be funded by the STDF or other donors</li>
</ul>

<p>The main criterion in awarding a PPG for the preparation of a project proposal is the likelihood that its implementation will result in a well-drafted proposal with the potential to achieve sustainable and effective results.</p>
 
<p>Resulting projects may receive funding from the STDF, or from other funding sources. Applicants are encouraged to consult other potential donors when developing and implementing PPG applications.</p>
 
<p><strong>See the <a href="#">Guidance Note for Applicants</a> for detailed information on STDF funding opportunities and requirements.</strong></p>
  
<p>Download the <a href="#">STDF Project Preparation Grant Application Form</a></p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Funds up to normally US$50,000 are available for project preparation grants (PPGs), which can be used for any of the following purposes (or a combination thereof):</p>
<ul><li>Application of SPS-related capacity evaluation and prioritization tools;</li>
<li>Preparation of feasibility studies that precede project development to assess the potential impact and economic viability of proposals in terms of their expected costs and benefits; and/or</li>
<li>Preparation of project proposals that can be funded by the STDF or other donors</li>
</ul><p>The main criterion in awarding a PPG for the preparation of a project proposal is the likelihood that its implementation will result in a well-drafted proposal with the potential to achieve sustainable and effective results.</p>
<p>Resulting projects may receive funding from the STDF, or from other funding sources. Applicants are encouraged to consult other potential donors when developing and implementing PPG applications.</p>
<p><strong>See the <a href="#">Guidance Note for Applicants</a> for detailed information on STDF funding opportunities and requirements.</strong></p>
<p>Download the <a href="#">STDF Project Preparation Grant Application Form</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 20:42:15 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'STDF Secretariat',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'debdd08d-70c0-4209-8456-9dd22d785ca8',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378924129,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6a6357d0-d66c-4ff3-87e0-279ec1d9ec72',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The Secretariat implements the STDF’s work programme, and is housed within the WTO. Its responsibilities include:</p>

<ul>
<li>Assistance to beneficiary organizations to identify and/or develop possible projects for funding by the STDF or another source;</li>
<li>Review of funding applications and monitoring the implementation of ongoing projects;</li>
<li>Participation in external events to disseminate information on the STDF and promote coherence and coordination in the delivery of SPS technical cooperation;</li>
<li>Implementation of activities to raise awareness about the importance of SPS capacity building; and</li>
<li>Provision of administrative support to the Policy Committee and Working Group.</li>
</ul>

<p>See <a href="#">who we are</a></p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The Secretariat implements the STDF’s work programme, and is housed within the WTO. Its responsibilities include:</p>
<ul><li>Assistance to beneficiary organizations to identify and/or develop possible projects for funding by the STDF or another source;</li>
<li>Review of funding applications and monitoring the implementation of ongoing projects;</li>
<li>Participation in external events to disseminate information on the STDF and promote coherence and coordination in the delivery of SPS technical cooperation;</li>
<li>Implementation of activities to raise awareness about the importance of SPS capacity building; and</li>
<li>Provision of administrative support to the Policy Committee and Working Group.</li>
</ul><p>See <a href="#">who we are</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 19:28:49 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Economic analysis / MCDA',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0be199be-076d-47bc-a53d-41d48dbadc26',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1379020321,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '73de612f-67e3-46c3-804f-71a63c8ccec6',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Many developing countries have several competing sanitary and phytosanitary (SPS) capacity needs linked to domestic policy objectives and agri-food export promotion. Resources available from national budgets and donors are generally insufficient to meet all the identified needs, and inevitably priorities have to be made between competing capacity building options.</p>
 
<p>In this context, economic analysis offers a practical tool that assist decision makers in establishing priorities, in a manner that is objective and accountable, and helps to ensure that resources are used in an efficient manner. It can also help to convince policy and decision-makers of the need to invest in SPS capacity building by demonstrating the financial benefits and cost-savings involved.</p>
 
<h3>Multi Criteria Decision Analysis (MCDA) Tool to Prioritize SPS Capacity Building Options</h3>

<p>The STDF has developed a new decision support tool, based on Multi-Criteria Decision Analysis (MCDA), to help prioritize and make choices between competing SPS capacity building needs in the context of resource constraints. The tool provides a structured process to aid SPS decision-making, which can help to enhance the economic efficiency of SPS investment decisions, promote more transparent and accountable choices between multiple SPS capacity building options, and facilitate more inclusive decision making processes.</p>

<p>The <a href="#">Draft Guide to Multi-Criteria Decision-Making</a> describes the steps involved in the use of this tool, including how computer software is used to derive quantitative priorities.</p>
<p>Click <a href="#">here</a> for details about the software used (D-Sight), and the opportunity to download a free trial copy. Through applications in selected countries (see below), the draft MCDA Guide is being refined and improved.</p>

<h3 class="center">Use of MCDA by Country</h3>
<table>
<thead>
    <tr>
      <th class="odd">Africa</th>
      <th class="even">Latin America & The Caribbean</th>
      <th class="odd">Asia</th>
    </tr>
  </thead>

<tr class="first odd">
<td><a href="">COMESA</a></td>
<td><a href="">Belize</a></td>
<td><a href="">Vietnam</a></td>
</tr>

<tr class="even">
<td><a href="#">Ethiopia</a></td>
<td></td>
<td></td>
</tr>

<tr class="odd">
<td><a href="#">Malawi</a></td>
<td></td>
<td></td>
</tr>

<tr class="even">
<td><a href="#">Mozambique</a></td>
<td></td>
<td></td>
</tr>

<tr class="odd">
<td><a href="#">Namibia</a></td>
<td></td>
<td></td>
</tr>

<tr class="even">
<td><a href="#">Rwanda</a></td>
<td></td>
<td></td>
</tr>

<tr class="odd">
<td><a href="#">Seychelles</a></td>
<td></td>
<td></td>
</tr>

<tr class="even">
<td><a href="#">Uganda</a></td>
<td></td>
<td></td>
</tr>

<tr class="odd">
<td><a href="#">Zambia</a></td>
<td></td>
<td></td>
</tr>

</table>

<p>See the <a href="#">STDF Briefing Note No. 7</a> on Prioritizing SPS Capacity Needs using Multi-Criteria Decision Analysis.</p>

<h3>MCDA Workshop WTO June 2013</h3>

<p>The STDF organized an MCDA workshop at the WTO in Geneva on the 24-25th June 2013.</p>
<p>The workshop facilitated the review of the work done in the use of the MCDA to prioritize SPS capacity building options in a number of developing countries. Feedback on implementation and results were positive and incited much discussion and recommendations to guide future work.</p>
<p>Presentations from the workshop are available here.</p>

<h3>STDF Regional Workshop for Asia & the Pacific on the Use of Multi Criteria Decision Analysis to Inform SPS Decision Making (November 2012)</h3>

<p>In November 2012, the STDF organized a regional workshop in Bangkok, Thailand for selected experts in food safety, animal and/or plant health and trade, from countries in the Asia Pacific region. The workshop was successful in its objective to:</p>

<ul>
<li>increase knowledge about the MCDA Tool and its use to prioritize sanitary and phytosanitary (SPS) capacity building needs;</li>
<li>provide practical skills to enable participants to apply the MCDA Tool in their countries and use the associated computer software; and</li>
<li>obtain feedback to further improve the MCDA Tool.</li>
</ul>

<p>The <a href="#">workshop programme</a> is available here.</p>

<div class="accordion">
   <h3><a href="#">STDF Regional Workshop for Africa on the Use of Multi Criteria Decision Analysis to Inform SPS Decision Making (Johannesburg, August 2011)</a></h3>
   <div>
      <p>The STDF organized a regional workshop on the Use of Multi Criteria Decision Analysis to Inform SPS Decision Making in Johannesburg, South Africa on 16-17 August 2011. The purpose of the event was to: (i) present the MCDA approach; (ii) share practical experiences from Mozambique and Zambia where the framework was applied in April and July, respectively; and (iii) equip SPS experts from other countries with knowledge to initiate application of this approach.</p>
      <p>The workshop was attended by 41 participants representing governments departments responsible for food safety, animal health, plant health and/or trade in Africa, regional organizations (including the African Union Commission (AUC), the Common Market for Eastern and Southern Africa (COMESA) and the Southern Africa Development Community (SADC), universities and selected international organizations and donors. Twenty seven participants from national governments and regional organizations in Africa were funded to participate by the STDF. Click here for the <a href="#">list of participants</a>.</p>

    <p>The <a href="#">workshop programme</a> and <a href="#">summary report</a> are available here, as well as the following presentations delivered:</p>
    <ul>
      <li><a href="#">STDF: A joint initiative in SPS capacity building and technical cooperation</a>, Melvin Spreij, STDF Secretariat</li>
      <li><a href="#">Highlights from Recent STDF Thematic Work</a>, Marlynne Hopper, STDF Secretariat</li>
      <li><a href="#">Overview of the use of economic analysis to set priorities for SPS capacity building</a>, Spencer Henson</li>
      <li><a href="#">A multi-criteria decision-making framework for setting priorities in SPS capacity building</a>, Spencer Henson</li>
      <li>Aflandia <a href="#">Country Case Study</a> and <a href="#">Presentation</a>, Spencer Henson</li>
      <li><a href="#">Establishing Priorities for SPS Capacity Building in Mozambique Using a Multi Criteria Decision-Making Framework</a>, Ana David Timana, Deputy Director, National Institute for Fish Inspection</li>
      <li><a href="#">Application of the MCDA in Zambia</a>, Doreen Malekano Chomba, Zambia Agriculture Research Institute</li>
    </ul>
   </div>


     <h3><a href="#">Guidance document on the use of economic analysis to inform SPS decision making</a></h3>
     <div>
       <p>The STDF commissioned a guidance document on the use of economic analysis to inform SPS decision making (<a href="#">available here</a>). This document reviews experiences with the use of economic analysis to guide priority-setting for SPS capacity building in developing countries, highlights the challenges faced in using such methods and provides general guidance to decision-makers on which economic analysis approaches are best applied in particular decision scenarios. Click here to see the <a href="#">Executive Summary</a>.</p>
      <p>See the <a href="#">STDF Briefing Note No. 3</a> on the Use of Economic Analysis to Inform SPS decision-making.</p>
     </div>


     <h3><a href="#">STDF Workshop on the use of economic analysis to inform SPS decision-making - October 2009</a></h3>
     <div>
       <p>The STDF organized a workshop in Geneva on 30 October 2009 to raise awareness about how economic analysis can be used to inform SPS decision-making. Speakers representing developing and developed countries, as well as international organizations, provided examples of how different methodologies have been used to estimate the costs, benefits and returns on investments in food safety, animal and plant health capacity building (ex ante and ex post). The workshop was attended by delegates of the SPS Committee, as well as some 60 experts in food safety, animal and plant health, whose participation was supported by the WTO and STDF. Find out more about this event below.</p>
 
        <p><a href="#">Click here</a> to see the programme and the presentations delivered.</p>
     </div>

</div>



',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Many developing countries have several competing sanitary and phytosanitary (SPS) capacity needs linked to domestic policy objectives and agri-food export promotion. Resources available from national budgets and donors are generally insufficient to meet all the identified needs, and inevitably priorities have to be made between competing capacity building options.</p>
<p>In this context, economic analysis offers a practical tool that assist decision makers in establishing priorities, in a manner that is objective and accountable, and helps to ensure that resources are used in an efficient manner. It can also help to convince policy and decision-makers of the need to invest in SPS capacity building by demonstrating the financial benefits and cost-savings involved.</p>
<h3>Multi Criteria Decision Analysis (MCDA) Tool to Prioritize SPS Capacity Building Options</h3>
<p>The STDF has developed a new decision support tool, based on Multi-Criteria Decision Analysis (MCDA), to help prioritize and make choices between competing SPS capacity building needs in the context of resource constraints. The tool provides a structured process to aid SPS decision-making, which can help to enhance the economic efficiency of SPS investment decisions, promote more transparent and accountable choices between multiple SPS capacity building options, and facilitate more inclusive decision making processes.</p>
<p>The <a href="#">Draft Guide to Multi-Criteria Decision-Making</a> describes the steps involved in the use of this tool, including how computer software is used to derive quantitative priorities.</p>
<p>Click <a href="#">here</a> for details about the software used (D-Sight), and the opportunity to download a free trial copy. Through applications in selected countries (see below), the draft MCDA Guide is being refined and improved.</p>
<h3 class="center">Use of MCDA by Country</h3>
<table><thead><tr><th class="odd">Africa</th>
<th class="even">Latin America &amp; The Caribbean</th>
<th class="odd">Asia</th>
</tr></thead><tr class="first odd"><td><a href="">COMESA</a></td>
<td><a href="">Belize</a></td>
<td><a href="">Vietnam</a></td>
</tr><tr class="even"><td><a href="#">Ethiopia</a></td>
<td></td>
<td></td>
</tr><tr class="odd"><td><a href="#">Malawi</a></td>
<td></td>
<td></td>
</tr><tr class="even"><td><a href="#">Mozambique</a></td>
<td></td>
<td></td>
</tr><tr class="odd"><td><a href="#">Namibia</a></td>
<td></td>
<td></td>
</tr><tr class="even"><td><a href="#">Rwanda</a></td>
<td></td>
<td></td>
</tr><tr class="odd"><td><a href="#">Seychelles</a></td>
<td></td>
<td></td>
</tr><tr class="even"><td><a href="#">Uganda</a></td>
<td></td>
<td></td>
</tr><tr class="odd"><td><a href="#">Zambia</a></td>
<td></td>
<td></td>
</tr></table><p>See the <a href="#">STDF Briefing Note No. 7</a> on Prioritizing SPS Capacity Needs using Multi-Criteria Decision Analysis.</p>
<h3>MCDA Workshop WTO June 2013</h3>
<p>The STDF organized an MCDA workshop at the WTO in Geneva on the 24-25th June 2013.</p>
<p>The workshop facilitated the review of the work done in the use of the MCDA to prioritize SPS capacity building options in a number of developing countries. Feedback on implementation and results were positive and incited much discussion and recommendations to guide future work.</p>
<p>Presentations from the workshop are available here.</p>
<h3>STDF Regional Workshop for Asia &amp; the Pacific on the Use of Multi Criteria Decision Analysis to Inform SPS Decision Making (November 2012)</h3>
<p>In November 2012, the STDF organized a regional workshop in Bangkok, Thailand for selected experts in food safety, animal and/or plant health and trade, from countries in the Asia Pacific region. The workshop was successful in its objective to:</p>
<ul><li>increase knowledge about the MCDA Tool and its use to prioritize sanitary and phytosanitary (SPS) capacity building needs;</li>
<li>provide practical skills to enable participants to apply the MCDA Tool in their countries and use the associated computer software; and</li>
<li>obtain feedback to further improve the MCDA Tool.</li>
</ul><p>The <a href="#">workshop programme</a> is available here.</p>
<div class="accordion">
<h3><a href="#">STDF Regional Workshop for Africa on the Use of Multi Criteria Decision Analysis to Inform SPS Decision Making (Johannesburg, August 2011)</a></h3>
<div>
<p>The STDF organized a regional workshop on the Use of Multi Criteria Decision Analysis to Inform SPS Decision Making in Johannesburg, South Africa on 16-17 August 2011. The purpose of the event was to: (i) present the MCDA approach; (ii) share practical experiences from Mozambique and Zambia where the framework was applied in April and July, respectively; and (iii) equip SPS experts from other countries with knowledge to initiate application of this approach.</p>
<p>The workshop was attended by 41 participants representing governments departments responsible for food safety, animal health, plant health and/or trade in Africa, regional organizations (including the African Union Commission (AUC), the Common Market for Eastern and Southern Africa (COMESA) and the Southern Africa Development Community (SADC), universities and selected international organizations and donors. Twenty seven participants from national governments and regional organizations in Africa were funded to participate by the STDF. Click here for the <a href="#">list of participants</a>.</p>
<p>The <a href="#">workshop programme</a> and <a href="#">summary report</a> are available here, as well as the following presentations delivered:</p>
<ul><li><a href="#">STDF: A joint initiative in SPS capacity building and technical cooperation</a>, Melvin Spreij, STDF Secretariat</li>
<li><a href="#">Highlights from Recent STDF Thematic Work</a>, Marlynne Hopper, STDF Secretariat</li>
<li><a href="#">Overview of the use of economic analysis to set priorities for SPS capacity building</a>, Spencer Henson</li>
<li><a href="#">A multi-criteria decision-making framework for setting priorities in SPS capacity building</a>, Spencer Henson</li>
<li>Aflandia <a href="#">Country Case Study</a> and <a href="#">Presentation</a>, Spencer Henson</li>
<li><a href="#">Establishing Priorities for SPS Capacity Building in Mozambique Using a Multi Criteria Decision-Making Framework</a>, Ana David Timana, Deputy Director, National Institute for Fish Inspection</li>
<li><a href="#">Application of the MCDA in Zambia</a>, Doreen Malekano Chomba, Zambia Agriculture Research Institute</li>
</ul></div>
<h3><a href="#">Guidance document on the use of economic analysis to inform SPS decision making</a></h3>
<div>
<p>The STDF commissioned a guidance document on the use of economic analysis to inform SPS decision making (<a href="#">available here</a>). This document reviews experiences with the use of economic analysis to guide priority-setting for SPS capacity building in developing countries, highlights the challenges faced in using such methods and provides general guidance to decision-makers on which economic analysis approaches are best applied in particular decision scenarios. Click here to see the <a href="#">Executive Summary</a>.</p>
<p>See the <a href="#">STDF Briefing Note No. 3</a> on the Use of Economic Analysis to Inform SPS decision-making.</p>
</div>
<h3><a href="#">STDF Workshop on the use of economic analysis to inform SPS decision-making - October 2009</a></h3>
<div>
<p>The STDF organized a workshop in Geneva on 30 October 2009 to raise awareness about how economic analysis can be used to inform SPS decision-making. Speakers representing developing and developed countries, as well as international organizations, provided examples of how different methodologies have been used to estimate the costs, benefits and returns on investments in food safety, animal and plant health capacity building (ex ante and ex post). The workshop was attended by delegates of the SPS Committee, as well as some 60 experts in food safety, animal and plant health, whose participation was supported by the WTO and STDF. Find out more about this event below.</p>
<p><a href="#">Click here</a> to see the programme and the presentations delivered.</p>
</div>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-12 22:12:01 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'About Us',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0e2dc996-5ec7-4ef0-bb43-957407b034be',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378905146,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '76576d2e-7992-4701-abbb-098865888ef2',
  'revision_uid' => 1,
  'body' => array(),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 14:12:26 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Indicators to measure SPS performance',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '72317ab3-ffa8-4a53-a837-e0f3031d0409',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1379019364,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '77c64dcf-9a7a-454a-b381-126949bf718f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Endorsement of the Paris Declaration on Aid Effectiveness (2005) committed donors and partner countries to create results-based management frameworks to ensure that their activities achieve the desired objectives and targets. Such frameworks are based on the articulation of a chain of results (logic model) and inclusion of indicators for tracking results at each step in the chain.</p>
 
<p>The STDF work on indicators focuses on the identification and application of indicators to measure the performance of national SPS systems. It has three main objectives:</p>
<ul>
   <li>to sensitize the SPS community about the importance of managing for results and, more specifically, about the value and role of indicators;</li>
   <li>to identify, pilot test and refine a representative set of indicators to measure the performance of a national SPS system; and</li>
   <li>to develop guidance materials to promote the use of indicators within results-based management frameworks for national SPS systems</li>
</ul>


<div class="accordion">
   <h3><a href="#">STDF/OECD Technical working meeting on SPS indicators, Geneva, 1 July 2010</a></h3> 
    <div>
    <p>The STDF and OECD technical working meeting on SPS indicators was attended by some 75 participants, including 16 experts from developing countries and regional economic communities in Africa whose participation was funded by the STDF. The focus of the meeting was the draft <a href="#">STDF/OECD working paper on SPS indicators</a> and, in particular, the outcome indicators in the draft logframe.</p>
 
     <p>Click here to see the <a href="#">programme</a>, <a href="#">presentations</a>, and <a href="#">list of participants</a> for the meeting.</p>
 
     <p>Participants agreed on the value of a results-based management approach to identify indicators to measure the performance of a national SPS system, and the use of the logical framework approach in that context. There was also consensus that one size does not fit all and that indicators would need to be adapted by countries depending on their particular circumstances. The importance of ensuring synergies with FAO, OIE, IICA and other organizations that are applying capacity evaluation tools was underlined.</p>
 
     <p>A proposal to carry out pilot testing work on SPS indicators at the country level is also under preparation.</p>
     </div>


    <h3><a href="#">Draft working paper on SPS indicators</a></h3>
    <div>
      <p>This <a href="#">draft working paper</a>, prepared by the STDF Secretariat in collaboration with the OECD, provides a framework to identify indicators to measure the performance of a national SPS system, based on the logframe\'s intervention logic. This draft paper – and the provisional set of indicators proposed – is a "work-in-progress". This is the third revision of this paper and reflects discussions at the STDF / OECD Technical Working Meeting on SPS Indicators (Geneva, 1 July 2010) as well as other comments received.</p>
    </div>
</div>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Endorsement of the Paris Declaration on Aid Effectiveness (2005) committed donors and partner countries to create results-based management frameworks to ensure that their activities achieve the desired objectives and targets. Such frameworks are based on the articulation of a chain of results (logic model) and inclusion of indicators for tracking results at each step in the chain.</p>
<p>The STDF work on indicators focuses on the identification and application of indicators to measure the performance of national SPS systems. It has three main objectives:</p>
<ul><li>to sensitize the SPS community about the importance of managing for results and, more specifically, about the value and role of indicators;</li>
<li>to identify, pilot test and refine a representative set of indicators to measure the performance of a national SPS system; and</li>
<li>to develop guidance materials to promote the use of indicators within results-based management frameworks for national SPS systems</li>
</ul><div class="accordion">
<h3><a href="#">STDF/OECD Technical working meeting on SPS indicators, Geneva, 1 July 2010</a></h3>
<div>
<p>The STDF and OECD technical working meeting on SPS indicators was attended by some 75 participants, including 16 experts from developing countries and regional economic communities in Africa whose participation was funded by the STDF. The focus of the meeting was the draft <a href="#">STDF/OECD working paper on SPS indicators</a> and, in particular, the outcome indicators in the draft logframe.</p>
<p>Click here to see the <a href="#">programme</a>, <a href="#">presentations</a>, and <a href="#">list of participants</a> for the meeting.</p>
<p>Participants agreed on the value of a results-based management approach to identify indicators to measure the performance of a national SPS system, and the use of the logical framework approach in that context. There was also consensus that one size does not fit all and that indicators would need to be adapted by countries depending on their particular circumstances. The importance of ensuring synergies with FAO, OIE, IICA and other organizations that are applying capacity evaluation tools was underlined.</p>
<p>A proposal to carry out pilot testing work on SPS indicators at the country level is also under preparation.</p>
</div>
<h3><a href="#">Draft working paper on SPS indicators</a></h3>
<div>
<p>This <a href="#">draft working paper</a>, prepared by the STDF Secretariat in collaboration with the OECD, provides a framework to identify indicators to measure the performance of a national SPS system, based on the logframe\'s intervention logic. This draft paper – and the provisional set of indicators proposed – is a "work-in-progress". This is the third revision of this paper and reflects discussions at the STDF / OECD Technical Working Meeting on SPS Indicators (Geneva, 1 July 2010) as well as other comments received.</p>
</div>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-12 21:56:04 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Application Forms',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9ccd36f2-eebf-4349-bbdb-993d3374177a',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378929955,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '942b80d8-1dcc-4bbe-8301-1e5193811cf6',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Eligible organizations interested in applying for STDF funding should read the <a href="#">Guidance Note for Applicants</a> and then complete the relevant Application Form.</p>

<ul>
<li>Download the <a href="#">STDF Project Preparation Grant Application Form</a></li>
<li>Download the <a href="#">STDF Project Grant Application Form</a></li>
</ul>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Eligible organizations interested in applying for STDF funding should read the <a href="#">Guidance Note for Applicants</a> and then complete the relevant Application Form.</p>
<ul><li>Download the <a href="#">STDF Project Preparation Grant Application Form</a></li>
<li>Download the <a href="#">STDF Project Grant Application Form</a></li>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 21:05:55 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Aid for Trade',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0447a62c-0c91-43ec-a2c5-5f835aefe982',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378930589,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9bf27683-f01a-4c08-a29b-39f7b7f1936a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><a href="http://www.wto.org/english/tratop_e/devel_e/a4t_e/aid4trade_e.htm">Aid for Trade</a> aims to help developing countries, particularly least-developed countries, develop the trade-related skills and infrastructure that is needed to implement and benefit from WTO agreements and to expand their trade.</p>

<h3>STDF collaborates with the Aid for Trade Initiative</h3>

<p>Inability to comply with SPS requirements of importing countries is an important "supply side" constraint facing developing, and in particular, least developed countries to gain and/or maintain market access. Given the Aid for Trade focus on designing actions to address this type of constraints, the STDF provides inputs to the Aid for Trade initiative such as:</p>

<h3>Aid for Trade Fourth Global Review 2013</h3>
<p>The Fourth Global Review of Aid for Trade was held in Geneva, Switzerland on 8-10 July 2013 and aimed to examine strategies to connect developing country firms to international value chains, how to move up the value chain and discuss the associated development benefits in the context of the debate about the post-2015 development agenda. For more information on the Global Review, please see the <a href="http://www.wto.org/english/tratop_e/devel_e/a4t_e/global_review13_e.htm">WTO website</a>.</p>
<p>The STDF, in collaboration with Canada and the Netherlands, held a side-event at the Fourth Global Review of Aid for Trade entitled: "Public-Private Partnerships in a Value Chain Context".</p>
<p>Click <a href="">here</a> to see the more information on the side-event.</p>

<h3>Aid for Trade Third Global Review 2011</h3>
<p>The Third Global Aid for Trade Review was hosted in Geneva, Switzerland on 18-19 July 2011. Previous Global Reviews (2007 and 2009) demonstrated that Aid for Trade is making progress and that partner countries are making headway in mainstreaming trade in their national and regional development strategies. The focus of the Third Review was on outcomes and impact.</p>

<p>Case stories submitted to the WTO and OECD in January 2011 provided an important source of information for the Third Review. The STDF submitted three case stories on: (i) <a href="#">public-private partnerships (PPPs)</a> in support of SPS capacity; (ii) <a href="#">SPS indicators</a> to measure the performance of national SPS systems; and (iii) <a href="#">economic analysis</a> to inform SPS decision-making. The STDF also prepared a <a href="#">background note</a> on the challenges faced by LDCs in meeting SPS standards in the fisheries sector, based on desk research and case stories submitted by the Ministry of Commerce in Benin and TradeMark Southern Africa.</p>

<p>For more information on the Global Review, click <a href="http://www.wto.org/english/tratop_e/devel_e/a4t_e/global_review11_e.htm.">here</a>.</p>

<h3>STDF – Aid for Trade Regional Activity for UN SPECA countries</h3>
<p>The STDF collaborated with UNIDO to organize a side event on “Standards and Conformity Assessment Challenges and Related Capacity Building” on 2 December 2010 in Baku, Azerbaijan on the margins of a Ministerial Conference on Aid for Trade (AfT) Roadmap for the countries of the United Nations Special Programme for the Economies of Central Asia (UN SPECA). The side-event provided a forum for an exchange of views between policymakers, experts, research institutions, representatives of the private sector, donors and international organizations on managing sanitary and phytosanitary (SPS) measures in trade in the UN SPECA countries. It offered recommendations for addressing challenges and opportunities in this respect, and in particular recommendations for external support for raising awareness, needs assessments, action planning and regional cooperation.</p>

<p>Participants discussed the issue of transition from GOST to WTO-based SPS systems and explored the commonalities, differences and possible ways for harmonization of SPS systems amongst the SPECA countries. The side-event helped the countries as well as development partners, such as UNIDO and STDF, identify major constraints and capacity-building needs for the SPECA countries and discuss ways to address them including through national and regional technical cooperation projects.</p>

<p>For more information on the side event, see the documents below:</p>
<ul>
<li><a href="">Agenda of the side event</a></li>
<li><a href="">PowerPoint presentation: Food Safety and Agricultural Health Management in SPECA</a></li>
<li><a href="">Report: Managing Sanitary and Phytosanitary Measures (SPS) in SPECA Countries: completing the Transition</a></li>
</ul>

<p>For more information on the Ministerial Conference Aid For Trade Roadmap for SPECA, please visit: <a href="http://www.unece.org/trade/SPECA-AfTBaku2010/welcome.html">www.unece.org/trade/SPECA-AfTBaku2010/welcome.html</a></p>

<h3>STDF – Aid for Trade National Activity in Peru</h3>
<p>The STDF was involved in a National Aid for Trade activity in Peru, funded by the Inter-American Development Bank, aiming at examining the need for and provision of SPS-related technical cooperation. A balance sheet on outstanding SPS needs and also a list of priority needs and concrete projects on technical assistance were presented to donors and international organizations at a national Aid for Trade meeting in Lima on 3 March 2009. The aim of the meeting was to reach agreement on an analysis of priority SPS needs not covered by planned assistance, and an action plan to mobilize resources to address these specific needs.</p>

<p>See the document <a href="#">SPS Technical Assistance Priorities for Peru</a></p>


<h3>STDF – Overview of needs and assistance in eight least developed countries</h3>
<p>The STDF prepared a report on SPS needs and assistance of eight Least Developed Countries (LDCs) (<a href="#">G/SPS/GEN/900</a>) (i.e. Benin, Cambodia, Lao PDR, Lesotho, Mozambique, Rwanda, Senegal and Yemen) for the LDC Ministerial Conference on Aid for Trade which took place on 19-20 November 2008 in Siem Reap, Cambodia, jointly organized by WTO and UNIDO.</p>

<h3>STDF – Aid for Trade Regional Consultations</h3>
<p>In the first half of 2008, the STDF\'s pilot programme of regional consultations culminated in three regional workshops, bringing together donors, beneficiaries and organizations engaged in the delivery of SPS-related technical cooperation, aiming at a practical outcome: the mobilization of resources to address outstanding SPS needs. The three regions surveyed were:</p>

<ol>
<li><a href="">Central America</a></li>
<li><a href="">East Africa</a></li>
<li><a href="">Greater Mekong Delta sub-region</a></li>
</ol>

<p>These regional events were successful in:</p>
<ul>
<li>Consolidating existing diffuse evaluations of SPS needs into a single overview accepted by the countries and development partners;</li>
<li>Identifying existing and future planned sources of assistance to address SPS needs and avoid duplications; and</li>
<li>Identifying outstanding SPS priority needs not addressed by ongoing or planned assistance</li>
</ul>

<p>See <a href="#">G/SPS/GEN/864</a> for more information on these pilot activities.</p>

<h3>STDF – Aid for Trade Workshops</h3>
<ol>
<li><strong>Latin America and the Caribbean</strong>: The workshop took place on 12 September 2007 in Lima, Peru, and had a sub-regional focus on Costa Rica, El Salvador, Guatemala, Honduras, Nicaragua and Panama.
      <ol type="a">
         <li><a href="#">Summary report of the meeting - Lima</a> (Spanish)</li>
         <li><a href="#">Conclusions and Recommendations - Lima</a> (Spanish)</li>
     </ol>
</li>

<li><strong>Asia:</strong> The workshop took place on 18 September 2007 in Manila, The Philippines, and had a sub-regional focus on Cambodia, Lao People’s Democratic Republic and Vietnam.
      <ol type="a">
         <li><a href="#">Summary report of the meeting - Manila</a></li>
         <li><a href="#">Conclusions and Recommendations - Manila</a></li>
     </ol>
</li>

<li><strong>Africa</strong>: The workshop took place on 30 September 2007 in Dar es Salaam, Tanzania, and had a sub-regional focus on Kenya, Tanzania and Uganda
      <ol type="a">
         <li><a href="#">Summary report of the meeting - Dar es Salaam</a></li>
         <li><a href="#">Conclusions and Recommendations - Dar es Salaam</a></li>
     </ol>
</li>
</ol>

<p>A report on the workshops was presented at the <a href="http://www.wto.org/english/tratop_e/devel_e/a4t_e/global_review07_e.htm">Global Review of Aid for Trade</a> in the WTO General Council on 19 November 2007.</p>

',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><a href="http://www.wto.org/english/tratop_e/devel_e/a4t_e/aid4trade_e.htm">Aid for Trade</a> aims to help developing countries, particularly least-developed countries, develop the trade-related skills and infrastructure that is needed to implement and benefit from WTO agreements and to expand their trade.</p>
<h3>STDF collaborates with the Aid for Trade Initiative</h3>
<p>Inability to comply with SPS requirements of importing countries is an important "supply side" constraint facing developing, and in particular, least developed countries to gain and/or maintain market access. Given the Aid for Trade focus on designing actions to address this type of constraints, the STDF provides inputs to the Aid for Trade initiative such as:</p>
<h3>Aid for Trade Fourth Global Review 2013</h3>
<p>The Fourth Global Review of Aid for Trade was held in Geneva, Switzerland on 8-10 July 2013 and aimed to examine strategies to connect developing country firms to international value chains, how to move up the value chain and discuss the associated development benefits in the context of the debate about the post-2015 development agenda. For more information on the Global Review, please see the <a href="http://www.wto.org/english/tratop_e/devel_e/a4t_e/global_review13_e.htm">WTO website</a>.</p>
<p>The STDF, in collaboration with Canada and the Netherlands, held a side-event at the Fourth Global Review of Aid for Trade entitled: "Public-Private Partnerships in a Value Chain Context".</p>
<p>Click <a href="">here</a> to see the more information on the side-event.</p>
<h3>Aid for Trade Third Global Review 2011</h3>
<p>The Third Global Aid for Trade Review was hosted in Geneva, Switzerland on 18-19 July 2011. Previous Global Reviews (2007 and 2009) demonstrated that Aid for Trade is making progress and that partner countries are making headway in mainstreaming trade in their national and regional development strategies. The focus of the Third Review was on outcomes and impact.</p>
<p>Case stories submitted to the WTO and OECD in January 2011 provided an important source of information for the Third Review. The STDF submitted three case stories on: (i) <a href="#">public-private partnerships (PPPs)</a> in support of SPS capacity; (ii) <a href="#">SPS indicators</a> to measure the performance of national SPS systems; and (iii) <a href="#">economic analysis</a> to inform SPS decision-making. The STDF also prepared a <a href="#">background note</a> on the challenges faced by LDCs in meeting SPS standards in the fisheries sector, based on desk research and case stories submitted by the Ministry of Commerce in Benin and TradeMark Southern Africa.</p>
<p>For more information on the Global Review, click <a href="http://www.wto.org/english/tratop_e/devel_e/a4t_e/global_review11_e.htm.">here</a>.</p>
<h3>STDF – Aid for Trade Regional Activity for UN SPECA countries</h3>
<p>The STDF collaborated with UNIDO to organize a side event on “Standards and Conformity Assessment Challenges and Related Capacity Building” on 2 December 2010 in Baku, Azerbaijan on the margins of a Ministerial Conference on Aid for Trade (AfT) Roadmap for the countries of the United Nations Special Programme for the Economies of Central Asia (UN SPECA). The side-event provided a forum for an exchange of views between policymakers, experts, research institutions, representatives of the private sector, donors and international organizations on managing sanitary and phytosanitary (SPS) measures in trade in the UN SPECA countries. It offered recommendations for addressing challenges and opportunities in this respect, and in particular recommendations for external support for raising awareness, needs assessments, action planning and regional cooperation.</p>
<p>Participants discussed the issue of transition from GOST to WTO-based SPS systems and explored the commonalities, differences and possible ways for harmonization of SPS systems amongst the SPECA countries. The side-event helped the countries as well as development partners, such as UNIDO and STDF, identify major constraints and capacity-building needs for the SPECA countries and discuss ways to address them including through national and regional technical cooperation projects.</p>
<p>For more information on the side event, see the documents below:</p>
<ul><li><a href="">Agenda of the side event</a></li>
<li><a href="">PowerPoint presentation: Food Safety and Agricultural Health Management in SPECA</a></li>
<li><a href="">Report: Managing Sanitary and Phytosanitary Measures (SPS) in SPECA Countries: completing the Transition</a></li>
</ul><p>For more information on the Ministerial Conference Aid For Trade Roadmap for SPECA, please visit: <a href="http://www.unece.org/trade/SPECA-AfTBaku2010/welcome.html">www.unece.org/trade/SPECA-AfTBaku2010/welcome.html</a></p>
<h3>STDF – Aid for Trade National Activity in Peru</h3>
<p>The STDF was involved in a National Aid for Trade activity in Peru, funded by the Inter-American Development Bank, aiming at examining the need for and provision of SPS-related technical cooperation. A balance sheet on outstanding SPS needs and also a list of priority needs and concrete projects on technical assistance were presented to donors and international organizations at a national Aid for Trade meeting in Lima on 3 March 2009. The aim of the meeting was to reach agreement on an analysis of priority SPS needs not covered by planned assistance, and an action plan to mobilize resources to address these specific needs.</p>
<p>See the document <a href="#">SPS Technical Assistance Priorities for Peru</a></p>
<h3>STDF – Overview of needs and assistance in eight least developed countries</h3>
<p>The STDF prepared a report on SPS needs and assistance of eight Least Developed Countries (LDCs) (<a href="#">G/SPS/GEN/900</a>) (i.e. Benin, Cambodia, Lao PDR, Lesotho, Mozambique, Rwanda, Senegal and Yemen) for the LDC Ministerial Conference on Aid for Trade which took place on 19-20 November 2008 in Siem Reap, Cambodia, jointly organized by WTO and UNIDO.</p>
<h3>STDF – Aid for Trade Regional Consultations</h3>
<p>In the first half of 2008, the STDF\'s pilot programme of regional consultations culminated in three regional workshops, bringing together donors, beneficiaries and organizations engaged in the delivery of SPS-related technical cooperation, aiming at a practical outcome: the mobilization of resources to address outstanding SPS needs. The three regions surveyed were:</p>
<ol><li><a href="">Central America</a></li>
<li><a href="">East Africa</a></li>
<li><a href="">Greater Mekong Delta sub-region</a></li>
</ol><p>These regional events were successful in:</p>
<ul><li>Consolidating existing diffuse evaluations of SPS needs into a single overview accepted by the countries and development partners;</li>
<li>Identifying existing and future planned sources of assistance to address SPS needs and avoid duplications; and</li>
<li>Identifying outstanding SPS priority needs not addressed by ongoing or planned assistance</li>
</ul><p>See <a href="#">G/SPS/GEN/864</a> for more information on these pilot activities.</p>
<h3>STDF – Aid for Trade Workshops</h3>
<ol><li><strong>Latin America and the Caribbean</strong>: The workshop took place on 12 September 2007 in Lima, Peru, and had a sub-regional focus on Costa Rica, El Salvador, Guatemala, Honduras, Nicaragua and Panama.<br /><ol type="a"><li><a href="#">Summary report of the meeting - Lima</a> (Spanish)</li>
<li><a href="#">Conclusions and Recommendations - Lima</a> (Spanish)</li>
</ol></li>
<li><strong>Asia:</strong> The workshop took place on 18 September 2007 in Manila, The Philippines, and had a sub-regional focus on Cambodia, Lao People’s Democratic Republic and Vietnam.<br /><ol type="a"><li><a href="#">Summary report of the meeting - Manila</a></li>
<li><a href="#">Conclusions and Recommendations - Manila</a></li>
</ol></li>
<li><strong>Africa</strong>: The workshop took place on 30 September 2007 in Dar es Salaam, Tanzania, and had a sub-regional focus on Kenya, Tanzania and Uganda<br /><ol type="a"><li><a href="#">Summary report of the meeting - Dar es Salaam</a></li>
<li><a href="#">Conclusions and Recommendations - Dar es Salaam</a></li>
</ol></li>
</ol><p>A report on the workshops was presented at the <a href="http://www.wto.org/english/tratop_e/devel_e/a4t_e/global_review07_e.htm">Global Review of Aid for Trade</a> in the WTO General Council on 19 November 2007.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 21:16:29 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'How to apply',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8d3e6399-7fd5-48db-80b4-299e63daf8ef',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378929849,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9d14bd5e-0b7d-42d3-92fa-8c8ce53bb619',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Applications for PPGs and project grants should be submitted to the STDF Secretariat by e-mail (<a href="mailto:STDFSecretariat@wto.org">STDFSecretariat@wto.org</a>) using the prescribed <a href="#">Application Forms</a>.</p>

<p>Applications may be submitted at any time during the year but must normally be received at least 60 working days in advance of a <a href="#">Working Group</a> meeting to be considered at that meeting. Applications submitted after the 60 working day deadline will be considered at the subsequent Working Group meeting.</p>

<p>Applications are accepted in any of the three working languages of the WTO (English, French and Spanish).</p>

<div class="highlighted">
<h3>Next deadline for funding applications</h3>
<p>Applications received before 19 July 2013 will be considered at the STDF Working Group meeting in October 2013.</p>
</div>

<p>Click <a href="#">here</a> to see the Guidance Note for Applicants and Application Forms</p>

<p>A <a href="#">Practical Guide on Trade-related Project Identification, Formulation and Design</a> has been developed by the CIDT for the Enhanced Integrated Framework (EIF) and the STDF.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Applications for PPGs and project grants should be submitted to the STDF Secretariat by e-mail (<a href="mailto:STDFSecretariat@wto.org">STDFSecretariat@wto.org</a>) using the prescribed <a href="#">Application Forms</a>.</p>
<p>Applications may be submitted at any time during the year but must normally be received at least 60 working days in advance of a <a href="#">Working Group</a> meeting to be considered at that meeting. Applications submitted after the 60 working day deadline will be considered at the subsequent Working Group meeting.</p>
<p>Applications are accepted in any of the three working languages of the WTO (English, French and Spanish).</p>
<div class="highlighted">
<h3>Next deadline for funding applications</h3>
<p>Applications received before 19 July 2013 will be considered at the STDF Working Group meeting in October 2013.</p>
</div>
<p>Click <a href="#">here</a> to see the Guidance Note for Applicants and Application Forms</p>
<p>A <a href="#">Practical Guide on Trade-related Project Identification, Formulation and Design</a> has been developed by the CIDT for the Enhanced Integrated Framework (EIF) and the STDF.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 21:04:09 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Project Grants',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6eb235f9-5154-4f1b-b6ea-0289b4533515',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378928751,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9f4c4e56-6446-47e2-8cab-c8aa7e865fd0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Funds up to normally a maximum of <strong>US$1 million</strong> are available for project implementation. No minimum limit applies on the size of projects funded, but projects should preferably be in the range of US$250,000 and US$1 million in size.</p>

<p>Beneficiaries must contribute to the project from their own resources, either in the form of financing or in-kind contributions such as staff time, use of premises, vehicles or other already existing assets.  The beneficiaries’ own contribution to the project depends on the beneficiary country or countries\' classification in the most recent OECD Development Assistance Committee <a href="#">List of ODA recipients</a>, as follows:</p>

<ul>
<li>Beneficiaries from Least Developed Countries (LDCs) and Other Low Income Countries (OLICs) should contribute at least 10% of the requested STDF contribution to the project;</li>
<li>Beneficiaries from Lower Middle Income Countries (LMICs) should contribute at least 20% of the requested STDF contribution to the project; and</li>
<li>Beneficiaries from Upper Middle Income Countries (UMICs) should contribute at least 60% of the requested STDF contribution to the project.</li>
</ul>

<p>Beneficiaries from UMICs must additionally demonstrate that the project will have positive spill-over effects for other LDCs, OLICs and/or LMICs, e.g. through innovative or demonstration projects.</p>
 
<p>The STDF encourages regional projects (i.e. with two or more beneficiaries in different countries). The beneficiaries’ own contribution varies according to the involvement of LDCs and OLICs:</p>

<ul>
<li>For regional projects with at least one LDC or OLIC, beneficiaries should contribute at least 10% of the requested STDF contribution to the project; and</li>
<li>For regional projects without an LDC or OLIC, beneficiaries should contribute at least 20% of the requested STDF contribution to the project.</li>
</ul>

<p><strong>See the <a href="#">Guidance Note for Applicants</a> for detailed information on STDF funding opportunities and requirements.</strong></p>

<p>Download the <a href="#">STDF Project Grant Application Form</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Funds up to normally a maximum of <strong>US$1 million</strong> are available for project implementation. No minimum limit applies on the size of projects funded, but projects should preferably be in the range of US$250,000 and US$1 million in size.</p>
<p>Beneficiaries must contribute to the project from their own resources, either in the form of financing or in-kind contributions such as staff time, use of premises, vehicles or other already existing assets.  The beneficiaries’ own contribution to the project depends on the beneficiary country or countries\' classification in the most recent OECD Development Assistance Committee <a href="#">List of ODA recipients</a>, as follows:</p>
<ul><li>Beneficiaries from Least Developed Countries (LDCs) and Other Low Income Countries (OLICs) should contribute at least 10% of the requested STDF contribution to the project;</li>
<li>Beneficiaries from Lower Middle Income Countries (LMICs) should contribute at least 20% of the requested STDF contribution to the project; and</li>
<li>Beneficiaries from Upper Middle Income Countries (UMICs) should contribute at least 60% of the requested STDF contribution to the project.</li>
</ul><p>Beneficiaries from UMICs must additionally demonstrate that the project will have positive spill-over effects for other LDCs, OLICs and/or LMICs, e.g. through innovative or demonstration projects.</p>
<p>The STDF encourages regional projects (i.e. with two or more beneficiaries in different countries). The beneficiaries’ own contribution varies according to the involvement of LDCs and OLICs:</p>
<ul><li>For regional projects with at least one LDC or OLIC, beneficiaries should contribute at least 10% of the requested STDF contribution to the project; and</li>
<li>For regional projects without an LDC or OLIC, beneficiaries should contribute at least 20% of the requested STDF contribution to the project.</li>
</ul><p><strong>See the <a href="#">Guidance Note for Applicants</a> for detailed information on STDF funding opportunities and requirements.</strong></p>
<p>Download the <a href="#">STDF Project Grant Application Form</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 20:45:51 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Climate change',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '25359047-8473-49b0-b570-fbb9ef00107b',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1379021118,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9fc854ee-bdb8-46f2-9689-7fc76ba9c81a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The effects of climate change on food safety, animal and plant health risks is a relatively new area of study. However, the evidence from recent studies is clear, climate change is one of several global change factors that are contributing to increased and new food safety, animal and plant risks.</p>

<div class="accordion">
   <h3><a href="#">STDF / World Bank Seminar on Climate Change and Agriculture Trade: Risks and Responses – September 2009</a></h3>
   <div>
      <p>Climate change and SPS risks were on the agenda at an STDF / World Bank seminar attended by some 100 representatives from international organizations, regulatory and development agencies, research, academia and the private sector in Washington, D.C. on 22-23 September 2009.</p>
 
     <p>The workshop sought to increase awareness about the implications of climate change for SPS risks and what is needed to address the challenges faced. The specific objectives were to:</p>

    <ul>
        <li>present new research on the relationship between climate change and global trade flows, as well as the implications for food safety, animal and plant health;</li>
        <li>identify SPS-related challenges posed by climate change; and</li>
        <li>discuss the implications and priorities for SPS capacity-building</li>
    </ul>

    <p><a href="#">Click here</a> to see the programme and the presentations delivered.</p>
    <p>See the <a href="#">STDF Briefing Note No. 2</a> summarizing the main discussions and conclusions emerging from the seminar</p>
   </div>
</div>



<h3>STDF Publication on Climate Change and Trade: The Link to Sanitary and Phytosanitary Standards</h3>
<div class="border">
<a href="#"><img src="/sites/default/files/book1.jpg" alt="" /></a>
<p>This paper seeks to raise awareness about issues related to SPS risks and standards in the context of agri-food trade and climate change. It analyses the scientific understanding of the relationship between climate change, food safety, plant pests, animal diseases and trade, and it identifies and discusses four key areas for future policy consideration, notably risk assessment, SPS capacity in developing countries, climate change resilience and basic research challenges.</p>
</div>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The effects of climate change on food safety, animal and plant health risks is a relatively new area of study. However, the evidence from recent studies is clear, climate change is one of several global change factors that are contributing to increased and new food safety, animal and plant risks.</p>
<div class="accordion">
<h3><a href="#">STDF / World Bank Seminar on Climate Change and Agriculture Trade: Risks and Responses – September 2009</a></h3>
<div>
<p>Climate change and SPS risks were on the agenda at an STDF / World Bank seminar attended by some 100 representatives from international organizations, regulatory and development agencies, research, academia and the private sector in Washington, D.C. on 22-23 September 2009.</p>
<p>The workshop sought to increase awareness about the implications of climate change for SPS risks and what is needed to address the challenges faced. The specific objectives were to:</p>
<ul><li>present new research on the relationship between climate change and global trade flows, as well as the implications for food safety, animal and plant health;</li>
<li>identify SPS-related challenges posed by climate change; and</li>
<li>discuss the implications and priorities for SPS capacity-building</li>
</ul><p><a href="#">Click here</a> to see the programme and the presentations delivered.</p>
<p>See the <a href="#">STDF Briefing Note No. 2</a> summarizing the main discussions and conclusions emerging from the seminar</p>
</div>
</div>
<h3>STDF Publication on Climate Change and Trade: The Link to Sanitary and Phytosanitary Standards</h3>
<div class="border">
<a href="#"><img src="/sites/default/files/book1.jpg" alt="" /></a>
<p>This paper seeks to raise awareness about issues related to SPS risks and standards in the context of agri-food trade and climate change. It analyses the scientific understanding of the relationship between climate change, food safety, plant pests, animal diseases and trade, and it identifies and discusses four key areas for future policy consideration, notably risk assessment, SPS capacity in developing countries, climate change resilience and basic research challenges.</p>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-12 22:25:18 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Public-Private Partnerships',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '154447ff-1baa-47d9-8a1d-0d5a13e652b4',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1379016914,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a50e6041-61aa-4b3e-ac2e-658d66425a85',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Governments and the private sector are increasingly working together in the SPS area. Some of these Public-Private Partnerships (PPPs) focus primarily on capacity building whereby the public and private sector work together – at the international, regional, national and/or sub-national level – to address specific SPS capacity constraints and/or take advantage of market opportunities. Other PPPs are centred on co-regulatory approaches to SPS management.</p>

<div class="accordion">
  <h3><a href="#">International Workshop on PPP, The Hague, 4-6 October 2010</a></h3>
  <div>
  <p>The STDF, in collaboration with the Dutch Ministry of Agriculture, Nature and Food Quality (LNV) and the World Bank Institute, organized an international workshop on the role of Public-Private Partnerships (PPPs) in support of sanitary and phytosanitary (SPS) capacity, at the Bilderberg Hotel in Scheveningen (The Hague), The Netherlands from 4-5 October.</p>
 
   <p>The workshop was attended by 95 experts, comprising representatives of public sector agencies in both developed and developing countries, international and regional organizations, donors, the private sector (including large multinational companies, as well as other private sector associations and companies) and research/academic institutions. See the <a href="#">list of participants</a>.</p>

  <p><a href="#">Click here</a> to view the workshop programme, as well as the presentations and speeches delivered.</p>
  <p>The workshop was followed by an excursion to the Port of Rotterdam, Europe\'s largest seaport and principal centre for agri-business, on 6 October, attended by some 50 participants. The day included presentations by representatives from the Port Authority and government inspectors, site visits to inspection and customs facilities receiving large shipments of food and agricultural imports, as well as a boat tour around the Port.</p>
 
   <p>See the <a href="#">STDF Briefing Note No. 6</a> summarizing the key messages and conclusions emerging from the seminar.</p>
 
   <p>The Secretariat will build on the outputs of this workshop in its future activities and disseminate the findings as widely as possible at other events including SPS and Aid for Trade. The conclusions of the workshop were presented and suggestions for further linkages were explored during the conferences held in Brussels, Belgium, in November 2010, namely the conference on "<a href="#">Strengthening Responsible Business and Governance in Africa</a>" (16-18 November 2010), jointly organized by the Institute for the World Bank and the Government of Belgium, and the high-level "Better Training for Safe Food" conference (18-19 November 2010).</p>
 
   <p>See the <a href="#">Workshop Leaflet</a></p>
  </div>


   <h3><a href="#">STDF publication on Public-Private Partnerships to enhance SPS capacity</a></h3>
   <div>
     <img src="" alt="" />
     <p>This publication analyses the emergence, operation and performance of selected SPS-related partnerships between government agencies responsible for food safety, animal and plant health and/or trade and the private sector. It has been prepared to raise awareness about the potential value and role of PPPs in enhancing SPS capacity and to provide practical guidance to facilitate and promote PPPs for SPS capacity development.</p>
   </div>
</div>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Governments and the private sector are increasingly working together in the SPS area. Some of these Public-Private Partnerships (PPPs) focus primarily on capacity building whereby the public and private sector work together – at the international, regional, national and/or sub-national level – to address specific SPS capacity constraints and/or take advantage of market opportunities. Other PPPs are centred on co-regulatory approaches to SPS management.</p>
<div class="accordion">
<h3><a href="#">International Workshop on PPP, The Hague, 4-6 October 2010</a></h3>
<div>
<p>The STDF, in collaboration with the Dutch Ministry of Agriculture, Nature and Food Quality (LNV) and the World Bank Institute, organized an international workshop on the role of Public-Private Partnerships (PPPs) in support of sanitary and phytosanitary (SPS) capacity, at the Bilderberg Hotel in Scheveningen (The Hague), The Netherlands from 4-5 October.</p>
<p>The workshop was attended by 95 experts, comprising representatives of public sector agencies in both developed and developing countries, international and regional organizations, donors, the private sector (including large multinational companies, as well as other private sector associations and companies) and research/academic institutions. See the <a href="#">list of participants</a>.</p>
<p><a href="#">Click here</a> to view the workshop programme, as well as the presentations and speeches delivered.</p>
<p>The workshop was followed by an excursion to the Port of Rotterdam, Europe\'s largest seaport and principal centre for agri-business, on 6 October, attended by some 50 participants. The day included presentations by representatives from the Port Authority and government inspectors, site visits to inspection and customs facilities receiving large shipments of food and agricultural imports, as well as a boat tour around the Port.</p>
<p>See the <a href="#">STDF Briefing Note No. 6</a> summarizing the key messages and conclusions emerging from the seminar.</p>
<p>The Secretariat will build on the outputs of this workshop in its future activities and disseminate the findings as widely as possible at other events including SPS and Aid for Trade. The conclusions of the workshop were presented and suggestions for further linkages were explored during the conferences held in Brussels, Belgium, in November 2010, namely the conference on "<a href="#">Strengthening Responsible Business and Governance in Africa</a>" (16-18 November 2010), jointly organized by the Institute for the World Bank and the Government of Belgium, and the high-level "Better Training for Safe Food" conference (18-19 November 2010).</p>
<p>See the <a href="#">Workshop Leaflet</a></p>
</div>
<h3><a href="#">STDF publication on Public-Private Partnerships to enhance SPS capacity</a></h3>
<div>
     <img src="" alt="" /><p>This publication analyses the emergence, operation and performance of selected SPS-related partnerships between government agencies responsible for food safety, animal and plant health and/or trade and the private sector. It has been prepared to raise awareness about the potential value and role of PPPs in enhancing SPS capacity and to provide practical guidance to facilitate and promote PPPs for SPS capacity development.</p>
</div>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-12 21:15:14 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Policy Committee',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6ba91a09-2fcb-4d26-99f4-42159e21a2b1',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378923931,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a5c530bd-49f2-4c33-800e-1f52924f44cc',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The Policy Committee consists of <strong>high-level representatives</strong> of STDF’s partners and donors, as well as selected experts of developing countries. The Policy Committee decides on policy and strategy and is responsible for oversight of the STDF Working Group. The Policy Committee:</p>

<ul>
<li>Sets policy guidelines and provides policy oversight on the overall direction of the Facility;</li>
<li>Provides guidance on programmes and the Facility\'s work agenda;</li>
<li>Oversees efforts in the coordination of SPS related technical cooperation and the dissemination of good practice; and</li>
<li>Seeks to develop a broader financial basis for the Facility through outreach to donors.</li>
</ul>

<p>See <a href="#">documents for the Policy Committee</a></p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The Policy Committee consists of <strong>high-level representatives</strong> of STDF’s partners and donors, as well as selected experts of developing countries. The Policy Committee decides on policy and strategy and is responsible for oversight of the STDF Working Group. The Policy Committee:</p>
<ul><li>Sets policy guidelines and provides policy oversight on the overall direction of the Facility;</li>
<li>Provides guidance on programmes and the Facility\'s work agenda;</li>
<li>Oversees efforts in the coordination of SPS related technical cooperation and the dissemination of good practice; and</li>
<li>Seeks to develop a broader financial basis for the Facility through outreach to donors.</li>
</ul><p>See <a href="#">documents for the Policy Committee</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 19:25:31 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'STDF vision and mission',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'dd6c3445-ef01-48f6-9dad-d9ce89a954c6',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378905385,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b4547ed3-0b47-4316-8d43-7fd79e62a3cb',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>STDF vision</h3>
<p>Improved sanitary and phytosanitary capacity in developing countries supports sustainable economic growth, poverty reduction, food security and environmental protection.</p>
<h3>STDF mission</h3>
<p>The STDF is a global partnership that supports developing countries in building their capacity to implement international sanitary and phytosanitary standards, guidelines and recommendations as a means to improve their human, animal and plant health status and ability to gain and maintain access to markets.</p>
<h5>STDF\'s mandate is to:</h5>
<ul>
<li>Increase awareness, mobilize resources, strengthen collaboration, identify and disseminate good practice;</li>
<li>Provide support and funding for the development and implementation of projects that promote compliance with international SPS requirements.</li>
</ul>
<p>The STDF is committed to the Paris Principles on Aid Effectiveness and to achieving the Millennium Development Goals.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h3>STDF vision</h3>
<p>Improved sanitary and phytosanitary capacity in developing countries supports sustainable economic growth, poverty reduction, food security and environmental protection.</p>
<h3>STDF mission</h3>
<p>The STDF is a global partnership that supports developing countries in building their capacity to implement international sanitary and phytosanitary standards, guidelines and recommendations as a means to improve their human, animal and plant health status and ability to gain and maintain access to markets.</p>
<h5>STDF\'s mandate is to:</h5>
<ul><li>Increase awareness, mobilize resources, strengthen collaboration, identify and disseminate good practice;</li>
<li>Provide support and funding for the development and implementation of projects that promote compliance with international SPS requirements.</li>
</ul><p>The STDF is committed to the Paris Principles on Aid Effectiveness and to achieving the Millennium Development Goals.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 14:16:25 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Donor support',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '874b9340-c6b9-4bc7-9de0-ef04d2435184',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378924359,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b468a92d-e53c-47d4-9c09-1a53d4eb197c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The STDF is funded through voluntary contributions to the Trust Fund established under the financial regulations and rules of the WTO.</p>
<h3 class="center">Total contributions received (2007-2012)</h3>
<p><img src="/sites/default/files/site_images/DonorSupport1.jpg" alt="Donor Support Chart" /></p>
<p>The STDF Medium Term Strategy, adopted in January 2012, established an annual funding target level of US$5 million for the period 2012-16.</p>
<h3 class="center">Contributions received from 2007 to 2012 (in Swiss Francs)</h3>
<p><img src="/sites/default/files/site_images/DonorSupport2.gif" alt="Donor Support Table" /></p>
<p>Multi-annual Contribution Agreements have been concluded with Canada (2010-14) the European Union (2010-15) and Sweden (2009-13).</p>
<p>See <a href="#">who are STDF Donors</a></p>
<p class="note">Chinese Taipei is a WTO Member in application of Article XII of the Marrakesh Agreement (1994). WTO membership has no implication regarding the sovereignty of the Member pursuant to international law.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The STDF is funded through voluntary contributions to the Trust Fund established under the financial regulations and rules of the WTO.</p>
<h3 class="center">Total contributions received (2007-2012)</h3>
<p><img src="/sites/default/files/site_images/DonorSupport1.jpg" alt="Donor Support Chart" /></p>
<p>The STDF Medium Term Strategy, adopted in January 2012, established an annual funding target level of US$5 million for the period 2012-16.</p>
<h3 class="center">Contributions received from 2007 to 2012 (in Swiss Francs)</h3>
<p><img src="/sites/default/files/site_images/DonorSupport2.gif" alt="Donor Support Table" /></p>
<p>Multi-annual Contribution Agreements have been concluded with Canada (2010-14) the European Union (2010-15) and Sweden (2009-13).</p>
<p>See <a href="#">who are STDF Donors</a></p>
<p class="note">Chinese Taipei is a WTO Member in application of Article XII of the Marrakesh Agreement (1994). WTO membership has no implication regarding the sovereignty of the Member pursuant to international law.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 19:32:39 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'STDF Annual Reports',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a91ac166-8545-4760-8855-85bba57b5523',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378928044,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bbd97bcb-8d52-43e3-8118-20f02f1aee99',
  'revision_uid' => 1,
  'body' => array(),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 20:34:04 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Fruit fly',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b8289407-1ed5-40c5-8367-b62eda6fb9f7',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1379018691,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bc0af09d-4efd-4eaf-95f3-75c499c9ef1f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Fruit flies seriously threaten agricultural production and productivity, reduce quality, disrupt trade and trigger huge financial losses, affecting livelihoods and food security. The STDF, the World Bank and the Economic Community of West African States (ECOWAS) initiated a coordinated multi-stakeholder approach to control fruit fly in West Africa in 2008.</p>

<div class="accordion">
    <h3><a href="#">Discussion and validation of a scoping study on fruit fly – July 2008</a></h3>
    <div>
       <p>In July 2008, under the aegis of the ECOWAS Commissioner for Agriculture and Mali\'s Minister of the Environment, 15 ECOWAS member states met in Bamako to discuss and validate a scoping study on fruit fly financed by the European Commission. The EC-funded scoping study (<a href="">English</a>, <a href="#">French</a>) proposed a concerted regional action plan for the management of fruit fly in West Africa accompanied by an appropriate phytosanitary response to control the pest.</p>
    </div>

    <h3><a href="#">Informal meeting in preparation of the stakeholder meeting – October 2008</a></h3>
    <div>
       <p>In October 2008, the STDF organized an informal meeting with West African delegates present at the SPS Committee as well as representatives from ECOWAS, WAEMU/UEMOA, FAO, UNCTAD and World Bank to discuss actions to be undertaken in preparation of the stakeholder meeting. Issues such as the importance of a creation of national committees to oversee fruit fly control activities, expanding the Action Plan to other countries in the region and forthcoming technical assistance activities were discussed.</p>
    </div>

    <h3><a href="#">Development of a comprehensive project document for the control of fruit fly in West Africa</a></h3>
    <div>
       <p>The World Bank and the STDF jointly commissioned COLEACP to conduct a follow-up exercise to complete the EC study with a proposed budget and institutional set-up, in order to outline a comprehensive project document for the control of fruit fly in West Africa. The work by COLEACP and its team of consultants was conducted in June and July 2009 in close collaboration with ECOWAS.</p>
       <p>See the <a href="#">Background note</a></p>
    </div>


    <h3><a href="#">STDF – ECOWAS Donor Workshop on Fruit Fly Control in West Africa – September 2009</a></h3>
    <div>
       <p>On 29-30 September 2009, the STDF and the ECOWAS Commission, in collaboration with the Government of Mali co-organized a two-day workshop to sensitize stakeholders on a complementary study for the Regional Action Plan to control fruit fly in West Africa. The event gathered close to 100 participants from governments, private sector, research institutions, specialized agencies and development partners who emphasized the need for a coordinated response to control fruit fly in West Africa in line with the Paris Principles on Aid Effectiveness. The workshop adopted the "Bamako Declaration" (<a href="#">English</a>, <a href="#">French</a>) which outlines a common framework to implement the five-year Regional Action Plan which is costed at €25 million. The plan has the potential to become a generic operating framework that could be replicated in other African regions.</p>
       <p>See the COLEACP Report (<a href="#">English</a>, <a href="#">French</a>) and its Executive Summary (<a href="#">English</a>, <a href="#">French</a>)</p>
       <p><a href="#">Click here</a> to see the programme and presentations delivered</p>
       <p>See the <a href="#">STDF Briefing Note No. 4</a> summarizing the main discussions and conclusions emerging from the seminar</p>
    </div>


    <h3><a href="#">Information letters, research papers and other documentation related to fruit fly</a></h3>
    <div>
       <table class="content-table">
         <tr class="first">
               <td>Fruit Fly Newsletters</td>
               <td>
                       <p>The COLEACP Newsletter produced in collaboration with CIRAD is intended for all public and private operators concerned with the fruit fly issue in Africa. It has been published with the support of the French Cooperation in 2007/2008 and the STDF in 2009/2010.</p>
                       <p>Available in English at:  <a href="http://www.coleacp.org/en/page/12021-our-achievements">www.coleacp.org/en/page/12021-our-achievements</a></p>
                       <p>Available in French at:  <a href="http://www.coleacp.org/fr/page/12022-nos-realisations">www.coleacp.org/fr/page/12022-nos-realisations</a></p>
                </td>
         </tr>
         <tr>
               <td>Reports</td>
               <td>
                      <p>EC Scoping study (<a href="#">English</a>, <a href="#">French</a>)</p>
                      <p><a href="#">ECOWAS workshop report.</a></p>
                </td>
         </tr>
         <tr class="last">
               <td>Research studies</td>
               <td>
                       <p><a href="#">Population dynamics and on-farm fruit fly integrated pest management in mango orchards in the natural area of Niayes in Senegal</a>, Mbaye Ndiaye, Elhadji Omar Dieng and Gilles Delhove</p>
                       <p><a href="#">Suivi des populations  des mouches des fruits et démonstration d’un dispositif de lutte intégrée dans des vergers de manguiers</a>, Mbaye Ndiaye et al.</p>
                       <p><a href="#">A Multi-Institutional Approach to Create Fruit Fly-Low Prevalence and Fly-Free Areas in Central America</a>, Jesus Reyes Flores et al., IAEA, 2007</p>
               </td>
         </tr>
        </table>

    </div>

</div>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Fruit flies seriously threaten agricultural production and productivity, reduce quality, disrupt trade and trigger huge financial losses, affecting livelihoods and food security. The STDF, the World Bank and the Economic Community of West African States (ECOWAS) initiated a coordinated multi-stakeholder approach to control fruit fly in West Africa in 2008.</p>
<div class="accordion">
<h3><a href="#">Discussion and validation of a scoping study on fruit fly – July 2008</a></h3>
<div>
<p>In July 2008, under the aegis of the ECOWAS Commissioner for Agriculture and Mali\'s Minister of the Environment, 15 ECOWAS member states met in Bamako to discuss and validate a scoping study on fruit fly financed by the European Commission. The EC-funded scoping study (<a href="">English</a>, <a href="#">French</a>) proposed a concerted regional action plan for the management of fruit fly in West Africa accompanied by an appropriate phytosanitary response to control the pest.</p>
</div>
<h3><a href="#">Informal meeting in preparation of the stakeholder meeting – October 2008</a></h3>
<div>
<p>In October 2008, the STDF organized an informal meeting with West African delegates present at the SPS Committee as well as representatives from ECOWAS, WAEMU/UEMOA, FAO, UNCTAD and World Bank to discuss actions to be undertaken in preparation of the stakeholder meeting. Issues such as the importance of a creation of national committees to oversee fruit fly control activities, expanding the Action Plan to other countries in the region and forthcoming technical assistance activities were discussed.</p>
</div>
<h3><a href="#">Development of a comprehensive project document for the control of fruit fly in West Africa</a></h3>
<div>
<p>The World Bank and the STDF jointly commissioned COLEACP to conduct a follow-up exercise to complete the EC study with a proposed budget and institutional set-up, in order to outline a comprehensive project document for the control of fruit fly in West Africa. The work by COLEACP and its team of consultants was conducted in June and July 2009 in close collaboration with ECOWAS.</p>
<p>See the <a href="#">Background note</a></p>
</div>
<h3><a href="#">STDF – ECOWAS Donor Workshop on Fruit Fly Control in West Africa – September 2009</a></h3>
<div>
<p>On 29-30 September 2009, the STDF and the ECOWAS Commission, in collaboration with the Government of Mali co-organized a two-day workshop to sensitize stakeholders on a complementary study for the Regional Action Plan to control fruit fly in West Africa. The event gathered close to 100 participants from governments, private sector, research institutions, specialized agencies and development partners who emphasized the need for a coordinated response to control fruit fly in West Africa in line with the Paris Principles on Aid Effectiveness. The workshop adopted the "Bamako Declaration" (<a href="#">English</a>, <a href="#">French</a>) which outlines a common framework to implement the five-year Regional Action Plan which is costed at €25 million. The plan has the potential to become a generic operating framework that could be replicated in other African regions.</p>
<p>See the COLEACP Report (<a href="#">English</a>, <a href="#">French</a>) and its Executive Summary (<a href="#">English</a>, <a href="#">French</a>)</p>
<p><a href="#">Click here</a> to see the programme and presentations delivered</p>
<p>See the <a href="#">STDF Briefing Note No. 4</a> summarizing the main discussions and conclusions emerging from the seminar</p>
</div>
<h3><a href="#">Information letters, research papers and other documentation related to fruit fly</a></h3>
<div>
<table class="content-table"><tr class="first"><td>Fruit Fly Newsletters</td>
<td>
<p>The COLEACP Newsletter produced in collaboration with CIRAD is intended for all public and private operators concerned with the fruit fly issue in Africa. It has been published with the support of the French Cooperation in 2007/2008 and the STDF in 2009/2010.</p>
<p>Available in English at:  <a href="http://www.coleacp.org/en/page/12021-our-achievements">www.coleacp.org/en/page/12021-our-achievements</a></p>
<p>Available in French at:  <a href="http://www.coleacp.org/fr/page/12022-nos-realisations">www.coleacp.org/fr/page/12022-nos-realisations</a></p>
</td>
</tr><tr><td>Reports</td>
<td>
<p>EC Scoping study (<a href="#">English</a>, <a href="#">French</a>)</p>
<p><a href="#">ECOWAS workshop report.</a></p>
</td>
</tr><tr class="last"><td>Research studies</td>
<td>
<p><a href="#">Population dynamics and on-farm fruit fly integrated pest management in mango orchards in the natural area of Niayes in Senegal</a>, Mbaye Ndiaye, Elhadji Omar Dieng and Gilles Delhove</p>
<p><a href="#">Suivi des populations  des mouches des fruits et démonstration d’un dispositif de lutte intégrée dans des vergers de manguiers</a>, Mbaye Ndiaye et al.</p>
<p><a href="#">A Multi-Institutional Approach to Create Fruit Fly-Low Prevalence and Fly-Free Areas in Central America</a>, Jesus Reyes Flores et al., IAEA, 2007</p>
</td>
</tr></table></div>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-12 21:44:51 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Documents for the WTO SPS Committee',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c658ee7e-11c2-4406-8534-a0e31f870a74',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378926824,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bfb83c37-e7d0-4963-9532-3e3c68469d0d',
  'revision_uid' => 1,
  'body' => array(),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 20:13:44 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Developing country experts',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'bc46a22d-f4d3-45f5-ab56-23cd8cab1105',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378909059,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd04e6b0f-6e9d-47d7-bd88-08aba1a1f718',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="person clearfix">
   <img src="/sites/default/files/persons/Martha.jpg" alt="Martha Byanyima" class="image" />
   <div class="description">
     <h3>Martha Byanyima</h3>
     <p>Ms. Martha Byanyima is the Lead SPS Expert at the Common Market for East and Southern Africa (COMESA); a regional economic grouping of 19 African countries. She is a food technologist with a Master of Science (Msc) degree in food safety and quality management. She advises African Governments on harmonisation of SPS measures to facilitate intra regional trade and supports both the governments and the private sector to comply with SPS market requirements.</p>
  </div>
</div>

<div class="person clearfix">
  <img src="/sites/default/files/persons/default.jpg" alt="Delilah Cabb" class="image" />
  <div class="description">
     <h3>Delilah Cabb</h3>
     <p>Ms Delilah Cabb is the Coordinator of the SPS Enquiry Point in Belize. She holds a Bachelor of Science Degree in General Agriculture and a Master of Science Degree in Tropical Animal Science and Production; both from the University of the West Indies. She was formerly the Director of Quarantine & Inspection Services, in Belize and was one of the four Technical Directors who helped in establishing the Belize Agricultural Health Authority (BAHA). She has been involved in several biosafety projects and a recent decision was made to designate her as the Point of contact for unintentional transboundary movements and emergency measures for Belize under the Convention of Biological Diversity.</p>
  </div>
</div>

<div class="person clearfix">
  <img src="/sites/default/files/persons/Dave.jpg" alt="Davinio P. Catbagan" class="image" />
  <div class="description">
     <h3>Davinio P. Catbagan</h3>
     <p>Dr. Davinio P. Catbagan is currently the Philippines’ Department of Agriculture (DA) Assistant Secretary for Livestock. Under his watch and supervision are the 5 Livestock Bureaus and attached Agencies of the Department. He is currently in-charge of the country’s Animal Health Program and activities. He is a Veterinarian and a graduate of Doctor of Veterinary Medicine (DVM) degree from the University of the Philippines (UP) after taking up courses in Agriculture. He was the Chief of the International Airports and Seaports Veterinary Quarantine Services for 17 years and was the Director of the Bureau of Animal Industry (BAI) for 5 years prior to his current position. He is also the Philippines’ Delegate to the OIE and the country’s Chief Veterinary Officer.</p>
  </div>
</div>

<div class="person clearfix">
  <img src="/sites/default/files/persons/Guilherme.png" alt="Guilherme Antônio da Costa Júnior" class="image" />
  <div class="description">
     <h3>Guilherme Antônio da Costa Júnior</h3>
     <p>Mr Guilherme Antônio da Costa Júnior is the Agricultural Attaché in the in the Permanent Mission of Brazil to the WTO and other Economic Organizations in Geneva. He is a Veterinary Doctor graduated in the Rural Federal University of Pernambuco, Brazil and specialized in Food Quality Assurance at the KIFTC in Kanagawa, Japan. Having worked for 24 years in the area of food safety in Brazil and formally the Director of the Department of Sanitary and Phytosanitary Negotiations of the Brazilian Ministry of Agriculture, Livestock and Food Supply he also spent 15 years as a FAO and WHO consultant in projects related to SPS issues in different countries of the Americas and Africa.</p>
  </div>
</div>

<div class="person clearfix">
  <img src="/sites/default/files/persons/Nagat.jpg" alt="Nagat El Tayeb" class="image" />
  <div class="description">
     <h3>Nagat El Tayeb</h3>
     <p>Ms Nagat Mubarak El Tayeb is the former director of the phytosanitary services of Sudan. She holds a PhD in Plant Pathology. She has been working in the implementation of the IPPC/SPS Agreements at the national and regional levels. She has worked for the IPPC as a training consultant and participated in the implementation of seven TCP projects in African and Near East countries. She was a member of IPPC Standards Committee and is currently a member of the IPPC expert Working Group on Capacity Development.</p>
  </div>
</div>

<div class="person clearfix">
  <img src="/sites/default/files/persons/Sidney.jpg" alt="Sidney Suma" class="image" />
  <div class="description">
     <h3>Sidney Suma</h3>
     <p>Mr Sidney Suma is a plant pathologist by training with a Master of Agriculture degree from the University of Sydney, Australia and Bachelor of Science in Agriculture from the Papua New Guinea University of Technology. He started his career in Biosecurity and Trade Facilitation in 2000 with the National Agriculture Quarantine and Inspection Authority in Papua New Guinea. In 2002, he joined the Land Resources Division of the Secretariat of Pacific Community. He became the Team Leader of the Biosecurity and Trade Support Group within the SPC-LRD and the Executive Secretary of the Pacific Plant Protection Organisation (PPPO). He specialises in biosecurity, trade facilitation, capacity development and institutional strengthening, project management, IAS prevention and management and has vast experienced in SIDS.</p>
  </div>
</div>

',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div class="person clearfix">
   <img src="/sites/default/files/persons/Martha.jpg" alt="Martha Byanyima" class="image" /><div class="description">
<h3>Martha Byanyima</h3>
<p>Ms. Martha Byanyima is the Lead SPS Expert at the Common Market for East and Southern Africa (COMESA); a regional economic grouping of 19 African countries. She is a food technologist with a Master of Science (Msc) degree in food safety and quality management. She advises African Governments on harmonisation of SPS measures to facilitate intra regional trade and supports both the governments and the private sector to comply with SPS market requirements.</p>
</div>
</div>
<div class="person clearfix">
  <img src="/sites/default/files/persons/default.jpg" alt="Delilah Cabb" class="image" /><div class="description">
<h3>Delilah Cabb</h3>
<p>Ms Delilah Cabb is the Coordinator of the SPS Enquiry Point in Belize. She holds a Bachelor of Science Degree in General Agriculture and a Master of Science Degree in Tropical Animal Science and Production; both from the University of the West Indies. She was formerly the Director of Quarantine &amp; Inspection Services, in Belize and was one of the four Technical Directors who helped in establishing the Belize Agricultural Health Authority (BAHA). She has been involved in several biosafety projects and a recent decision was made to designate her as the Point of contact for unintentional transboundary movements and emergency measures for Belize under the Convention of Biological Diversity.</p>
</div>
</div>
<div class="person clearfix">
  <img src="/sites/default/files/persons/Dave.jpg" alt="Davinio P. Catbagan" class="image" /><div class="description">
<h3>Davinio P. Catbagan</h3>
<p>Dr. Davinio P. Catbagan is currently the Philippines’ Department of Agriculture (DA) Assistant Secretary for Livestock. Under his watch and supervision are the 5 Livestock Bureaus and attached Agencies of the Department. He is currently in-charge of the country’s Animal Health Program and activities. He is a Veterinarian and a graduate of Doctor of Veterinary Medicine (DVM) degree from the University of the Philippines (UP) after taking up courses in Agriculture. He was the Chief of the International Airports and Seaports Veterinary Quarantine Services for 17 years and was the Director of the Bureau of Animal Industry (BAI) for 5 years prior to his current position. He is also the Philippines’ Delegate to the OIE and the country’s Chief Veterinary Officer.</p>
</div>
</div>
<div class="person clearfix">
  <img src="/sites/default/files/persons/Guilherme.png" alt="Guilherme Antônio da Costa Júnior" class="image" /><div class="description">
<h3>Guilherme Antônio da Costa Júnior</h3>
<p>Mr Guilherme Antônio da Costa Júnior is the Agricultural Attaché in the in the Permanent Mission of Brazil to the WTO and other Economic Organizations in Geneva. He is a Veterinary Doctor graduated in the Rural Federal University of Pernambuco, Brazil and specialized in Food Quality Assurance at the KIFTC in Kanagawa, Japan. Having worked for 24 years in the area of food safety in Brazil and formally the Director of the Department of Sanitary and Phytosanitary Negotiations of the Brazilian Ministry of Agriculture, Livestock and Food Supply he also spent 15 years as a FAO and WHO consultant in projects related to SPS issues in different countries of the Americas and Africa.</p>
</div>
</div>
<div class="person clearfix">
  <img src="/sites/default/files/persons/Nagat.jpg" alt="Nagat El Tayeb" class="image" /><div class="description">
<h3>Nagat El Tayeb</h3>
<p>Ms Nagat Mubarak El Tayeb is the former director of the phytosanitary services of Sudan. She holds a PhD in Plant Pathology. She has been working in the implementation of the IPPC/SPS Agreements at the national and regional levels. She has worked for the IPPC as a training consultant and participated in the implementation of seven TCP projects in African and Near East countries. She was a member of IPPC Standards Committee and is currently a member of the IPPC expert Working Group on Capacity Development.</p>
</div>
</div>
<div class="person clearfix">
  <img src="/sites/default/files/persons/Sidney.jpg" alt="Sidney Suma" class="image" /><div class="description">
<h3>Sidney Suma</h3>
<p>Mr Sidney Suma is a plant pathologist by training with a Master of Agriculture degree from the University of Sydney, Australia and Bachelor of Science in Agriculture from the Papua New Guinea University of Technology. He started his career in Biosecurity and Trade Facilitation in 2000 with the National Agriculture Quarantine and Inspection Authority in Papua New Guinea. In 2002, he joined the Land Resources Division of the Secretariat of Pacific Community. He became the Team Leader of the Biosecurity and Trade Support Group within the SPC-LRD and the Executive Secretary of the Pacific Plant Protection Organisation (PPPO). He specialises in biosecurity, trade facilitation, capacity development and institutional strengthening, project management, IAS prevention and management and has vast experienced in SIDS.</p>
</div>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 15:17:39 +0100',
);
  $nodes[] = array(
  'uid' => 25,
  'title' => 'Bermondsey',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '534cd9c7-78fd-4a35-a2a2-e2e84ce72666',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378392642,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd0d5550e-1b6b-44aa-9b19-4de456115a7c',
  'revision_uid' => 25,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bermondsey<span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English" title="Help:IPA for English">/</a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="Help:IPA for English"><span style="border-bottom: 1px dotted;">ˈ</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="Help:IPA for English"><span style="border-bottom: 1px dotted;">b</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="Help:IPA for English"><span style="border-bottom: 1px dotted;">ɜr</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="Help:IPA for English"><span style="border-bottom: 1px dotted;">m</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="Help:IPA for English"><span style="border-bottom: 1px dotted;">ə</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="Help:IPA for English"><span style="border-bottom: 1px dotted;">n</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="Help:IPA for English"><span style="border-bottom: 1px dotted;">d</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="Help:IPA for English"><span style="border-bottom: 1px dotted;">z</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="Help:IPA for English"><span style="border-bottom: 1px dotted;">iː</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English" title="Help:IPA for English">/</a></span></span> is a district in south <a href="http://en.wikipedia.org/wiki/London" title="London">London</a>, and a part of the <a href="http://en.wikipedia.org/wiki/London_Borough_of_Southwark" title="London Borough of Southwark">London Borough of Southwark</a>. To the west of Bermondsey lies <a href="http://en.wikipedia.org/wiki/Southwark" title="Southwark">Southwark</a>, to the east <a href="http://en.wikipedia.org/wiki/Rotherhithe" title="Rotherhithe">Rotherhithe</a>, and to the south, <a href="http://en.wikipedia.org/wiki/Walworth,_London" title="Walworth, London">Walworth</a> and <a href="http://en.wikipedia.org/wiki/Peckham" title="Peckham">Peckham</a>. To the north is the <a href="http://en.wikipedia.org/wiki/River_Thames" title="River Thames">River Thames</a>.</p><div><div>Contents</div><ul><li><a href="http://en.wikipedia.org/wiki/Bermondsey#History"><span>1</span> <span>History</span></a><ul><li><a href="http://en.wikipedia.org/wiki/Bermondsey#Toponomy"><span>1.1</span> <span>Toponomy</span></a></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#Anglo-Saxon_and_Norman_period"><span>1.2</span> <span>Anglo-Saxon and Norman period</span></a></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#14th_century"><span>1.3</span> <span>14th century</span></a></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#17th_century"><span>1.4</span> <span>17th century</span></a></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#18th_century"><span>1.5</span> <span>18th century</span></a></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#19th_century"><span>1.6</span> <span>19th century</span></a></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#20th_century"><span>1.7</span> <span>20th century</span></a></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#Local_government"><span>1.8</span> <span>Local government</span></a></li></ul></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#Governance"><span>2</span> <span>Governance</span></a></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#Sport"><span>3</span> <span>Sport</span></a></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#Geography"><span>4</span> <span>Geography</span></a><ul><li><a href="http://en.wikipedia.org/wiki/Bermondsey#Places_of_interest"><span>4.1</span> <span>Places of interest</span></a></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#Nearest_places"><span>4.2</span> <span>Nearest places</span></a></li></ul></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#Transport"><span>5</span> <span>Transport</span></a><ul><li><a href="http://en.wikipedia.org/wiki/Bermondsey#Nearest_stations"><span>5.1</span> <span>Nearest stations</span></a></li></ul></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#See_also"><span>6</span> <span>See also</span></a></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#References"><span>7</span> <span>References</span></a></li><li><a href="http://en.wikipedia.org/wiki/Bermondsey#External_links"><span>8</span> <span>External links</span></a></li></ul></div><p><span>History</span> <span>Toponomy</span></p><p>Bermondsey may be understood to mean \'Beornmund\'s island\'; but, while "Beornmund" represents an <a href="http://en.wikipedia.org/wiki/Old_English_language" title="Old English language">Old English</a> personal name, identifying an individual once associated with the place, the element "-ey" represents Old English "eg", for "island", "piece of firm land in a fen", or simply a "place by a stream or river". Thus Bermondsey need not have been an island as such in the Anglo-Saxon period, and is as likely to have been a higher, drier spot in an otherwise marshy area.<sup><a href="http://en.wikipedia.org/wiki/Bermondsey#cite_note-1"><span>[</span>1<span>]</span></a></sup> Though Bermondsey\'s earliest written appearance is in the <a href="http://en.wikipedia.org/wiki/Domesday_Book" title="Domesday Book">Domesday Book</a> of 1086, it also appears in a source which, though surviving only in a copy written at <a href="http://en.wikipedia.org/wiki/Peterborough_Cathedral" title="Peterborough Cathedral">Peterborough Abbey</a> in the 12th century, claiming "ancient rights" unproven purporting to be a transcripton of a letter of <a href="http://en.wikipedia.org/wiki/Pope_Constantine" title="Pope Constantine">Pope Constantine</a> (708-715), in which he grants privileges to a monastery at Vermundesei, then in the hands of the abbot of <a href="http://en.wikipedia.org/wiki/Medeshamstede" title="Medeshamstede">Medeshamstede</a>, as Peterborough was known at the time.<sup><a href="http://en.wikipedia.org/wiki/Bermondsey#cite_note-2"><span>[</span>2<span>]</span></a></sup></p><p><span>Anglo-Saxon and Norman period</span></p><div><div><a href="http://en.wikipedia.org/wiki/File:Joris_Hoefnagel_Fete_at_Bermondsey_c_1569.png"></a><div><div></div>A Fête at Bermondsey by <a href="http://en.wikipedia.org/wiki/Joris_Hoefnagel" title="Joris Hoefnagel">Joris Hoefnagel</a> c. 1569, with the <a href="http://en.wikipedia.org/wiki/Tower_of_London" title="Tower of London">Tower of London</a> in the distance.</div></div></div><p>Bermondsey appears in Domesday Book as Bermundesy and Bermundesye. It was then held by <a href="http://en.wikipedia.org/wiki/William_the_Conqueror" title="William the Conqueror">King William</a>, though a small part was in the hands of <a href="http://en.wikipedia.org/wiki/Robert,_Count_of_Mortain" title="Robert, Count of Mortain">Robert, Count of Mortain</a>, the king\'s half brother, and younger brother of <a href="http://en.wikipedia.org/wiki/Odo_of_Bayeux" title="Odo of Bayeux">Odo of Bayeux</a>, then earl of Kent. Its Domesday assets were recorded as including 13 <a href="http://en.wikipedia.org/wiki/Hide_%28unit%29" title="Hide (unit)">hides</a>, \'a new and handsome church\', 5 <a href="http://en.wikipedia.org/wiki/Plough" title="Plough">ploughs</a>, 20 acres (81,000&nbsp;m<sup>2</sup>) of <a href="http://en.wikipedia.org/wiki/Meadow" title="Meadow">meadow</a>, and <a href="http://en.wikipedia.org/wiki/Woodland" title="Woodland">woodland</a> for 5 pigs. It rendered £15 in total. It also included interests in London, in respect of which 13 <a href="http://en.wikipedia.org/wiki/Burgess_%28title%29" title="Burgess (title)">burgesses</a> paid <a href="http://en.wikipedia.org/wiki/%C2%A3sd" title="£sd">44d</a> (£0.18).<sup><a href="http://en.wikipedia.org/wiki/Bermondsey#cite_note-3"><span>[</span>3<span>]</span></a></sup></p><p>The church mentioned in Domesday Book was presumably the nascent <a href="http://en.wikipedia.org/wiki/Bermondsey_Abbey" title="Bermondsey Abbey">Bermondsey Abbey</a>, which was founded as a <a href="http://en.wikipedia.org/wiki/Cluny_Abbey" title="Cluny Abbey">Cluniac</a> <a href="http://en.wikipedia.org/wiki/Prior" title="Prior">priory</a> in 1082, and was dedicated to St Saviour. Monks from the abbey began the development of the area, cultivating the land and embanking the riverside. They turned an adjacent tidal inlet at the mouth of the <a href="http://en.wikipedia.org/wiki/River_Neckinger" title="River Neckinger">River Neckinger</a> into a dock, named <a href="http://en.wikipedia.org/wiki/St_Saviour%27s_Dock" title="St Saviour\'s Dock">St Saviour\'s Dock</a> after their abbey. But Bermondsey then was little more than a high street ribbon (the modern Bermondsey Street), leading from the southern bank of the Thames, at Tooley Street, up to the abbey close.</p><p>The <a href="http://en.wikipedia.org/wiki/Knights_Templar" title="Knights Templar">Knights Templar</a> also owned land here and gave their names to one of the most distinctive streets in London, <a href="http://en.wikipedia.org/wiki/Shad_Thames" title="Shad Thames">Shad Thames</a> (a corruption of "St John at Thames"). Other ecclesiastical properties stood nearby at Tooley (a corruption of "<a href="http://en.wikipedia.org/wiki/Saint_Olaf" title="Saint Olaf">St Olave\'s</a>") Street, located in the <a href="http://en.wikipedia.org/wiki/Archbishop_of_Canterbury" title="Archbishop of Canterbury">Archbishop of Canterbury</a>\'s manor of Southwark, where wealthy citizens and clerics had their houses, including the priors of <a href="http://en.wikipedia.org/wiki/Lewes_Priory" title="Lewes Priory">Lewes</a> and <a href="http://en.wikipedia.org/wiki/St_Augustine%27s_Abbey" title="St Augustine\'s Abbey">St Augustine\'s</a>, Canterbury, and the abbot of <a href="http://en.wikipedia.org/wiki/Battle_Abbey" title="Battle Abbey">Battle</a>.</p>',
        'summary' => '',
        'format' => 'wysiwyg_filter',
        'safe_value' => '<p>Bermondsey<span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English" title="IPA for English" rel="nofollow">/</a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="IPA for English" rel="nofollow"><span>ˈ</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="IPA for English" rel="nofollow"><span>b</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="IPA for English" rel="nofollow"><span>ɜr</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="IPA for English" rel="nofollow"><span>m</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="IPA for English" rel="nofollow"><span>ə</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="IPA for English" rel="nofollow"><span>n</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="IPA for English" rel="nofollow"><span>d</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="IPA for English" rel="nofollow"><span>z</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English#Key" title="IPA for English" rel="nofollow"><span>iː</span></a></span><span><a href="http://en.wikipedia.org/wiki/Help:IPA_for_English" title="IPA for English" rel="nofollow">/</a></span></span> is a district in south <a href="http://en.wikipedia.org/wiki/London" title="London" rel="nofollow">London</a>, and a part of the <a href="http://en.wikipedia.org/wiki/London_Borough_of_Southwark" title="London Borough of Southwark" rel="nofollow">London Borough of Southwark</a>. To the west of Bermondsey lies <a href="http://en.wikipedia.org/wiki/Southwark" title="Southwark" rel="nofollow">Southwark</a>, to the east <a href="http://en.wikipedia.org/wiki/Rotherhithe" title="Rotherhithe" rel="nofollow">Rotherhithe</a>, and to the south, <a href="http://en.wikipedia.org/wiki/Walworth,_London" title="Walworth, London" rel="nofollow">Walworth</a> and <a href="http://en.wikipedia.org/wiki/Peckham" title="Peckham" rel="nofollow">Peckham</a>. To the north is the <a href="http://en.wikipedia.org/wiki/River_Thames" title="River Thames" rel="nofollow">River Thames</a>.</p>
<div>
<div>Contents</div>
<ul>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#History" rel="nofollow"><span>1</span> <span>History</span></a>
<ul>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#Toponomy" rel="nofollow"><span>1.1</span> <span>Toponomy</span></a></li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#Anglo-Saxon_and_Norman_period" rel="nofollow"><span>1.2</span> <span>Anglo-Saxon and Norman period</span></a></li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#14th_century" rel="nofollow"><span>1.3</span> <span>14th century</span></a></li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#17th_century" rel="nofollow"><span>1.4</span> <span>17th century</span></a></li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#18th_century" rel="nofollow"><span>1.5</span> <span>18th century</span></a></li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#19th_century" rel="nofollow"><span>1.6</span> <span>19th century</span></a></li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#20th_century" rel="nofollow"><span>1.7</span> <span>20th century</span></a></li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#Local_government" rel="nofollow"><span>1.8</span> <span>Local government</span></a></li>
</ul>
</li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#Governance" rel="nofollow"><span>2</span> <span>Governance</span></a></li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#Sport" rel="nofollow"><span>3</span> <span>Sport</span></a></li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#Geography" rel="nofollow"><span>4</span> <span>Geography</span></a>
<ul>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#Places_of_interest" rel="nofollow"><span>4.1</span> <span>Places of interest</span></a></li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#Nearest_places" rel="nofollow"><span>4.2</span> <span>Nearest places</span></a></li>
</ul>
</li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#Transport" rel="nofollow"><span>5</span> <span>Transport</span></a>
<ul>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#Nearest_stations" rel="nofollow"><span>5.1</span> <span>Nearest stations</span></a></li>
</ul>
</li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#See_also" rel="nofollow"><span>6</span> <span>See also</span></a></li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#References" rel="nofollow"><span>7</span> <span>References</span></a></li>
<li><a href="http://en.wikipedia.org/wiki/Bermondsey#External_links" rel="nofollow"><span>8</span> <span>External links</span></a></li>
</ul>
</div>
<p><span>History</span> <span>Toponomy</span></p>
<p>Bermondsey may be understood to mean \'Beornmund\'s island\'; but, while "Beornmund" represents an <a href="http://en.wikipedia.org/wiki/Old_English_language" title="Old English language" rel="nofollow">Old English</a> personal name, identifying an individual once associated with the place, the element "-ey" represents Old English "eg", for "island", "piece of firm land in a fen", or simply a "place by a stream or river". Thus Bermondsey need not have been an island as such in the Anglo-Saxon period, and is as likely to have been a higher, drier spot in an otherwise marshy area.<sup><a href="http://en.wikipedia.org/wiki/Bermondsey#cite_note-1" rel="nofollow"><span>[</span>1<span>]</span></a></sup> Though Bermondsey\'s earliest written appearance is in the <a href="http://en.wikipedia.org/wiki/Domesday_Book" title="Domesday Book" rel="nofollow">Domesday Book</a> of 1086, it also appears in a source which, though surviving only in a copy written at <a href="http://en.wikipedia.org/wiki/Peterborough_Cathedral" title="Peterborough Cathedral" rel="nofollow">Peterborough Abbey</a> in the 12th century, claiming "ancient rights" unproven purporting to be a transcripton of a letter of <a href="http://en.wikipedia.org/wiki/Pope_Constantine" title="Pope Constantine" rel="nofollow">Pope Constantine</a> (708-715), in which he grants privileges to a monastery at Vermundesei, then in the hands of the abbot of <a href="http://en.wikipedia.org/wiki/Medeshamstede" title="Medeshamstede" rel="nofollow">Medeshamstede</a>, as Peterborough was known at the time.<sup><a href="http://en.wikipedia.org/wiki/Bermondsey#cite_note-2" rel="nofollow"><span>[</span>2<span>]</span></a></sup></p>
<p><span>Anglo-Saxon and Norman period</span></p>
<div>
<div><a href="http://en.wikipedia.org/wiki/File:Joris_Hoefnagel_Fete_at_Bermondsey_c_1569.png" rel="nofollow"></a>
<div>
<div></div>
<p>A Fête at Bermondsey by <a href="http://en.wikipedia.org/wiki/Joris_Hoefnagel" title="Joris Hoefnagel" rel="nofollow">Joris Hoefnagel</a> c. 1569, with the <a href="http://en.wikipedia.org/wiki/Tower_of_London" title="Tower of London" rel="nofollow">Tower of London</a> in the distance.</div>
</div>
</div>
<p>Bermondsey appears in Domesday Book as Bermundesy and Bermundesye. It was then held by <a href="http://en.wikipedia.org/wiki/William_the_Conqueror" title="William the Conqueror" rel="nofollow">King William</a>, though a small part was in the hands of <a href="http://en.wikipedia.org/wiki/Robert,_Count_of_Mortain" title="Robert, Count of Mortain" rel="nofollow">Robert, Count of Mortain</a>, the king\'s half brother, and younger brother of <a href="http://en.wikipedia.org/wiki/Odo_of_Bayeux" title="Odo of Bayeux" rel="nofollow">Odo of Bayeux</a>, then earl of Kent. Its Domesday assets were recorded as including 13 <a href="http://en.wikipedia.org/wiki/Hide_%28unit%29" title="Hide (unit)" rel="nofollow">hides</a>, \'a new and handsome church\', 5 <a href="http://en.wikipedia.org/wiki/Plough" title="Plough" rel="nofollow">ploughs</a>, 20 acres (81,000&nbsp;m<sup>2</sup>) of <a href="http://en.wikipedia.org/wiki/Meadow" title="Meadow" rel="nofollow">meadow</a>, and <a href="http://en.wikipedia.org/wiki/Woodland" title="Woodland" rel="nofollow">woodland</a> for 5 pigs. It rendered £15 in total. It also included interests in London, in respect of which 13 <a href="http://en.wikipedia.org/wiki/Burgess_%28title%29" title="Burgess (title)" rel="nofollow">burgesses</a> paid <a href="http://en.wikipedia.org/wiki/%C2%A3sd" title="£sd" rel="nofollow">44d</a> (£0.18).<sup><a href="http://en.wikipedia.org/wiki/Bermondsey#cite_note-3" rel="nofollow"><span>[</span>3<span>]</span></a></sup></p>
<p>The church mentioned in Domesday Book was presumably the nascent <a href="http://en.wikipedia.org/wiki/Bermondsey_Abbey" title="Bermondsey Abbey" rel="nofollow">Bermondsey Abbey</a>, which was founded as a <a href="http://en.wikipedia.org/wiki/Cluny_Abbey" title="Cluny Abbey" rel="nofollow">Cluniac</a> <a href="http://en.wikipedia.org/wiki/Prior" title="Prior" rel="nofollow">priory</a> in 1082, and was dedicated to St Saviour. Monks from the abbey began the development of the area, cultivating the land and embanking the riverside. They turned an adjacent tidal inlet at the mouth of the <a href="http://en.wikipedia.org/wiki/River_Neckinger" title="River Neckinger" rel="nofollow">River Neckinger</a> into a dock, named <a href="http://en.wikipedia.org/wiki/St_Saviour%27s_Dock" title="St Saviour&#039;s Dock" rel="nofollow">St Saviour\'s Dock</a> after their abbey. But Bermondsey then was little more than a high street ribbon (the modern Bermondsey Street), leading from the southern bank of the Thames, at Tooley Street, up to the abbey close.</p>
<p>The <a href="http://en.wikipedia.org/wiki/Knights_Templar" title="Knights Templar" rel="nofollow">Knights Templar</a> also owned land here and gave their names to one of the most distinctive streets in London, <a href="http://en.wikipedia.org/wiki/Shad_Thames" title="Shad Thames" rel="nofollow">Shad Thames</a> (a corruption of "St John at Thames"). Other ecclesiastical properties stood nearby at Tooley (a corruption of "<a href="http://en.wikipedia.org/wiki/Saint_Olaf" title="Saint Olaf" rel="nofollow">St Olave\'s</a>") Street, located in the <a href="http://en.wikipedia.org/wiki/Archbishop_of_Canterbury" title="Archbishop of Canterbury" rel="nofollow">Archbishop of Canterbury</a>\'s manor of Southwark, where wealthy citizens and clerics had their houses, including the priors of <a href="http://en.wikipedia.org/wiki/Lewes_Priory" title="Lewes Priory" rel="nofollow">Lewes</a> and <a href="http://en.wikipedia.org/wiki/St_Augustine%27s_Abbey" title="St Augustine&#039;s Abbey" rel="nofollow">St Augustine\'s</a>, Canterbury, and the abbot of <a href="http://en.wikipedia.org/wiki/Battle_Abbey" title="Battle Abbey" rel="nofollow">Battle</a>.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(
    'und' => array(
      0 => array(
        'value' => 3,
        'revision_id' => 3,
      ),
      1 => array(
        'value' => 4,
        'revision_id' => 4,
      ),
    ),
  ),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 25,
  'comment_count' => 0,
  'name' => 'paul_wilkin_content_author',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-05 15:50:42 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'STDF at a glance',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'bdebeb6e-ca6d-4155-b122-0ad58233aa34',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378926949,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd30f1d39-33e7-4101-87a1-9c6f454030b1',
  'revision_uid' => 1,
  'body' => array(),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 20:15:49 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'STDF Publications',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '38040fda-ef7f-41a1-aa6b-4114dee2ccb5',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1379062987,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd90bf920-3284-40b2-9c4d-4bf33e17662d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication1.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">International Trade and Invasive Alien Species</a></h3>
<p>June 2013</p>
<p>This study reviews and analyses key concepts and principles relevant to Invasive Alien Species (IAS) and international trade in the context of the Convention on Biological Diversity (CBD) and the SPS Agreement, as well as in relation to the IPPC and the OIE. It also considers various initiatives to enhance capacities for managing the entry and spread of IAS (including plant pests and animal diseases), reviews common challenges and good practices, and makes a number of targeted recommendations.</p>
</div>
</div>

<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication2.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">Public-Private Partnerships to enhance SPS capacity: What can we learn from this collaborative approach?</a></h3>
<p>April 2012</p>
<p>This publication analyses the emergence, operation and performance of selected SPS-related partnerships between government agencies responsible for food safety, animal and plant health and/or trade and the private sector. It has been prepared to raise awareness about the potential value and role of PPPs in enhancing SPS capacity and to provide practical guidance to facilitate and promote PPPs for SPS capacity development.</p>
</div>
</div>


<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication3.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">National SPS Coordination Mechanisms: An African perspective</a></h3>
<p>January 2012</p>
<p>This study presents and analyses the findings of a survey carried out to examine the existence and functioning of national SPS coordination mechanisms in Africa. Its objective is to extract lessons learned and provide suggestions and guidance to support the further establishment and operation of these mechanisms in the future.</p>
</div>
</div>


<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication4.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">Use of Economic Analysis to Inform SPS-related Decision-Making</a></h3>
<p>November 2011</p>
<p>This report reviews experiences with the use of economic analysis to guide priority-setting for SPS capacity building in developing countries, highlights the challenges faced in using such methods and provides general guidance to decision-makers on which economic analysis approaches are best suited to particular decision scenarios.</p>
</div>
</div>


<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication5.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">Climate Change and Trade: The Link to Sanitary and Phytosanitary Standards</a></h3>
<p>September 2011</p>
<p>This paper  builds on discussions from the seminar on this topic organized jointly by the World Bank and the STDF in 2009 and it seeks to raise awareness about issues related to SPS risks and standards in the context of agri-food trade and climate change.</p>
</div>
</div>


<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication6.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">SPS-Related Capacity Evaluation Tools</a></h3>
<p>May 2011 - Second Edition</p>
<p>The publication resulted from the global-level STDF workshop on this topic in 2008 and provides information about capacity evaluation tools developed by international organizations for food safety, animal and plant health, as well as cross-sectoral tools and related methodologies. The publication is a useful reference for all those interested in evaluating capacity needs in the SPS area.</p>
</div>
</div>



<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication7.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">Regional SPS frameworks and strategies in Africa</a></h3>
<p>July 2010</p>
<p>This study includes a preliminary analysis of regional SPS policy frameworks and strategies in Africa, in light of the WTO SPS Agreement and the standard-setting activities of the Codex Alimentarius, the OIE and the IPPC, and explores the possibility of further actions in this area.</p>
</div>
</div>


',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication1.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">International Trade and Invasive Alien Species</a></h3>
<p>June 2013</p>
<p>This study reviews and analyses key concepts and principles relevant to Invasive Alien Species (IAS) and international trade in the context of the Convention on Biological Diversity (CBD) and the SPS Agreement, as well as in relation to the IPPC and the OIE. It also considers various initiatives to enhance capacities for managing the entry and spread of IAS (including plant pests and animal diseases), reviews common challenges and good practices, and makes a number of targeted recommendations.</p>
</div>
</div>
<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication2.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">Public-Private Partnerships to enhance SPS capacity: What can we learn from this collaborative approach?</a></h3>
<p>April 2012</p>
<p>This publication analyses the emergence, operation and performance of selected SPS-related partnerships between government agencies responsible for food safety, animal and plant health and/or trade and the private sector. It has been prepared to raise awareness about the potential value and role of PPPs in enhancing SPS capacity and to provide practical guidance to facilitate and promote PPPs for SPS capacity development.</p>
</div>
</div>
<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication3.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">National SPS Coordination Mechanisms: An African perspective</a></h3>
<p>January 2012</p>
<p>This study presents and analyses the findings of a survey carried out to examine the existence and functioning of national SPS coordination mechanisms in Africa. Its objective is to extract lessons learned and provide suggestions and guidance to support the further establishment and operation of these mechanisms in the future.</p>
</div>
</div>
<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication4.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">Use of Economic Analysis to Inform SPS-related Decision-Making</a></h3>
<p>November 2011</p>
<p>This report reviews experiences with the use of economic analysis to guide priority-setting for SPS capacity building in developing countries, highlights the challenges faced in using such methods and provides general guidance to decision-makers on which economic analysis approaches are best suited to particular decision scenarios.</p>
</div>
</div>
<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication5.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">Climate Change and Trade: The Link to Sanitary and Phytosanitary Standards</a></h3>
<p>September 2011</p>
<p>This paper  builds on discussions from the seminar on this topic organized jointly by the World Bank and the STDF in 2009 and it seeks to raise awareness about issues related to SPS risks and standards in the context of agri-food trade and climate change.</p>
</div>
</div>
<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication6.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">SPS-Related Capacity Evaluation Tools</a></h3>
<p>May 2011 - Second Edition</p>
<p>The publication resulted from the global-level STDF workshop on this topic in 2008 and provides information about capacity evaluation tools developed by international organizations for food safety, animal and plant health, as well as cross-sectoral tools and related methodologies. The publication is a useful reference for all those interested in evaluating capacity needs in the SPS area.</p>
</div>
</div>
<div class="publications clearfix">
<a href="#"><img src="/sites/default/files/publication7.jpg" alt="" /></a>
<div class="details">
<h3><a href="#">Regional SPS frameworks and strategies in Africa</a></h3>
<p>July 2010</p>
<p>This study includes a preliminary analysis of regional SPS policy frameworks and strategies in Africa, in light of the WTO SPS Agreement and the standard-setting activities of the Codex Alimentarius, the OIE and the IPPC, and explores the possibility of further actions in this area.</p>
</div>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-13 10:03:07 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'SPS and Trade Facilitation',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a6ea7b3c-b89b-4572-85da-40ffe5b8562f',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378932265,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd93a66aa-7594-42f5-95a0-9bf3dff51345',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The STDF intends to carry out work on the linkages and synergies between SPS and trade facilitation in 2012-13, in collaboration with the World Bank, the Inter-American Development Bank (IDB) and other interested regional development banks and organizations. The purpose of this work will be to enhance understanding among staff of SPS and customs authorities about the role and contribution of SPS agencies to trade facilitation, and to identify key needs, opportunities and good practices to enhance the effective engagement of SPS agencies in collaborative border management.</p>

<p>See the <a href="#">background note</a> on the planned work.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The STDF intends to carry out work on the linkages and synergies between SPS and trade facilitation in 2012-13, in collaboration with the World Bank, the Inter-American Development Bank (IDB) and other interested regional development banks and organizations. The purpose of this work will be to enhance understanding among staff of SPS and customs authorities about the role and contribution of SPS agencies to trade facilitation, and to identify key needs, opportunities and good practices to enhance the effective engagement of SPS agencies in collaborative border management.</p>
<p>See the <a href="#">background note</a> on the planned work.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 21:44:25 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Thematic Activities',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4cfe9a85-2db2-455d-9495-639ed4f41c4c',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378930236,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ddb1645d-c626-467b-b5db-ce60d2ae9f38',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The STDF organizes and implements coordination activities on a number of thematic topics in the SPS area:</p>

<ul>
<li><a href="#">Aid for Trade</a></li>
<li><a href="#">Invasive Alien Species</a></li>
<li><a href="#">Capacity evaluation tools</a></li>
<li><a href="#">Laboratory infrastructure</a></li>
<li><a href="#">Climate change</a></li>
<li><a href="#">PAN-SPSO Programme</a></li>
<li><a href="#">Economic analysis / MCDA</a></li>
<li><a href="#">SPS indicators</a></li>
<li><a href="#">Enhanced Integrated Framework</a></li>
<li><a href="#">Private standards</a></li>
<li><a href="#">Fruit fly</a></li>
<li><a href="#">Public-private partnerships</a></li>
<li><a href="#">Good practice</a></li>
<li><a href="#">Trade Facilitation</a></li>
</ul>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The STDF organizes and implements coordination activities on a number of thematic topics in the SPS area:</p>
<ul><li><a href="#">Aid for Trade</a></li>
<li><a href="#">Invasive Alien Species</a></li>
<li><a href="#">Capacity evaluation tools</a></li>
<li><a href="#">Laboratory infrastructure</a></li>
<li><a href="#">Climate change</a></li>
<li><a href="#">PAN-SPSO Programme</a></li>
<li><a href="#">Economic analysis / MCDA</a></li>
<li><a href="#">SPS indicators</a></li>
<li><a href="#">Enhanced Integrated Framework</a></li>
<li><a href="#">Private standards</a></li>
<li><a href="#">Fruit fly</a></li>
<li><a href="#">Public-private partnerships</a></li>
<li><a href="#">Good practice</a></li>
<li><a href="#">Trade Facilitation</a></li>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 21:10:36 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Enhanced Integrated Framework',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '46cfcb00-7577-42ed-8d7f-2fb1396d11b2',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1379019053,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dfa522ef-4c5b-4bb8-94af-115abd7cd9e2',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The <a href="">Enhanced Integrated Framework</a> (EIF) aims at enabling least developed countries (LDCs) to build and strengthen their trade capacities, better integrate trade in their national development strategies and use trade as a tool for growth and poverty reduction.</p>
 
<h3>STDF collaborates with the Enhanced Integrated Framework</h3>
 
<p>The STDF and the EIF work closely together to improve LDC\'s trade performance. The STDF aims to devote at least 40 per cent of project grant resources to LDCs and other Low Income Countries. Since its inception in 2002, the STDF has consistently met this target. Various projects have been developed and funded by the STDF in LDCs based on SPS needs identified in the EIF Diagnostic Trade Integration Studies (DTIS).</p>
 
<p>The STDF and the EIF work together at all the stages of the EIF process. The STDF provides expert advice on SPS technical matters, notably during preparation of, and updates to, DTISs. With Tier 2 of the EIF becoming operational, contacts are being established with EIF focal points and donor facilitators at the national level to explore EIF funding and co-financing opportunities for projects developed by the STDF to implement DTIS action matrices.</p>
 
<p>The STDF has provided specific inputs to the EIF such as:</p>

<div class="accordion">   
      <h3><a href="#">STDF – Overview of needs and assistance in eight least developed countries</a></h3>
      <div>
          <p>The STDF prepared a desk study (<a href="#">G/SPS/GEN/900</a>) on SPS needs and assistance of eight Least Developed Countries (LDCs), i.e. Benin, Cambodia, Lao PDR, Lesotho, Mozambique, Rwanda, Senegal and Yemen. The study was based on a review of existing needs assessments, notably the Diagnostic Trade Integration Studies (DTIS) and other publicly available information. The report complemented and strengthened UNIDO\'s broader programme proposals aimed at addressing the supply-side constraints of the eight LDCs and identified areas where future SPS technical cooperation activities with a positive trade effect might be focused. The final report was presented at the LDC Ministerial Conference on Aid for Trade on 19-20 November 2008 in Siem Reap, Cambodia, jointly organized by WTO and UNIDO.</p>
      </div>


      <h3><a href="#">STDF – EIF pilot training on project development</a></h3>
      <div>
          <p>Beneficiaries\' participation in project development is a crucial factor in enhancing ownership and in making technical assistance  more effective. In 2011, the EIF initiated the roll-out of pilot training for national-level stakeholders in selected LDCs to build their capacity on project identification, formulation and design. The STDF participated in two training workshops in Nepal, in March 2011, and in Central African Republic (CAR), in August 2011. Both countries identified SPS needs as a priority issue.</p>
           <p>Training activities were conducted with the assistance of the Centre for International Development and Training (CIDT) of the University of Wolverhampton. The programme provided the STDF with an opportunity to assist SPS stakeholders on the ground in preparing project proposals using "logical frameworks".</p>
           <p>A <a href="#">Practical Guide on Trade-related Project Identification, Formulation and Design</a> has been developed for the Enhanced Integrated Framework by the CIDT. </p>
      </div>
</div>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The <a href="">Enhanced Integrated Framework</a> (EIF) aims at enabling least developed countries (LDCs) to build and strengthen their trade capacities, better integrate trade in their national development strategies and use trade as a tool for growth and poverty reduction.</p>
<h3>STDF collaborates with the Enhanced Integrated Framework</h3>
<p>The STDF and the EIF work closely together to improve LDC\'s trade performance. The STDF aims to devote at least 40 per cent of project grant resources to LDCs and other Low Income Countries. Since its inception in 2002, the STDF has consistently met this target. Various projects have been developed and funded by the STDF in LDCs based on SPS needs identified in the EIF Diagnostic Trade Integration Studies (DTIS).</p>
<p>The STDF and the EIF work together at all the stages of the EIF process. The STDF provides expert advice on SPS technical matters, notably during preparation of, and updates to, DTISs. With Tier 2 of the EIF becoming operational, contacts are being established with EIF focal points and donor facilitators at the national level to explore EIF funding and co-financing opportunities for projects developed by the STDF to implement DTIS action matrices.</p>
<p>The STDF has provided specific inputs to the EIF such as:</p>
<div class="accordion">
<h3><a href="#">STDF – Overview of needs and assistance in eight least developed countries</a></h3>
<div>
<p>The STDF prepared a desk study (<a href="#">G/SPS/GEN/900</a>) on SPS needs and assistance of eight Least Developed Countries (LDCs), i.e. Benin, Cambodia, Lao PDR, Lesotho, Mozambique, Rwanda, Senegal and Yemen. The study was based on a review of existing needs assessments, notably the Diagnostic Trade Integration Studies (DTIS) and other publicly available information. The report complemented and strengthened UNIDO\'s broader programme proposals aimed at addressing the supply-side constraints of the eight LDCs and identified areas where future SPS technical cooperation activities with a positive trade effect might be focused. The final report was presented at the LDC Ministerial Conference on Aid for Trade on 19-20 November 2008 in Siem Reap, Cambodia, jointly organized by WTO and UNIDO.</p>
</div>
<h3><a href="#">STDF – EIF pilot training on project development</a></h3>
<div>
<p>Beneficiaries\' participation in project development is a crucial factor in enhancing ownership and in making technical assistance  more effective. In 2011, the EIF initiated the roll-out of pilot training for national-level stakeholders in selected LDCs to build their capacity on project identification, formulation and design. The STDF participated in two training workshops in Nepal, in March 2011, and in Central African Republic (CAR), in August 2011. Both countries identified SPS needs as a priority issue.</p>
<p>Training activities were conducted with the assistance of the Centre for International Development and Training (CIDT) of the University of Wolverhampton. The programme provided the STDF with an opportunity to assist SPS stakeholders on the ground in preparing project proposals using "logical frameworks".</p>
<p>A <a href="#">Practical Guide on Trade-related Project Identification, Formulation and Design</a> has been developed for the Enhanced Integrated Framework by the CIDT. </p>
</div>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-12 21:50:53 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Private standards',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '17a872d2-87d9-40d7-91ef-9fb84a88b1c5',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1379018856,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e2e4ce71-57a6-428e-ac9d-033791c7156e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The STDF organized an information session on private standards on 26 June 2008. The aim of this STDF information session was threefold:</p>
<ul>
<li>to update the SPS Committee on recent developments in this area;</li>
<li>to examine the options for facilitating the compliance of developing countries with these schemes;</li>
<li>to learn more about ongoing donor initiatives in this area.</li>
</ul>

<p>The information session was organized as part of STDF\'s coordination mandate in the area of SPS-related technical cooperation. Through this information session, it was hoped that a better practical understanding of strategies for compliance would emerge, along with a clearer picture of who is doing what in terms of technical cooperation activities in this area.</p>
 
<p>More information on the session is available on <a href="http://www.wto.org/english/tratop_e/sps_e/private_standards_june08_e/private_standards_june08_e.htm">WTO SPS Gateway</a>.</p>
 
<p>In December 2008, the STDF Secretariat prepared a document (<a href="#">G/SPS/GEN/891</a>) which lists studies or organizations that may assist countries in determining the effects of SPS-related private standards on trade and development.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The STDF organized an information session on private standards on 26 June 2008. The aim of this STDF information session was threefold:</p>
<ul><li>to update the SPS Committee on recent developments in this area;</li>
<li>to examine the options for facilitating the compliance of developing countries with these schemes;</li>
<li>to learn more about ongoing donor initiatives in this area.</li>
</ul><p>The information session was organized as part of STDF\'s coordination mandate in the area of SPS-related technical cooperation. Through this information session, it was hoped that a better practical understanding of strategies for compliance would emerge, along with a clearer picture of who is doing what in terms of technical cooperation activities in this area.</p>
<p>More information on the session is available on <a href="http://www.wto.org/english/tratop_e/sps_e/private_standards_june08_e/private_standards_june08_e.htm">WTO SPS Gateway</a>.</p>
<p>In December 2008, the STDF Secretariat prepared a document (<a href="#">G/SPS/GEN/891</a>) which lists studies or organizations that may assist countries in determining the effects of SPS-related private standards on trade and development.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-12 21:47:36 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Partners',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '60bc73ba-9c1d-40c0-aabe-231dd8b10ef1',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378906239,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f2fad6fe-d8c8-46f0-908d-7a508bef01a4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>Food and Agriculture Organization of the United Nations (FAO)</h3>
<p>The FAO, the lead agency for agriculture, forestry, fisheries and rural development, was founded in 1945 and is currently comprised of 191 member countries plus one member organization – the European Community. Its mandate is to raise levels of nutrition, improve agricultural productivity, better the lives of rural populations and contribute to the growth of the world economy. FAO mobilizes and manages millions of dollars provided by industrialized countries, development banks and other sources to make sure that thousands of field projects achieve their goals. FAO provides the technical know-how and in a few cases is a limited source of funds.</p>
<h3>World Organisation for Animal Health (OIE)</h3>
<p>The OIE is an intergovernmental organization created by the International Agreement of 25 January 1924, signed by 28 countries, and at present with 172 member countries. Each member country undertakes to report to the OIE the animal diseases that it detects on its territory. The OIE then disseminates the information to other countries, which can take the necessary preventive action. Using its network of internationally recognized scientists, the OIE also collects and analyzes the latest scientific information on animal disease control. The OIE provides technical support to member countries requesting assistance with animal disease control and eradication operations, particularly developing countries.</p>
<h3>World Bank</h3>
<p>The World Bank is a vital source of financial and technical assistance to developing countries around the world. It is made up of two unique development institutions owned by 185 member countries – the International Bank for Reconstruction and Development (IBRD) and the International Development Association (IDA). Each organization plays a different but supportive role in the World Bank\'s mission of global poverty reduction and the improvement of living standards. Together they provide low-interest loans, interest-free credit, and grants to developing countries.</p>
<h3>World Health Organization (WHO)</h3>
<p>The WHO, the United Nations specialized agency for health, was established in 1948 and is currently governed by 193 member States who serve on the World Health Assembly. WHO\'s objective, as set out in its Constitution, is the attainment by all peoples of the highest possible level of health – defined in WHO\'s Constitution as a state of complete physical, mental and social well-being and not merely the absence of disease or infirmity.</p>
<h3>World Trade Organization (WTO)</h3>
<p>The WTO, established in 1995 and currently comprised of 157 members, is the only global international organization dealing with the rules of trade between nations. At its heart are the WTO agreements, negotiated and signed by the bulk of the world’s trading nations and ratified in their parliaments, which provide the legal ground-rules for international commerce, guaranteeing member countries important trade rights. The main functions include providing a forum for trade negotiations, handling trade disputes, monitoring national trade policies, technical assistance and training for developing countries, and cooperation with other international organizations. The WTO administers the STDF Trust Fund and provides the Secretariat for the Facility.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h3>Food and Agriculture Organization of the United Nations (FAO)</h3>
<p>The FAO, the lead agency for agriculture, forestry, fisheries and rural development, was founded in 1945 and is currently comprised of 191 member countries plus one member organization – the European Community. Its mandate is to raise levels of nutrition, improve agricultural productivity, better the lives of rural populations and contribute to the growth of the world economy. FAO mobilizes and manages millions of dollars provided by industrialized countries, development banks and other sources to make sure that thousands of field projects achieve their goals. FAO provides the technical know-how and in a few cases is a limited source of funds.</p>
<h3>World Organisation for Animal Health (OIE)</h3>
<p>The OIE is an intergovernmental organization created by the International Agreement of 25 January 1924, signed by 28 countries, and at present with 172 member countries. Each member country undertakes to report to the OIE the animal diseases that it detects on its territory. The OIE then disseminates the information to other countries, which can take the necessary preventive action. Using its network of internationally recognized scientists, the OIE also collects and analyzes the latest scientific information on animal disease control. The OIE provides technical support to member countries requesting assistance with animal disease control and eradication operations, particularly developing countries.</p>
<h3>World Bank</h3>
<p>The World Bank is a vital source of financial and technical assistance to developing countries around the world. It is made up of two unique development institutions owned by 185 member countries – the International Bank for Reconstruction and Development (IBRD) and the International Development Association (IDA). Each organization plays a different but supportive role in the World Bank\'s mission of global poverty reduction and the improvement of living standards. Together they provide low-interest loans, interest-free credit, and grants to developing countries.</p>
<h3>World Health Organization (WHO)</h3>
<p>The WHO, the United Nations specialized agency for health, was established in 1948 and is currently governed by 193 member States who serve on the World Health Assembly. WHO\'s objective, as set out in its Constitution, is the attainment by all peoples of the highest possible level of health – defined in WHO\'s Constitution as a state of complete physical, mental and social well-being and not merely the absence of disease or infirmity.</p>
<h3>World Trade Organization (WTO)</h3>
<p>The WTO, established in 1995 and currently comprised of 157 members, is the only global international organization dealing with the rules of trade between nations. At its heart are the WTO agreements, negotiated and signed by the bulk of the world’s trading nations and ratified in their parliaments, which provide the legal ground-rules for international commerce, guaranteeing member countries important trade rights. The main functions include providing a forum for trade negotiations, handling trade disputes, monitoring national trade policies, technical assistance and training for developing countries, and cooperation with other international organizations. The WTO administers the STDF Trust Fund and provides the Secretariat for the Facility.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 14:30:39 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Laboratory infrastructure',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cd06cd2d-8bb9-4f09-af33-de4601d3fe62',
  'type' => 'general_content',
  'language' => 'en',
  'created' => 1378932166,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fa3b5572-6ba5-4550-b7ff-778842d5f420',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Hosted by the STDF, on 15-17 November 2007, UNIDO and the World Bank held a workshop to examine issues related to investment in SPS laboratory infrastructure. The immediate purpose of the workshop was to provide input for the finalization of a guide, jointly developed by the World Bank and UNIDO, to assist in assessing and making investment decisions in SPS laboratory infrastructure.</p>

<p>The meeting addressed several key topics with respect to the role of laboratories providing food safety and agricultural health services, notably:</p>
<ul>
<li>The core functions of laboratories;</li>
<li>The optimal balance between the public and private provision of laboratory services and the appropriate division of labour between the two;</li>
<li>The economics of building new laboratory capacity versus the re-organization of existing services and how to ensure the sustainability of both;</li>
<li>The effect of the rise of private standards schemes on the demand for, and organization of, laboratory services in developing countries; and</li>
<li>Capacity-building challenges associated with diagnostic services.</li>
</ul>

<p>For more information, see the document <a href="#">G/SPS/GEN/823</a></p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Hosted by the STDF, on 15-17 November 2007, UNIDO and the World Bank held a workshop to examine issues related to investment in SPS laboratory infrastructure. The immediate purpose of the workshop was to provide input for the finalization of a guide, jointly developed by the World Bank and UNIDO, to assist in assessing and making investment decisions in SPS laboratory infrastructure.</p>
<p>The meeting addressed several key topics with respect to the role of laboratories providing food safety and agricultural health services, notably:</p>
<ul><li>The core functions of laboratories;</li>
<li>The optimal balance between the public and private provision of laboratory services and the appropriate division of labour between the two;</li>
<li>The economics of building new laboratory capacity versus the re-organization of existing services and how to ensure the sustainability of both;</li>
<li>The effect of the rise of private standards schemes on the demand for, and organization of, laboratory services in developing countries; and</li>
<li>Capacity-building challenges associated with diagnostic services.</li>
</ul><p>For more information, see the document <a href="#">G/SPS/GEN/823</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_file' => array(),
  'field_slideshow' => array(),
  'field_link' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-11 21:42:46 +0100',
);
  return $nodes;
}
