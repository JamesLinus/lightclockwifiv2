const char timezonesetup_html[] PROGMEM = R"=====(
<!DOCTYPE HTML>
<html>
<head><title>Time Zone</title>
$fonts
$css
<meta name=viewport content="width=device-width, initial-scale=1">
</head>
<body class="settings-page">
<div class=container>
<h2>Set Timezone</h2>
<ul class="nav nav-tabs">
<li class=active><a data-toggle=tab href=#GPS>GPS</a></li>
<li><a data-toggle=tab href=#Manual>Manual</a></li>
</ul>
<div class=tab-content>
<div id=GPS class="tab-pane fade in active">
<h3>HOME</h3>
<button type=button onclick=getLocation()>Get my GPS</button><br>
<form action=/a method=GET>
Latitude:<input type=text name=latitude id=latitude value=$latitude><br>
Longitude:<input type=text name=longitude id=longitude value=$longitude><br>
<input type=submit name=submit value='Save and Restart'/></form>
</div>
<div id=Manual class="tab-pane fade">
<form action=/ method=GET>
UTC Offset <input type=text name=timezone id=timezone value=$timezone><br>
<input type=submit name=submit value='Save and Restart'/></form>
</div>
</div>
</div>

<script>var x=document.getElementById("latitude");var y=document.getElementById("longitude");function getLocation(){if(navigator.geolocation){navigator.geolocation.getCurrentPosition(showPosition)}else{x.innerHTML="Geolocation is not supported by this browser."}}function showPosition(a){console.log("in showPosition");x.value=Math.round(a.coords.latitude*100)/100;y.value=Math.round(a.coords.longitude*100)/100};</script>
</body>
</html>
)=====";