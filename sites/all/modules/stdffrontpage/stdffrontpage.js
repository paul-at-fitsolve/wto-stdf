(function($) {

	Drupal.behaviors.stdffrontpage = {
		attach : function(context, settings) {
			$(document).ready(function() {
				
				if (!$('#ajax-response').length && !$('.ajaxerror').length) {
			 
				//This code adds the date widget.
				$('.node-event').each(function(index) {
				  var raw = $(this).find('.date-display-start').html();
				  if (raw == undefined) {
					  raw = $(this).find('.date-display-single').html();
				  }
			      var date = raw.split(" ");
			      $(this).parent().prepend('<span class="month">' + date[1].substr(0,3) + '</span>');
			      $(this).parent().prepend('<span class="day">' + date[0] + '</span>');
				});	
				//This code adds a class to colour the status field value for the project table.
				$('td.views-field-field-status').each(function(index) {	
				  $(this).addClass($(this).text().toLowerCase());
				});	
				$('#block-stdffrontpage-publications > ul > li > a').append('<img title="More Info" src="sites/all/themes/wto-stdf/images/linkarrow.png" />');
				$('.node-event > header > h2 > a').append('<img title="More Info" src="sites/all/themes/wto-stdf/images/linkarrow.png" />');
			    var event = $('#block-views-nodequeue-upcoming-events-block > h2');
			    event.append('<img title="Upcoming Events" src="sites/all/themes/wto-stdf/images/eventsicon_bg.png" />');
			    var pub = $('#block-stdffrontpage-publications > h2');
			    pub.append('<img title="Publications" src="sites/all/themes/wto-stdf/images/pubicon_bg.png" />');
			    
				}
			    
			    if (!$.browser.msie) {
			    	$('.flexslider').css('float','left');
			    }
			  
			});

		}
	};

})(jQuery);