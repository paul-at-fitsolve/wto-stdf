<!DOCTYPE html>
<html>
  <head>
    <meta name="viewport" content="initial-scale=1.0, user-scalable=no" />
    <style type="text/css">
      html { height: 100% }
      body { height: 100%; margin: 0; padding: 0 }
      #map-canvas { height: 100% }
    </style>
    <script type="text/javascript"
      src="https://maps.googleapis.com/maps/api/js?sensor=false">
    </script>
    <script type="text/javascript">
      function initialize() {
        var mapOptions = {
          center: new google.maps.LatLng(49.496675, -102.65625),
          zoom: 1,
          mapTypeId: google.maps.MapTypeId.ROADMAP
        };
        var map = new google.maps.Map(document.getElementById("map-canvas"),
            mapOptions);
        //var georssLayer = new google.maps.KmlLayer('http://gmaps-samples.googlecode.com/svn/trunk/ggeoxml/cta.kml');
        var georssLayer = new google.maps.KmlLayer('http://www.fitsolve.co.uk/cont.kml');
        georssLayer.setMap(map);
      }
      google.maps.event.addDomListener(window, 'load', initialize);

     
    </script>
  </head>
  <body>
    <h1>Hello Mum</h1>
    <div id="map-canvas"/>
  </body>
</html>