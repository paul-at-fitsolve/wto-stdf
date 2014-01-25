/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

$(function() {
$("#block-search-form").mouseenter(
    function(){ 
        $("#edit-search-block-form--2").stop().animate({width:'200px'},'fast');
    });
$("#block-search-form").mouseleave(
    function() {
    if($("#edit-search-block-form--2").val().length ==0) {
      $("#edit-search-block-form--2").stop().animate({width:'0'},'fast');
    }});
})

$(function() {
	//Apply JQuery UI tab but hide empty tabs with custom code.
	var mytabs = $('div#tabs').tabs();
	mytabs.children('ul').children('li').each(function(index, elem) {
	    if ($(elem).children('a').children().length === 0){
	        $(elem).hide(); // hide the 'li' tab-element
	    }
	}); 
});

	

})(jQuery, Drupal, this, this.document);
