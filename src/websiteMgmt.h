static const char mgtWebsite[] PROGMEM = "<!DOCTYPE html>\
<html lang=\"de\">\
  <head>\
    <title>ESPuino-Konfiguration</title>\
    <meta charset=\"utf-8\">\
    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\
    <link rel=\"stylesheet\" href=\"https://ts-cs.de/css/bootstrap.min.css\">\
    <script src=\"https://ts-cs.de/js/jquery.min.js\"></script>\
    <script src=\"https://ts-cs.de/js/popper.min.js\"></script>\
    <script src=\"https://ts-cs.de/js/bootstrap.min.js\"></script>\
  </head>\
  <body>\
    <nav class=\"navbar navbar-expand-sm bg-primary navbar-dark\">\
      <button class=\"navbar-toggler\" type=\"button\" data-toggle=\"collapse\" data-target=\"#navbarSupportedContent\" aria-controls=\"navbarSupportedContent\" aria-expanded=\"false\" aria-label=\"Toggle navigation\">\
        <span class=\"navbar-toggler-icon\"></span>\
      </button>\
      <a class=\"navbar-brand\">\
        <img src=\"https://raw.githubusercontent.com/biologist79/Tonuino-ESP32-I2S/master/html/tonuino_logo.png\" width=\"30\" height=\"30\" class=\"d-inline-block align-top\" alt=\"\" />\
        Tonuino\
      </a>\
      <div class=\"collapse navbar-collapse\" id=\"collapsibleNavbar\">\
        <ul class=\"navbar-nav mr-auto\">\
          <li class=\"nav-item\">\
            <a class=\"nav-link\" href=\"#wifiConfig\">WLAN</a>\
          </li>\
          <li class=\"nav-item\">\
            <a class=\"nav-link\" href=\"#rfidMusicTags\">RFID-Zuweisungen</a>\
          </li>\
          <li class=\"nav-item\">\
            <a class=\"nav-link\" href=\"#rfidModTags\">RFID-Modifikationen</a>\
          </li>\
          <li class=\"nav-item\">\
            <a class=\"nav-link\" href=\"#mqttConfig\">MQTT</a>\
          </li>\
          <li class=\"nav-item\">\
            <a class=\"nav-link\" href=\"#ftpConfig\">FTP</a>\
          </li>\
          <li class=\"nav-item\">\
            <a class=\"nav-link\" href=\"#generalConfig\">Allgemein</a>\
          </li>\
        </ul>\
      </div>\
    </nav>\
    <br />\
    <div class=\"container\" id=\"wifiConfig\">\
      <h2>WLAN-Konfiguration</h2>\
      <form action=\"#wifiConfig\" method=\"POST\" onsubmit=\"wifiConfig('wifiConfig'); return false\">\
        <div class=\"form-group col-md-6\">\
          <label for=\"ssid\">WLAN-Name (SSID):</label>\
          <input type=\"text\" class=\"form-control\" id=\"ssid\" placeholder=\"SSID\" name=\"ssid\" required>\
          <div class=\"invalid-feedback\">\
            Bitte SSID des WLANs eintragen.\
          </div>\
          <label for=\"pwd\">Passwort:</label>\
          <input type=\"password\" class=\"form-control\" id=\"pwd\" placeholder=\"Passwort\" name=\"pwd\" required>\
        </div>\
        <button type=\"reset\" class=\"btn btn-secondary\">Reset</button>\
        <button type=\"submit\" class=\"btn btn-primary\">Absenden</button>\
      </form>\
      <div class=\"messages col-md-6 my-2\"></div>\
    </div>\
    <div class=\"container my-5\" id=\"rfidMusicTags\">\
        <h2>RFID-Zuweisungen</h2>\
        <form action=\"#rfidMusicTags\" method=\"POST\" onsubmit=\"rfidAssign('rfidMusicTags'); return false\">\
            <div class=\"form-group col-md-6\">\
                <label for=\"rfidIdMusic\">RFID-Chip-Nummer</label>\
                <input type=\"text\" class=\"form-control\" id=\"rfidIdMusic\" maxlength=\"12\" pattern=\"[0-9]{12}\" placeholder=\"%RFID_TAG_ID%\" name=\"rfidIdMusic\" required>\
                <label for=\"fileOrUrl\">Datei, Verzeichnis oder URL (URL nur für Webradio)</label>\
                <input type=\"text\" class=\"form-control\" id=\"fileOrUrl\" maxlength=\"255\" placeholder=\"z.B. /mp3/Hoerspiele/Yakari/Yakari_und_seine_Freunde.mp3\" name=\"fileOrUrl\" required>\
                <label for=\"playMode\">Abspielmodus</label>\
                <select class=\"form-control\" id=\"playMode\" name=\"playMode\">\
                    <option value=\"1\">Einzelner Titel</option>\
                    <option value=\"2\">Einzelner Titel (Endlosschleife)</option>\
                    <option value=\"3\">Hörbuch</option>\
                    <option value=\"4\">Hörbuch (Endlosschleife)</option>\
                    <option value=\"5\">Alle Titel eines Verzeichnis (sortiert)</option>\
                    <option value=\"6\">Alle Titel eines Verzeichnis (zufällig)</option>\
                    <option value=\"7\">Alle Titel eines Verzeichnis (sortiert, Endlosschleife)</option>\
                    <option value=\"8\">Alle Titel eines Verzeichnis (zufällig, Endlosschleife)</option>\
                    <option value=\"9\">Webradio</option>\
                </select>\
            </div>\
          <button type=\"reset\" class=\"btn btn-secondary\">Reset</button>\
          <button type=\"submit\" class=\"btn btn-primary\">Absenden</button>\
        </form>\
        <div class=\"messages col-md-6 my-2\"></div>\
    </div>\
    <div class=\"container my-5\" id=\"rfidModTags\">\
        <h2>RFID-Modifkationen</h2>\
        <form class=\"needs-validation\" action=\"#rfidModTags\" method=\"POST\" onsubmit=\"rfidMods('rfidModTags'); return false\" novalidate>\
            <div class=\"form-group col-md-6\">\
                <label for=\"rfidIdMod\">RFID-Chip-Nummer</label>\
                <input type=\"text\" class=\"form-control\" id=\"rfidIdMod\" maxlength=\"12\" pattern=\"[0-9]{12}\" placeholder=\"%RFID_TAG_ID%\" name=\"rfidIdMod\" required>\
                <div class=\"invalid-feedback\">\
                  Bitte eine 12-stellige Zahl eingeben.\
                </div>\
                <label for=\"modId\">Abspielmodus</label>\
                <select class=\"form-control\" id=\"modId\" name=\"modId\">\
                    <option value=\"100\">Tastensperre</option>\
                    <option value=\"101\">Schlafen nach 15 Minuten</option>\
                    <option value=\"102\">Schlafen nach 30 Minuten</option>\
                    <option value=\"103\">Schlafen nach 1 Stunde</option>\
                    <option value=\"104\">Schlafen nach 2 Stunden</option>\
                    <option value=\"105\">Schlafen nach Ende des Titels</option>\
                    <option value=\"106\">Schlafen nach Ende der Playlist</option>\
                    <option value=\"107\">Schlafen nach fünf Titeln</option>\
                    <option value=\"110\">Wiederhole Playlist (endlos)</option>\
                    <option value=\"111\">Wiederhole Titel (endlos)</option>\
                    <option value=\"112\">Dimme LEDs (Nachtmodus)</option>\
                </select>\
          </div>\
          <button type=\"reset\" class=\"btn btn-secondary\">Reset</button>\
          <button type=\"submit\" class=\"btn btn-primary\">Absenden</button>\
        </form>\
        <div class=\"messages col-md-6 my-2\"></div>\
    </div>\
    <div class=\"container my-5\" id=\"mqttConfig\">\
        <h2>MQTT-Konfiguration</h2>\
        <form class=\"needs-validation\" action=\"#mqttConfig\" method=\"POST\" onsubmit=\"mqttSettings('mqttConfig'); return false\" novalidate>\
            <div class=\"form-check col-md-6\">\
                <input class=\"form-check-input\" type=\"checkbox\" value=\"1\" id=\"mqttEnable\" name=\"mqttEnable\" %MQTT_ENABLE%>\
                <label class=\"form-check-label\" for=\"mqttEnable\">\
                  MQTT aktivieren\
                </label>\
            </div>\
            <div class=\"form-group my-2 col-md-6\">\
                <label for=\"mqttServer\">MQTT-Server (IP-Adresse)</label>\
                <input type=\"text\" class=\"form-control\" id=\"mqttServer\" pattern=\"^((\d{1,2}|1\d\d|2[0-4]\d|25[0-5])\.){3}(\d{1,2}|1\d\d|2[0-4]\d|25[0-5])$\" minlength=\"7\" maxlength=\"15\" placeholder=\"z.B. 192.168.2.89\" name=\"mqttServer\" value=\"%MQTT_SERVER%\">\
                <div class=\"invalid-feedback\">\
                  Bitte eine gültige IPv4-Adresse eingeben, z.B. 192.168.2.89.\
                </div>\
            </div>\
          <button type=\"reset\" class=\"btn btn-secondary\">Reset</button>\
          <button type=\"submit\" class=\"btn btn-primary\">Absenden</button>\
        </form>\
        <div class=\"messages col-md-6 my-2\"></div>\
    </div>\
    <div class=\"container\" id=\"ftpConfig\">\
        <h2>FTP-Konfiguration</h2>\
        <form action=\"#ftpConfig\" method=\"POST\" onsubmit=\"ftpSettings('ftpConfig'); return false\">\
          <div class=\"form-group col-md-6\">\
            <label for=\"ftpUser\">FTP-Benutzername:</label>\
            <input type=\"text\" class=\"form-control\" id=\"ftpUser\" maxlength=\"32\" placeholder=\"Benutzername\" name=\"ftpUser\" value=\"%FTP_USER%\" required>\
            <label for=\"pwd\">Passwort:</label>\
            <input type=\"password\" class=\"form-control\" id=\"ftpPwd\" maxlength=\"32\" placeholder=\"Passwort\" name=\"ftpPwd\" value=\"%FTP_PWD%\" required>\
          </div>\
          <button type=\"reset\" class=\"btn btn-secondary\">Reset</button>\
          <button type=\"submit\" class=\"btn btn-primary\">Absenden</button>\
        </form>\
        <div class=\"messages col-md-6 my-2\"></div>\
    </div>\
    <div class=\"container my-5\" id=\"generalConfig\">\
        <h2>Allgemeine Konfiguration</h2>\
        <form action=\"#generalConfig\" method=\"POST\" onsubmit=\"genSettings('generalConfig'); return false\">\
            <div class=\"form-group col-md-6\">\
                <label for=\"initialVolume\">Lautstärke nach dem Einschalten</label>\
                <input type=\"number\" min=\"1\" max=\"21\" class=\"form-control\" id=\"initialVolume\" name=\"initialVolume\" value=\"%INIT_VOLUME%\" required>\
                <label for=\"maxVolume\">Maximale Lautstärke</label>\
                <input type=\"number\" min=\"1\" max=\"21\" class=\"form-control\" id=\"maxVolume\" name=\"maxVolume\" value=\"%MAX_VOLUME%\" required>\
            </div>\
            <div class=\"form-group col-md-6\">\
                <label for=\"initBrightness\">Neopixel-Helligkeit nach dem Einschalten</label>\
                <input type=\"number\" min=\"0\" max=\"255\" class=\"form-control\" id=\"initBrightness\" name=\"initBrightness\" value=\"%INIT_LED_BRIGHTBESS%\" required>\
                <label for=\"nightBrightness\">Neopixel-Helligkeit im Nachtmodus</label>\
                <input type=\"number\" min=\"0\" max=\"255\" class=\"form-control\" id=\"nightBrightness\" name=\"nightBrightness\" value=\"%NIGHT_LED_BRIGHTBESS%\" required>\
            </div>\
            <div class=\"form-group col-md-6\">\
                <label for=\"inactivityTime\">Deep-Sleep nach Inaktivität (Minuten)</label>\
                <input type=\"number\" min=\"1\" max=\"1440\" class=\"form-control\" id=\"inactivityTime\" name=\"inactivityTime\" value=\"%MAX_INACTIVITY%\" required>\
            </div>\
          <button type=\"reset\" class=\"btn btn-secondary\">Reset</button>\
          <button type=\"submit\" class=\"btn btn-primary\">Absenden</button>\
        </form>\
        <div class=\"messages col-md-6 my-2\"></div>\
      </div>\
        <script>\
          var lastIdclicked = '';\
          var errorBox = '<div class=\"alert alert-danger alert-dismissible fade show\" role=\"alert\">Es ist ein Fehler aufgetreten!<button type=\"button\" class=\"close\" data-dismiss=\"alert\" aria-label=\"Close\"><span aria-hidden=\"true\">&times;</span></button></div>';\
          var okBox = '<div class=\"alert alert-success alert-dismissible fade show\" role=\"alert\">Aktion erfolgreich ausgeführt.<button type=\"button\" class=\"close\" data-dismiss=\"alert\" aria-label=\"Close\"><span aria-hidden=\"true\">&times;</span></button></div>';\
\
          (function() {\
            'use strict';\
            window.addEventListener('load', function() {\
              /* Fetch all the forms we want to apply custom Bootstrap validation styles to*/\
              var forms = document.getElementsByClassName('needs-validation');\
              /* Loop over them and prevent submission*/\
              var validation = Array.prototype.filter.call(forms, function(form) {\
                form.addEventListener('submit', function(event) {\
                  if (form.checkValidity() === false) {\
                    event.preventDefault();\
                    event.stopPropagation();\
                  }\
                  form.classList.add('was-validated');\
                }, false);\
              });\
            }, false);\
          });\
\
          let socket = new WebSocket(\"ws://%IPv4%/ws\");\
          socket.onmessage = function(event) {\
            console.log(event.data);\
            var socketMsg = JSON.parse(event.data);\
            if (socketMsg.rfidId != null) {\
              document.getElementById('rfidIdMod').value = socketMsg.rfidId;\
              document.getElementById('rfidIdMusic').value = socketMsg.rfidId;\
              $(\"#rfidIdMusic\").fadeOut(500).fadeIn(500).fadeOut(500).fadeIn(500).fadeOut(500).fadeIn(500);\
              $(\"#rfidIdMod\").fadeOut(500).fadeIn(500).fadeOut(500).fadeIn(500).fadeOut(500).fadeIn(500);\
\
            } if (socketMsg.status != null) {\
              if (socketMsg.status == 'ok') {\
                $(\"#\" + lastIdclicked).find('.messages').html(okBox);\
              } else {\
                $(\"#\" + lastIdclicked).find('.messages').html(errorBox);\
              }\
            }\
          };\
\
          function genSettings(clickedId) {\
            lastIdclicked = clickedId;\
            var myObj = {\
              \"general\": {\
                iVol: document.getElementById('initialVolume').value,\
                mVol: document.getElementById('maxVolume').value,\
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
                mqttServer: document.getElementById('mqttServer').value\
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
          function rfidAssign(clickedId) {\
            lastIdclicked = clickedId;\
            var myObj = {\
              \"rfidAssign\": {\
                rfidIdMusic: document.getElementById('rfidIdMusic').value,\
                fileOrUrl: document.getElementById('fileOrUrl').value,\
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
                pwd: document.getElementById('pwd').value\
              }\
            };\
            var myJSON = JSON.stringify(myObj);\
            socket.send(myJSON);\
          }\
        </script>\
  </body>\
</html>\
";