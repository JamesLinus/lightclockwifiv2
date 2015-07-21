const char settings_html[] PROGMEM = R"=====(
<!DOCTYPE HTML>
<html>
<head><title>Time Zone</title></head>
<form action=/ method=GET>
Set timezone manually: <input type=text name=timezone id=latitude value=$timezone><br>
<button type=button onclick=getLocation()>Use Latitude/Longitude for Timezone:</button><br>
<p id=demo></p>
<input type=text name=latitude id=latitude>
<input type=text name=longitude id=longitude><br>
<input type=submit name=submit value='Update Timezone'/></form>
<a href=/>Return without saving</a><br>
<a href=/cleareeprom>Reset to factory default</a>
<script>var x=document.getElementById("latitude");var y=document.getElementById("longitude");function getLocation(){if(navigator.geolocation){navigator.geolocation.getCurrentPosition(showPosition)}else{x.innerHTML="Geolocation is not supported by this browser."}}function showPosition(a){console.log("in showPosition");x.value=a.coords.latitude;y.value=a.coords.longitude};</script>
</body>
</html>
)=====";