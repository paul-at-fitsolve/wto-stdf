<html>
<head>
<script type='text/javascript' src='https://www.google.com/jsapi'></script>
<script type='text/javascript'>
     google.load('visualization', '1', {'packages': ['geochart']});
     //google.setOnLoadCallback(drawRegionsMap);

      function drawRegionsMap(region, resolution) {
		var geochart = new google.visualization.GeoChart(document.getElementById('chart_div'));
      	  var options = {region: 'world', resolution: resolution, width: 800, height: 600,

        		backgroundColor:'#A9BCF5', datalessRegionColor: 'white',
        		//colorAxis: {minValue: 0, maxValue:1,  colors: ['#438094','#DE3403']}

      	      	  };
     	   var data = google.visualization.arrayToDataTable([
        	                                                   ['Country', 'Project Count', 'Spend'],
        	                                                   ['002',           3000,           1000000],
        	                                                   ['CN',            1324,           340600],
        	                                                   ['TW',            1324,           340600],
        	                                                   ['US',            304,            9629091],
        	                                                   ['ID',            232,            1904569],
        	                                                   ['BR',            187,            8514877]
        	                                                 ]);
      	  google.visualization.events.addListener(geochart, 'regionClick', function(eventData) {
      	    options['region'] = eventData.region;
      	    options['resolution'] = 'countries';
      	    options['showZoomOut'] = true;
      	    geochart.draw(data, options); 
        	var div = document.getElementById('list');
        	var table = "<table border='1'><tr><td>Project #</td><td>Total Spend</td></tr><tr><td>1324</td><td>$340600</td></tr><tr><td><a href='http://example.com'><div style='height:100%;width:100%'>STDF/PG/005</div></a></td><td>$45,100</td></tr></table>";
            div.innerHTML = div.innerHTML + table;
      	  });
      	  geochart.draw(data, options);
    };

    function drawingDone() {
        alert("done");
    }
    </script>
</head>
<body>
	<h1 style="font-family: verdana">STDF Project Map</h1>
	<p style="font-family: verdana">Please select a region</p>
	<button type="button" onclick="drawRegionsMap('002', 'continents');">Africa</button>
	<button type="button" onclick="drawRegionsMap('142', 'continents');">Asia</button>
	<button type="button" onclick="drawRegionsMap('029', 'countries');">Caribbean</button>
	<button type="button" onclick="drawRegionsMap('013', 'countries');">Central
		America</button>
	<div id="chart_div" style="width: 900px; height: 500px;"></div>
	<div id="list"
		style="position: absolute; left: 800px; top: 5px; border: 1px green solid;">Project
		List</div>
</body>
</html>