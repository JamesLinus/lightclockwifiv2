const char password_html[] PROGMEM = R"=====(
<!DOCTYPE HTML>
<html><head>
<meta http-equiv=Content-Type content="text/html; charset=utf-8" />
<meta name=viewport content="width=device-width, initial-scale=1.0">
</head>
<body class=settings-page>

<a href='/'>Network</a>-> <strong>Password</strong> -> Timezone<BR>
<h1>Password</h1>
<form class=form-verticle action=/timezonesetup method=GET>
<ul>
<label>Password: <input type=password name=pass id="pass"/></label><br>
<input type=submit value=Submit>
</form>
</body>
<script>function otherssid(){a=document.getElementById("other_ssid");a.checked=true}function regularssid(){a=document.getElementById("other_text");a.value=""};</script>
</html>
)=====";
