(function ($) {
  Drupal.behaviors.ubc_responsive_slideshow = {
    attach: function (context, settings) {
			$('.flexslider').flexslider();
    }
  };
})(jQuery);