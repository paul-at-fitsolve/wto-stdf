(function($) {

	Drupal.behaviors.stdfcustom = {
		attach : function(context, settings) {

			// Add ECMA262-5 Array methods if not supported natively
			//
			if (!('indexOf' in Array.prototype)) {
				Array.prototype.indexOf = function(find, i /* opt */) {
					if (i === undefined)
						i = 0;
					if (i < 0)
						i += this.length;
					if (i < 0)
						i = 0;
					for ( var n = this.length; i < n; i++)
						if (i in this && this[i] === find)
							return i;
					return -1;
				};
			}

			// Stop top menu items from having active links.
			$(".menuparent > a").attr('href', 'javascript:void(0)');
		

			//This code adds a class to colour the status field value for the project table.
			$('td.views-field-field-status').each(function(index) {	
			  $(this).addClass($(this).text().toLowerCase());
			});	

			// Hide search tabs
			if (document.URL.indexOf('search') != -1) {
				$(".tabs").hide();
			}

			if ($('#ajax-response').length) {
				setTimeout(function() {
					$('#block-mailchimp-lists-stdf-mail-list').dialog('close');
				}, 2000 // milliseconds delay
				);
			}

			// This code adds a class to colour the status field value for the
			// project table.
			$('td.views-field-field-status').each(function(index) {
				$(this).addClass($(this).text().toLowerCase());
			});

			// Display mailchimp form in jQuery dialog.

			$("#block-mailchimp-lists-stdf-mail-list").dialog({
				autoOpen : false,
				dialogClass : 'dialogFixed',
				title : Drupal.t("Signup For Newsletter"),
				zindex : 1000,
				width : 600,
				modal : true,
				// buttons:{text:"Close",click:function(){$(this).dialog("close");}},
				position : {
					my : "center top",
					at : "center top",
					of : "body"
				},

				show : {
					effect : "fade",
					duration : 1000
				},
				hide : {
					effect : "fade",
					duration : 1000
				}
			});

			// Open the mailchimp form when the button is clicked..
			$("#signup_button").click(function() {
				$("#block-mailchimp-lists-stdf-mail-list").dialog('open');
				return false;
			});

			// Process all the error messages on the mailchimp form..

			$(
					'.form-item-mailchimp-lists-mailchimp-stdf-mail-list-mergevars-FNAME')
					.prepend('<div id="fname_error"></div>');
			$(
					'.form-item-mailchimp-lists-mailchimp-stdf-mail-list-mergevars-LNAME')
					.prepend('<div id="lname_error"></div>');
			$(
					'.form-item-mailchimp-lists-mailchimp-stdf-mail-list-mergevars-MMERGE4')
					.prepend('<div id="mmerge4_error"></div>');
			$(
					'.form-item-mailchimp-lists-mailchimp-stdf-mail-list-mergevars-MMERGE5')
					.prepend('<div id="mmerge5_error"></div>');
			$(
					'.form-item-mailchimp-lists-mailchimp-stdf-mail-list-mergevars-EMAIL')
					.prepend('<div id="email_error"></div>');

			// Perform the calculations on the project form
			$('#edit-field-budget-implementation-und-0-value')
					.focusout(
							function() {
								if (!(Drupal.stdfcustom
										.isNumber($(
												'#edit-field-budget-implementation-und-0-value')
												.val()))) {
									$(
											'#edit-field-budget-implementation-und-0-value')
											.val('0');
								}
								var supbudget = $(
										'#edit-field-budget-supervision-impleme-und-0-value')
										.val();
								var nonstdf = $(
										'#edit-field-budget-non-stdf-contributi-und-0-value')
										.val();
								$('#edit-field-budget-total-stdf-und-0-value')
										.val(
												+$(
														'#edit-field-budget-implementation-und-0-value')
														.val()
														+ +supbudget);
								$(
										'#edit-field-budget-total-project-value-und-0-value')
										.val(
												+$(
														'#edit-field-budget-implementation-und-0-value')
														.val()
														+ +nonstdf);
							});

			$('#edit-field-budget-supervision-impleme-und-0-value')
					.focusout(
							function() {
								if (!(Drupal.stdfcustom
										.isNumber($(
												'#edit-field-budget-supervision-impleme-und-0-value')
												.val()))) {
									$(
											'#edit-field-budget-supervision-impleme-und-0-value')
											.val('0');
								}
								var impbudget = $(
										'#edit-field-budget-implementation-und-0-value')
										.val();
								$('#edit-field-budget-total-stdf-und-0-value')
										.val(
												+$(
														'#edit-field-budget-supervision-impleme-und-0-value')
														.val()
														+ +impbudget);
							});

			$('#edit-field-budget-non-stdf-contributi-und-0-value')
					.focusout(
							function() {
								if (!(Drupal.stdfcustom
										.isNumber($(
												'#edit-field-budget-non-stdf-contributi-und-0-value')
												.val()))) {
									$(
											'#edit-field-budget-non-stdf-contributi-und-0-value')
											.val('0');
								}
								var impbudget = $(
										'#edit-field-budget-implementation-und-0-value')
										.val();
								$(
										'#edit-field-budget-total-project-value-und-0-value')
										.val(
												+$(
														'#edit-field-budget-non-stdf-contributi-und-0-value')
														.val()
														+ +impbudget);
							});
		}
	};
})(jQuery);

Drupal.stdfcustom = {
	isNumber : function(n) {
		return !isNaN(parseFloat(n)) && isFinite(n);
	}

};
