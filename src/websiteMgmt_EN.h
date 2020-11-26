static const char mgtWebsite[] PROGMEM = "<!DOCTYPE html>\
<html lang=\"de\">\
<head>\
    <title>ESPuino-configuration</title>\
    <meta charset=\"utf-8\">\
    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\
    <link rel=\"stylesheet\" href=\"https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css\" integrity=\"sha384-Vkoo8x4CGsO3+Hhxv8T/Q5PaXtkKtu6ug5TOeNV6gBiFeWPGFN9MuhOf23Q9Ifjh\" crossorigin=\"anonymous\">\
</head>\
<body>\
<nav class=\"navbar navbar-expand-sm bg-primary navbar-dark\">\
    <button class=\"navbar-toggler\" type=\"button\" data-toggle=\"collapse\" data-target=\"#navbarSupportedContent\" aria-controls=\"navbarSupportedContent\" aria-expanded=\"false\"\
            aria-label=\"Toggle navigation\">\
        <span class=\"navbar-toggler-icon\"></span>\
    </button>\
    <a class=\"navbar-brand\">\
        <img src=\"data:image/gif;base64,iVBORw0KGgoAAAANSUhEUgAAAF8AAABrCAYAAAARp15OAAAgAElEQVR4nO2dd7RdVbXG1zk5hBJC7x3EgoCIoKKACCIgiA07iqKAXexloICIIiAiFkRRYgULClEQJSjYUATEijQpuQklkXYjCCS5+43fdH9nfHey9knwPcZ4fzDH2Pfcs8/eq8w11+xrrd7MmTPnLl68eHq/3y9N08QFrLnmmmWVVVYpd9xxRzn//PPL3LlzyzLLLFO22mqr8u9//7vMmzev3HTTTaXX65VtttmmTJ06tfzzn/8sExMTZTAYxLXiiiuWadOmxb2xsbEo96677irLLrtslH/dddeVW265pay22mpxj3emTJkSdf7jH/8oguWWW64sv/zyUS//r7vuumWttdYq99xzT3nggQfK9OnTy8KFC8ujH/3ouDdnzpy4T5/uv//+uH/fffeVxYsXx/1FixaVTTfdtNx5551RA/duvPHGctttt8X/a6+9dnzSbsrgk/bdfvvtRXiiDPrO//rkWn311QMfO+20U3n84x9f5s+fH32kXzwHtDhe0GuE7QR33313+f73v1/++te/lj/84Q+BNDpO4XSIytVYEHzvvffGJwPEc6VFGh3meTpK5ePj42XllVcuq666aiBpwYIF8R6NA8F0jnvURx2Up4EBwTzDd9VDvfzGfe5Rvi6QuMIKKwQR8Bzv80ld9IOBom18gmAGnQGmbbSDtosgIC6e02Bw0R++007wBfA8RPvYxz62vPSlLy1ve9vbhkjP0JszZ874okWLpjMGQsqPfvSj8qEPfSioXaO8xhprDBsPFdEQYKWVVooOUjkNBzF0aGmBTtEROio64J5mDvVQHwjgomye5xl+5znNOGaQZgnt4aLtKpe+gQiQDPA8ZXL/1ltvjTbwP9SqvvE+/aINAO8LmZrlGgxRt/eFgfjMZz5TXv3qVwe3oCwGLCh/bGxsfOHChdNpCB067bTTykknnVSuvfbamNpbb711VEDlFAgFUwkDAWy88cbxP9TK9KIykHHzzTcHEjbbbLNAGGUzS6B2BnKdddaJ55nKsKB//etfgRQIgLI23HDDGMhrrrmmrL/++sFaqJu2gBC+iwhoFzOFunmP35lNIJEZwLO0heeYHSCHssXiqJPrz3/+cyCGtvIORAU7AjTwYl+8zzP0dWngox/9aBA0eKF9U6ZMWdCb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AljJ61//+mALv/zlL8vPf/7z4W8QjwtuyjnuuOPKEUccMRw86sBYfec739lJHrC8IOJZs2aNMx023njjcCtrKnLNmjUrppDYDVMLOPzww+N39//rnTXXXLO5+uqrJzmhZs6cGSynizUsv/zyUTbs4aKLLoopzn1YE1Pdnz3kkEOYspPKP/744+O3rbfeujn00EObww47rHn2s58d7YKl3HHHHc3tt98ezx500EHxLOwRVuht33zzzZv58+dPKvvUU08dydZgI3fddVczb968wNOCBQuaa6+9duiSz6wMPIAfXPlQzjieTH7YYostJiFJyBc/gx/zff/99x8WvNxyy03i86eddlo0msHiuuWWW+L7WWedNbITZ5xxRjx33HHHDfnsCiusMIkYdt1113jmgQceCP7NBWKBI444ojnggAOavfbaa1K5tA3+y8Dec889zZ577jn8zRHDQFx44YVD+cN12223xfdjjjlmZNsvueSSIAhwND4+HshfY401qs+utdZaUTbe5D5TCak+ykupe7JuueR6gFWJBzKV9txzz/84jVo+y9RGi3rBC14QPLALNPVVljIHpI0AL3vZy+IT9U+WL8/Byi6++OLy9a9//UEsCLYiVZO+iu3xPpqWALb7jGc8I9in+Dr9ADeHHHJIyIYuUGi0JG9nDcDRMBRKg+jgDjvsEPzKeb57AqUjq2Hy2SjtQgiDD6IWKq9FblYgG10OEuTweFRN3qMctzskV1SfrExsiuuvv76zbBlxfCJ0vV8abFRjrHOQLJWY/iCHvO4aOMJVbpeXl77RhjavqB86M8KLimsGlVMR96TLMxAMliPjfe97X/yPUGRW4PNBAEOZo3Rf+W5ohxAlh5YA90VpI2t0AGqFeqF43N41YABREqBiBgmBKp1fSVOlFaYEt73t1APl4zrZY489HuTBLO1MVfldVO9OwEmUr5wbVE5+8GnuZrNXjN/fR9pdp5jizCLMfBoExeBrefnLXx5sAy0I1ctBmXCl1aakhfC+qLC0QQjKQIvhtz/+8Y/lAx/4QFib/pwDDrdHPepRQ9ajemizQqKCn/70p5Fpdt5554WxhVpKTIPyGQjU4v3333/oagcoG1VYhFUbAEe+OEZ8v/zyy8eVpYCRJeOH6/zzz1ewt5kzZ85QoCB4ZfAgtBDSCMcsXGS86DvaEcIa4bjffvs1K6+8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\"\
             width=\"30\" height=\"30\" class=\"d-inline-block align-top\" alt=\"\"/>\
        Tonuino\
    </a>\
    <div class=\"collapse navbar-collapse\" id=\"collapsibleNavbar\">\
        <ul class=\"navbar-nav mr-auto\">\
            <li class=\"nav-item\">\
                <a class=\"nav-link\" href=\"#wifiConfig\">Wifi</a>\
            </li>\
            <li class=\"nav-item\">\
                <a class=\"nav-link\" href=\"#rfidMusicTags\">RFID-assignments</a>\
            </li>\
            <li class=\"nav-item\">\
                <a class=\"nav-link\" href=\"#rfidModTags\">RFID-modifications</a>\
            </li>\
            <li class=\"nav-item\">\
                <a class=\"nav-link\" href=\"#mqttConfig\">MQTT</a>\
            </li>\
            <li class=\"nav-item\">\
                <a class=\"nav-link\" href=\"#ftpConfig\">FTP</a>\
            </li>\
            <li class=\"nav-item\">\
                <a class=\"nav-link\" href=\"#generalConfig\">General</a>\
            </li>\
            <li class=\"nav-item\">\
                <a class=\"nav-link\" href=\"#importNvs\">NVS-importer</a>\
            </li>\
            <li class=\"nav-item\">\
                <a class=\"nav-link\" href=\"/restart\" style=\"color: orange\">Reboot Tonuino</a>\
            </li>\
        </ul>\
    </div>\
</nav>\
<br/>\
<div class=\"container\" id=\"wifiConfig\">\
    <h2>Wifi-configuration</h2>\
    <form action=\"#wifiConfig\" method=\"POST\" onsubmit=\"wifiConfig('wifiConfig'); return false\">\
        <div class=\"form-group col-md-6\">\
            <label for=\"ssid\">Wifi-name (SSID):</label>\
            <input type=\"text\" class=\"form-control\" id=\"ssid\" placeholder=\"SSID\" name=\"ssid\" required>\
            <div class=\"invalid-feedback\">\
                Please enter name of wifi (SSID).\
            </div>\
            <label for=\"pwd\">Password:</label>\
            <input type=\"password\" class=\"form-control\" id=\"pwd\" placeholder=\"Passwort\" name=\"pwd\" required>\
            <label for=\"hostname\">Tonuino-name (hostname):</label>\
            <input type=\"text\" class=\"form-control\" id=\"hostname\" placeholder=\"tonuino\" name=\"hostname\" value=\"%HOSTNAME%\" pattern=\"^[^-\\.]{2,32}\" required>\
        </div>\
        <button type=\"reset\" class=\"btn btn-secondary\">Reset</button>\
        <button type=\"submit\" class=\"btn btn-primary\">Submit</button>\
    </form>\
    <div class=\"messages col-md-6 my-2\"></div>\
</div>\
<div class=\"container my-5\" id=\"rfidMusicTags\">\
    <h2>RFID-assignments</h2>\
    <form action=\"#rfidMusicTags\" method=\"POST\" onsubmit=\"rfidAssign('rfidMusicTags'); return false\">\
        <div class=\"form-group col-md-6\">\
            <label for=\"rfidIdMusic\">RFID-chip-ID (12 digits)</label>\
            <input type=\"text\" class=\"form-control\" id=\"rfidIdMusic\" maxlength=\"12\" pattern=\"[0-9]{12}\" placeholder=\"%RFID_TAG_ID%\" name=\"rfidIdMusic\" required>\
            <label for=\"fileOrUrl\">File, directory or URL (^ und # are not allowed)</label>\
            <input type=\"text\" class=\"form-control\" id=\"fileOrUrl\" maxlength=\"255\" placeholder=\"z.B. /mp3/Hoerspiele/Yakari/Yakari_und_seine_Freunde.mp3\" pattern=\"^[^\\^#]+$\"\
                   name=\"fileOrUrl\" required>\
            <label for=\"playMode\">Playmode</label>\
            <select class=\"form-control\" id=\"playMode\" name=\"playMode\">\
                <option value=\"1\">Single track</option>\
                <option value=\"2\">Single track (infinite loop)</option>\
                <option value=\"3\">Audiobook</option>\
                <option value=\"4\">Audiobook (infinite loop)</option>\
                <option value=\"5\">All tracks of directory (sorted)</option>\
                <option value=\"6\">All tracks of directory (random)</option>\
                <option value=\"7\">All tracks of directory (sorted, inf. loop)</option>\
                <option value=\"9\">All tracks of directory (random, inf. loop)</option>\
                <option value=\"8\">Webradio</option>\
            </select>\
        </div>\
        <button type=\"reset\" class=\"btn btn-secondary\">Reset</button>\
        <button type=\"submit\" class=\"btn btn-primary\">Submit</button>\
    </form>\
    <div class=\"messages col-md-6 my-2\"></div>\
</div>\
<div class=\"container my-5\" id=\"rfidModTags\">\
    <h2>RFID-modifications</h2>\
    <form class=\"needs-validation\" action=\"#rfidModTags\" method=\"POST\" onsubmit=\"rfidMods('rfidModTags'); return false\">\
        <div class=\"form-group col-md-6\">\
            <label for=\"rfidIdMod\">RFID-chip-ID (12 digits)</label>\
            <input type=\"text\" class=\"form-control\" id=\"rfidIdMod\" maxlength=\"12\" pattern=\"[0-9]{12}\" placeholder=\"%RFID_TAG_ID%\" name=\"rfidIdMod\" required>\
            <div class=\"invalid-feedback\">\
                Please enter a number with 12 digits.\
            </div>\
            <label for=\"modId\">Abspielmodus</label>\
            <select class=\"form-control\" id=\"modId\" name=\"modId\">\
                <option value=\"100\">Lock keys</option>\
                <option value=\"101\">Sleep after 15 minutes</option>\
                <option value=\"102\">Sleep after 30 minutes</option>\
                <option value=\"103\">Sleep after 1 hour</option>\
                <option value=\"104\">Sleep after 1 hours</option>\
                <option value=\"105\">Sleep after end of track</option>\
                <option value=\"106\">Sleep after end of playlist</option>\
                <option value=\"107\">Sleep after five tracks</option>\
                <option value=\"110\">Repeat playlist (inf. loop)</option>\
                <option value=\"111\">Repeat track (inf. loop)</option>\
                <option value=\"112\">Dimm LEDs (nightmode)</option>\
                <option value=\"130\">Toggle WiFi-status</option>\
            </select>\
        </div>\
        <button type=\"reset\" class=\"btn btn-secondary\">Reset</button>\
        <button type=\"submit\" class=\"btn btn-primary\">Submit</button>\
    </form>\
    <div class=\"messages col-md-6 my-2\"></div>\
</div>\
<div class=\"container my-5\" id=\"mqttConfig\">\
    <h2>MQTT-configuration</h2>\
    <form class=\"needs-validation\" action=\"#mqttConfig\" method=\"POST\" onsubmit=\"mqttSettings('mqttConfig'); return false\">\
        <div class=\"form-check col-md-6\">\
            <input class=\"form-check-input\" type=\"checkbox\" value=\"1\" id=\"mqttEnable\" name=\"mqttEnable\" %MQTT_ENABLE%>\
            <label class=\"form-check-label\" for=\"mqttEnable\">\
                Enable MQTT\
            </label>\
        </div>\
        <div class=\"form-group my-2 col-md-6\">\
            <label for=\"mqttServer\">MQTT-server</label>\
            <input type=\"text\" class=\"form-control\" id=\"mqttServer\" minlength=\"7\" maxlength=\"%MQTT_SERVER_LENGTH%\" placeholder=\"z.B. 192.168.2.89\" name=\"mqttServer\"\
                   value=\"%MQTT_SERVER%\">\
            <label for=\"mqttUser\">MQTT-username (optional):</label>\
            <input type=\"text\" class=\"form-control\" id=\"mqttUser\" maxlength=\"%MQTT_USER_LENGTH%\" placeholder=\"Benutzername\" name=\"mqttUser\" value=\"%MQTT_USER%\">\
            <label for=\"mqttPwd\">Password (optional):</label>\
            <input type=\"password\" class=\"form-control\" id=\"mqttPwd\" maxlength=\"%MQTT_PWD_LENGTH%\" placeholder=\"Passwort\" name=\"mqttPwd\" value=\"%MQTT_PWD%\">\
        </div>\
        <button type=\"reset\" class=\"btn btn-secondary\">Reset</button>\
        <button type=\"submit\" class=\"btn btn-primary\">Submit</button>\
    </form>\
    <div class=\"messages col-md-6 my-2\"></div>\
</div>\
<div class=\"container\" id=\"ftpConfig\">\
    <h2>FTP-configuration</h2>\
    <form action=\"#ftpConfig\" method=\"POST\" onsubmit=\"ftpSettings('ftpConfig'); return false\">\
        <div class=\"form-group col-md-6\">\
            <label for=\"ftpUser\">FTP-username:</label>\
            <input type=\"text\" class=\"form-control\" id=\"ftpUser\" maxlength=\"%FTP_USER_LENGTH%\" placeholder=\"Benutzername\" name=\"ftpUser\" value=\"%FTP_USER%\" required>\
            <label for=\"pwd\">password:</label>\
            <input type=\"password\" class=\"form-control\" id=\"ftpPwd\" maxlength=\"%FTP_PWD_LENGTH%\" placeholder=\"Passwort\" name=\"ftpPwd\" value=\"%FTP_PWD%\" required>\
        </div>\
        <button type=\"reset\" class=\"btn btn-secondary\">Reset</button>\
        <button type=\"submit\" class=\"btn btn-primary\">Submit</button>\
    </form>\
    <div class=\"messages col-md-6 my-2\"></div>\
</div>\
<div class=\"container my-5\" id=\"generalConfig\">\
    <h2>General configuration</h2>\
    <form action=\"#generalConfig\" method=\"POST\" onsubmit=\"genSettings('generalConfig'); return false\">\
        <div class=\"form-group col-md-6\">\
            <label for=\"initialVolume\">Volume after start</label>\
            <input type=\"number\" min=\"1\" max=\"21\" class=\"form-control\" id=\"initialVolume\" name=\"initialVolume\" value=\"%INIT_VOLUME%\" required>\
            <label for=\"maxVolumeSpeaker\">Maximum volume (speaker)</label>\
            <input type=\"number\" min=\"1\" max=\"21\" class=\"form-control\" id=\"maxVolumeSpeaker\" name=\"maxVolumeSpeaker\" value=\"%MAX_VOLUME_SPEAKER%\" required>\
            <label for=\"maxVolumeHeadphone\">Maximum volume (headphone)</label>\
            <input type=\"number\" min=\"1\" max=\"21\" class=\"form-control\" id=\"maxVolumeHeadphone\" name=\"maxVolumeHeadphone\" value=\"%MAX_VOLUME_HEADPHONE%\" required>\
        </div>\
        <div class=\"form-group col-md-6\">\
            <label for=\"initBrightness\">Neopixel-brightness after start</label>\
            <input type=\"number\" min=\"0\" max=\"255\" class=\"form-control\" id=\"initBrightness\" name=\"initBrightness\" value=\"%INIT_LED_BRIGHTNESS%\" required>\
            <label for=\"nightBrightness\">Neopixel-brightness in nightmode</label>\
            <input type=\"number\" min=\"0\" max=\"255\" class=\"form-control\" id=\"nightBrightness\" name=\"nightBrightness\" value=\"%NIGHT_LED_BRIGHTNESS%\" required>\
        </div>\
        <div class=\"form-group col-md-6\">\
            <label for=\"inactivityTime\">Deepsleep after inactivity (minutes)</label>\
            <input type=\"number\" min=\"1\" max=\"1440\" class=\"form-control\" id=\"inactivityTime\" name=\"inactivityTime\" value=\"%MAX_INACTIVITY%\" required>\
        </div>\
        <button type=\"reset\" class=\"btn btn-secondary\">Reset</button>\
        <button type=\"submit\" class=\"btn btn-primary\">Submit</button>\
    </form>\
    <div class=\"messages col-md-6 my-2\"></div>\
</div>\
<div class=\"container my-5\" id=\"importNvs\">\
    <h2>NVS-importer</h2>\
    <form action=\"/upload\" enctype=\"multipart/form-data\" method=\"POST\">\
        <div class=\"form-group\">\
            <label for=\"nvsUpload\">Backup-files can be imported here.</label>\
            <input type=\"file\" class=\"form-control-file\" id=\"nvsUpload\" name=\"nvsUpload\" accept=\".txt\">\
        </div>\
        <button type=\"submit\" class=\"btn btn-primary\">Submit</button>\
    </form>\
    <div class=\"messages col-md-6 my-2\"></div>\
</div>\
<script src=\"https://code.jquery.com/jquery-3.4.1.slim.min.js\" integrity=\"sha384-J6qa4849blE2+poT4WnyKhv5vZF5SrPo0iEjwBvKU7imGFAV0wwj1yYfoRSJoZ+n\"\
        crossorigin=\"anonymous\"></script>\
<script src=\"https://cdn.jsdelivr.net/npm/popper.js@1.16.0/dist/umd/popper.min.js\" integrity=\"sha384-Q6E9RHvbIyZFJoft+2mJbHaEWldlvI9IOYy5n3zV9zzTtmI3UksdQRVvoxMfooAo\"\
        crossorigin=\"anonymous\"></script>\
<script src=\"https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.min.js\" integrity=\"sha384-wfSDF2E50Y2D1uUdj0O3uMBJnjuUD4Ih7YwaYd1iqfktj0Uod8GCExl3Og8ifwB6\"\
        crossorigin=\"anonymous\"></script>\
<script>\
    var lastIdclicked = '';\
    var errorBox = '<div class=\"alert alert-danger alert-dismissible fade show\" role=\"alert\">Error occured!<button type=\"button\" class=\"close\" data-dismiss=\"alert\" aria-label=\"Close\"><span aria-hidden=\"true\">&times;</span></button></div>';\
    var okBox = '<div class=\"alert alert-success alert-dismissible fade show\" role=\"alert\">Action successful.<button type=\"button\" class=\"close\" data-dismiss=\"alert\" aria-label=\"Close\"><span aria-hidden=\"true\">&times;</span></button></div>';\
\
    var socket = new WebSocket(\"ws://%IPv4%/ws\");\
\
    function connect() {\
        socket = new WebSocket(\"ws://%IPv4%/ws\");\
    }\
\
    function ping() {\
        var myObj = {\
            \"ping\": {\
                ping: 'ping'\
            }\
        };\
        var myJSON = JSON.stringify(myObj);\
        socket.send(myJSON);\
        tm = setTimeout(function () {\
            alert(\"Connection to tonuino is broken!\\nPlease refresh this website.\");\
        }, 5000);\
    }\
\
    function pong() {\
        clearTimeout(tm);\
    }\
\
    socket.onopen = function () {\
        setInterval(ping, 15000);\
    };\
\
    socket.onclose = function (e) {\
        console.log('Socket is closed. Reconnect will be attempted in 1 second.', e.reason);\
        setTimeout(function () {\
            connect();\
        }, 5000);\
    };\
\
    socket.onerror = function (err) {\
        console.error('Socket encountered error: ', err.message, 'Closing socket');\
        socket.close();\
    };\
\
    socket.onmessage = function (event) {\
        console.log(event.data);\
        var socketMsg = JSON.parse(event.data);\
        if (socketMsg.rfidId != null) {\
            document.getElementById('rfidIdMod').value = socketMsg.rfidId;\
            document.getElementById('rfidIdMusic').value = socketMsg.rfidId;\
            $(\"#rfidIdMusic\").fadeOut(500).fadeIn(500).fadeOut(500).fadeIn(500).fadeOut(500).fadeIn(500);\
            $(\"#rfidIdMod\").fadeOut(500).fadeIn(500).fadeOut(500).fadeIn(500).fadeOut(500).fadeIn(500);\
\
        }\
        if (socketMsg.status != null) {\
            if (socketMsg.status == 'ok') {\
                $(\"#\" + lastIdclicked).find('.messages').html(okBox);\
            } else {\
                $(\"#\" + lastIdclicked).find('.messages').html(errorBox);\
            }\
        }\
        if (socketMsg.pong != null) {\
            if (socketMsg.pong == 'pong') {\
                pong();\
            }\
        }\
    };\
\
    function genSettings(clickedId) {\
        lastIdclicked = clickedId;\
        var myObj = {\
            \"general\": {\
                iVol: document.getElementById('initialVolume').value,\
                mVolSpeaker: document.getElementById('maxVolumeSpeaker').value,\
                mVolHeadphone: document.getElementById('maxVolumeHeadphone').value,\
                iBright: document.getElementById('initBrightness').value,\
                nBright: document.getElementById('nightBrightness').value,\
                iTime: document.getElementById('inactivityTime').value\
            }\
        };\
        var myJSON = JSON.stringify(myObj);\
        socket.send(myJSON);\
    }\
\
    function ftpSettings(clickedId) {\
        lastIdclicked = clickedId;\
        var myObj = {\
            \"ftp\": {\
                ftpUser: document.getElementById('ftpUser').value,\
                ftpPwd: document.getElementById('ftpPwd').value\
            }\
        };\
        var myJSON = JSON.stringify(myObj);\
        socket.send(myJSON);\
    }\
\
    function mqttSettings(clickedId) {\
        lastIdclicked = clickedId;\
        var val;\
        if (document.getElementById('mqttEnable').checked) {\
            val = document.getElementById('mqttEnable').value;\
        } else {\
            val = 0;\
        }\
        var myObj = {\
            \"mqtt\": {\
                mqttEnable: val,\
                mqttServer: document.getElementById('mqttServer').value,\
                mqttUser: document.getElementById('mqttUser').value,\
                mqttPwd: document.getElementById('mqttPwd').value\
            }\
        };\
        var myJSON = JSON.stringify(myObj);\
        socket.send(myJSON);\
    }\
\
    function rfidMods(clickedId) {\
        lastIdclicked = clickedId;\
        var myObj = {\
            \"rfidMod\": {\
                rfidIdMod: document.getElementById('rfidIdMod').value,\
                modId: document.getElementById('modId').value\
            }\
        };\
        var myJSON = JSON.stringify(myObj);\
        socket.send(myJSON);\
    }\
\
    function removeTrSlash(str) {\
        if (str.substr(-1) === '/') {\
            return str.substr(0, str.length - 1);\
        }\
        return str;\
    }\
\
    function rfidAssign(clickedId) {\
        lastIdclicked = clickedId;\
        var myObj = {\
            \"rfidAssign\": {\
                rfidIdMusic: document.getElementById('rfidIdMusic').value,\
                fileOrUrl: removeTrSlash(document.getElementById('fileOrUrl').value),\
                playMode: document.getElementById('playMode').value\
            }\
        };\
        var myJSON = JSON.stringify(myObj);\
        socket.send(myJSON);\
    }\
\
    function wifiConfig(clickedId) {\
        lastIdclicked = clickedId;\
        var myObj = {\
            \"wifiConfig\": {\
                ssid: document.getElementById('ssid').value,\
                pwd: document.getElementById('pwd').value,\
                hostname: document.getElementById('hostname').value\
            }\
        };\
        var myJSON = JSON.stringify(myObj);\
        socket.send(myJSON);\
    }\
</script>\
</body>\
</html>\
";