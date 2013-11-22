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
			      $(this).parent().prepend('<div class="date"><span class="day">' + date[0] + '</span><span class="month">' + date[1].substr(0,3) + '</span></div>');
				});	
				$('#block-stdffrontpage-publications > ul > li > a').append('<img src="sites/all/themes/wto-stdf/images/linkarrow.png" />');
				$('.node-event > header > h2 > a').append('<img src="sites/all/themes/wto-stdf/images/linkarrow.png" />');
				}
			    
			    if (!$.browser.msie) {
			    	$('.flexslider').css('float','left');
			    }
			  
			});

		}
	};

})(jQuery);