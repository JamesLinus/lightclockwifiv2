const char settings_html[] PROGMEM = R"=====(
<!DOCTYPE HTML>
<html>
<head><title>Advanced Settings</title></head>
<body onload=tzupdate()>
<form action=/ method=GET>
Hour Marks: <select name=hourmarks>
<option value=none>none</option>
<option value=Midday>Midday</option>
<option value=Quadrants>Quadrants</option>
<option value=Hours>Hours</option>
</select><br>
Show Seconds<input type=checkbox name=showseconds checked><br>
Sleep (24hr)<br><input type=text name=sleep value=23><br>
Wake (24hr)<br><input type=text name=wake value=7><br>
Timezone:<br><input type=text name=timezone id=timezone></input><br>
<input type=submit name=submit value='Update Settings'/></form>
<a href=/>Return without saving</a><br>
<a href=/cleareeprom>Reset to factory default</a>
<script>function tzupdate(){var a=new Date();var b=a.getTimezoneOffset();document.getElementById("timezone").value=b/-60};</script>
</body>
</html>
)=====";