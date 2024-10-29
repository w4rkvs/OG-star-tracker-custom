// Strings.cpp
#include "strings.h"

const char* TRACKING_ON = "Tracking ON";
const char* TRACKING_OFF = "Tracking OFF";
const char* IDLE = "Idle";
const char* SPEED = "speed";
const char* TRACKING_SPEED = "trackingSpeed";
const char* DIRECTION = "direction";
const char* SLEWING = "Slewing";
const char* EXPOSURE = "exposure";
const char* NUM_EXPOSURES = "numExposures";
const char* DITHER_ENABLED = "ditherEnabled";
const char* FOCAL_LENGTH = "focalLength";
const char* DISABLE_TRACKING_ON_FINISH = "disableTracking";
const char* PIXEL_SIZE = "pixSize";
const char* CAPTURE_ON = "Capture ON";
const char* CAPTURE_OFF = "Capture OFF";
const char* CAPTURE_ALREADY_ON = "Capture Already ON";
const char* CAPTURE_ALREADY_OFF = "Capture Already OFF";
const char* CAPTURES_REMAINING = "%d Captures Remaining...";

const char* INVALID_EXPOSURE_VALUES = "Invalid Exposure Values!";
const char* INVALID_DITHER_VALUES = "Invalid Dither Settings!";

const char* MIME_TYPE_TEXT = "text/plain";
const char* MIME_TYPE_HTML = "text/html";

const char* html = "<!DOCTYPE html>\n"
                   "<html lang=\"en\">\n"
                   "<head>\n"
                   "    <title>OG Star Tracker Control Panel</title>\n"
                   "    <meta charset='utf-8'>\n"
                   "    <meta name='viewport' content='width=device-width, initial-scale=1'>\n"
                   "    <style>\n"
                   "        body {\n"
                   "            background-color: #414141;\n"
                   "            text-align: center;\n"
                   "            font-family: \"Arial\";\n"
                   "            padding: 10px;\n"
                   "            display: flex;\n"
                   "            justify-content: center;\n"
                   "        }\n"
                   "\n"
                   "        button {\n"
                   "            background-color: #414141;\n"
                   "            color: white;\n"
                   "            border: none;\n"
                   "            padding: 10px 10px;\n"
                   "            text-align: center;\n"
                   "            text-decoration: none;\n"
                   "            display: inline-block;\n"
                   "            font-size: 12px;\n"
                   "            margin-top: 10px;\n"
                   "            cursor: pointer;\n"
                   "            width: 50%;\n"
                   "            min-width: 120px;\n"
                   "            font-weight: bold;\n"
                   "        }\n"
                   "\n"
                   "        select {\n"
                   "            font-size: 16px;\n"
                   "            padding: 5px;\n"
                   "            border: 2px solid #414141;\n"
                   "            border-radius: 0px;\n"
                   "        }\n"
                   "\n"
                   "        input[type='number'] {\n"
                   "            font-size: 16px;\n"
                   "            padding: 5px;\n"
                   "            border: 2px solid #414141;\n"
                   "            border-radius: 0px;\n"
                   "            box-sizing: border-box;\n"
                   "        }\n"
                   "\n"
                   "        label {\n"
                   "            display: inline-block;\n"
                   "            text-align: left;\n"
                   "            margin: 10px;\n"
                   "            font-size: 20px;\n"
                   "        }\n"
                   "\n"
                   "        h1 {\n"
                   "            font-size: 32px;\n"
                   "        }\n"
                   "\n"
                   "        h2 {\n"
                   "            font-size: 24px;\n"
                   "        }\n"
                   "\n"
                   "        h3 {\n"
                   "            font-size: 16px;\n"
                   "        }\n"
                   "\n"
                   "        summary {\n"
                   "            font-weight: bold;\n"
                   "            font-size: 16px;\n"
                   "            padding-top: 20px;\n"
                   "        }\n"
                   "\n"
                   "        .content {\n"
                   "            max-width: 450px;\n"
                   "            width: 100%;\n"
                   "            background-color: #d6d6d6;\n"
                   "            padding: 20px;\n"
                   "            border-radius: 5px;\n"
                   "        }\n"
                   "\n"
                   "        .card {\n"
                   "            background-color: #fafafa;\n"
                   "            padding: 10px 20px 20px 20px;\n"
                   "            border-radius: 5px;\n"
                   "            margin-top: 20px;\n"
                   "        }\n"
                   "\n"
                   "        .grid2 {\n"
                   "            display: flex;\n"
                   "            flex-direction: row;\n"
                   "            flex-wrap: wrap;\n"
                   "            justify-content: center;\n"
                   "            align-items: center;\n"
                   "        }\n"
                   "\n"
                   "        .grid2 > h3 {\n"
                   "            width: 50%;\n"
                   "            min-width: 120px;\n"
                   "        }\n"
                   "\n"
                   "        .grid2 > select,\n"
                   "        .grid2 > input {\n"
                   "            width: 50%;\n"
                   "            min-width: 120px;\n"
                   "            height: 40px;\n"
                   "        }\n"
                   "\n"
                   "        .grid2 > .checkbox {\n"
                   "            width: 50%;\n"
                   "            min-width: 120px;\n"
                   "            height: 20px;\n"
                   "            margin: 0px;\n"
                   "        }\n"
                   "\n"
                   "        .header {\n"
                   "            display: flex;\n"
                   "            justify-content: center;\n"
                   "        }\n"
                   "    \n"
                   "        #logo {\n"
                   "            background-image: url('data:image/png;base64,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');\n"
                   "            width: 220px;\n"
                   "            height: 176px;\n"
                   "            margin-top: 10px;\n"
                   "        }\n"
                   "\n"
                   "        .button-group {\n"
                   "            padding-top: 10px;\n"
                   "            display: flex;\n"
                   "            flex-wrap: wrap;\n"
                   "            justify-content: center;\n"
                   "        }\n"
                   "\n"
                   "        .right-separator {\n"
                   "            border-right: 2px solid #fafafa;\n"
                   "            user-select: none;\n"  //prevent selection of text when holding down button
                   "            -webkit-user-select: none; /* Safari */\n"
                   "            -ms-user-select: none; /* IE 10 and IE 11 */ \n"
                   "        }\n"
                   "\n"
                   "        .left-separator {\n"
                   "            border-left: 2px solid #fafafa;\n"
                   "            user-select: none;\n"  //prevent selection of text when holding down button
                   "            -webkit-user-select: none; /* Safari */\n"
                   "            -ms-user-select: none; /* IE 10 and IE 11 */ \n"
                   "        }\n"
                   "\n"
                   "        #status {\n"
                   "            font-size: 24px;\n"
                   "            margin: 0px;\n"
                   "        }\n"
                   "    </style>\n"
                   "    <script>\n"

                   "        var lastClick = 0;\n"
                   "        var delay = 500;\n"


                   "        function sendRequest(url) {\n"
                   "            var xhr = new XMLHttpRequest();\n"
                   "            xhr.onreadystatechange = function () {\n"
                   "                if (this.readyState == 4 && this.status == 200) {\n"
                   "                    document.getElementById('status').innerHTML = this.responseText;\n"
                   "                }\n"
                   "            };\n"
                   "            xhr.open('GET', url, true);\n"
                   "            xhr.send();\n"
                   "        }\n"
                   "\n"
                   "        setInterval(function () {\n"
                   "            sendRequest('/status');\n"
                   "        }, 10000);\n"
                   "\n"
                   "        function sendStartRequest(url) {\n"
                   "            var direction = document.getElementById('hemisphere-select').value;\n"
                   "            var trackingSpeed = document.getElementById('tracking-speed-select').value;\n"
                   "            var starturl = url + '?direction=' + direction + '&trackingSpeed=' + trackingSpeed;\n"
                   "            sendRequest(starturl);\n"
                   "        }\n"
                   "\n"
                   "        function sendSlewStop() {\n"
                   "            lastClick = Date.now();\n"
                   "            sendRequest('/stopslew');\n"
                   "        }\n"
                   "\n"
                   "        function sendSlewRequest(url) {\n"
                   "            if (lastClick >= (Date.now() - delay))\n"
                   "                return;\n"
                   "            lastClick = Date.now();\n"
                   "            var index = document.getElementById('slew-select').selectedIndex;\n"
                   "            if (index == 6) {\n"
                   "              var speed = document.getElementById('custom-speed').value;\n"
                   "            } else {\n"
                   "              var speed = document.getElementById('slew-select').value;\n"
                   "            }\n"
                   "            var slewurl = url + '?speed=' + speed;\n"
                   "            sendRequest(slewurl);\n"
                   "        }\n"
                   "\n"
                   "        function checkCustom() {\n"
                   "            var index = document.getElementById('slew-select').selectedIndex;\n"
                   "            if (index == 6) {\n"
                   "                document.getElementById('custom-speed-text').style.display='block';\n"
                   "                document.getElementById('custom-speed').style.display='block';\n"
                   "            } else {\n"
                   "                document.getElementById('custom-speed-text').style.display='none';\n"
                   "                document.getElementById('custom-speed').style.display='none';\n"
                   "            }\n"
                   "        }\n"
                   "\n"
                   "        function sendCaptureRequest() {\n"
                   "            var exposure = document.getElementById('exposure').value.trim();\n"
                   "            var numExposures = document.getElementById('num-exposures').value.trim();\n"
                   "            var focalLength = document.getElementById('focal_len').value.trim();\n"
                   "            var pixSize = Math.floor(parseFloat(document.getElementById('pixel_size').value.trim()) * 100);\n"
                   "\n"
                   "            var ditherEnabled = document.getElementById('dither_on').checked ? 1 : 0;\n"
                   "            var intervalometerUrl = '/start?exposure=' + exposure + '&numExposures=' + numExposures + '&focalLength=' + focalLength + '&pixSize=' + pixSize + '&ditherEnabled=' + ditherEnabled;\n"
                   "            sendRequest(intervalometerUrl);\n"
                   "        }\n"
                   "    </script>\n"
                   "</head>\n"
                   "\n"
                   "<body>\n"
                   "    <div class=\"content\">\n"
                   "        <div class=\"header\">\n"
                   "            <div id=\"logo\"></div>\n"
                   "        </div>\n"
                   "        <h1>Control Panel</h1>\n"
                   "        <div class=\"card\">\n"
                   "            <h2>Tracking</h2>\n"
                   "            <div class=\"grid2\">\n"
                   "                <h3>Hemisphere:</h3>\n"
                   "                <select aria-label=\"Hemisphere\" id='hemisphere-select'>\n"
                   "                    <option value='1' %north%>North</option>\n"
                   "                    <option value='0' %south%>South</option>\n"
                   "                </select><br>\n"
                   "            </div>\n"
                   "            <div class=\"grid2\">\n"
                   "                <h3>Tracking Rate:</h3>\n"
                   "                <select aria-label=\"tspeed\" id='tracking-speed-select'>\n"
                   "                    <option value='0'>Sidereal</option>\n"
                   "                    <option value='1'>Solar</option>\n"
                   "                    <option value='2'>Lunar</option>\n"
                   "                </select><br>\n"
                   "            </div>\n"
                   "            <div class=\"button-group\">\n"
                   "                <button class=\"right-separator\" type=\"button\" onclick=\"sendStartRequest('/on')\">ON</button>\n"
                   "                <button class=\"left-separator\" type=\"button\" onclick=\"sendRequest('/off')\">OFF</button>\n"
                   "            </div>\n"
                   "        </div>\n"
                   "        <div class=\"card\">\n"
                   "            <h2>Slew Control</h2>\n"
                   "            <div class=\"grid2\">\n"
                   "                <h3>Speed:</h3>\n"
                   "                <select aria-label=\"slew\" id='slew-select' onchange=\"checkCustom();\">\n"
                   "                    <option value='2'>2 x Tracking Rate</option>\n"
                   "                    <option value='8'>8</option>\n"
                   "                    <option value='50'>50</option>\n"
                   "                    <option value='100'>100</option>\n"
                   "                    <option value='200'>200</option>\n"
                   "                    <option value='400'>400</option>\n"
                   "                    <option value='custom'>custom</option>\n"
                   "                </select>\n"
                   "                <h3 id='custom-speed-text' style=\"display:none\";>Custom Speed:</h3>\n"
                   "                <input id='custom-speed' type='number' value='2' min='2' style=\"display:none\";/>\n"
                   "                <br>\n"
                   "            </div>\n"
                   "            <div class=\"button-group\">\n"
                   "                <button class=\"left-separator\" type=\"button\" ontouchstart=\"sendSlewRequest('/left')\" onmousedown=\"sendSlewRequest('/left')\" ontouchend=\"sendSlewStop()\" onmouseup=\"sendSlewStop()\">&lt;</button>\n"
                   "                <button class=\"right-separator\" type=\"button\" ontouchstart=\"sendSlewRequest('/right')\" onmousedown=\"sendSlewRequest('/right')\" ontouchend=\"sendSlewStop()\" onmouseup=\"sendSlewStop()\">&gt;</button>\n"
                   //                   "                <button class=\"left-separator\" type=\"button\"  onmousedown=\"sendSlewRequest('/left')\"  onmouseup=\"sendSlewStop()\">&lt;</button>\n"
                   //                   "                <button class=\"right-separator\" type=\"button\"  onmousedown=\"sendSlewRequest('/right')\"  onmouseup=\"sendSlewStop()\">&gt;</button>\n"
                   "            </div>\n"
                   "        </div>\n"
                   "        <div class=\"card\">\n"
                   "            <h2>Photo Control</h2>\n"
                   "            <div class=\"grid2\">\n"
                   "                <h3>Exposure lenght:</h3>\n"
                   "                <input type='number' id='exposure' placeholder='in seconds (Ex. 30)'>\n"
                   "            </div>\n"
                   "            <div class=\"grid2\">\n"
                   "                <h3>Number exposures:</h3>\n"
                   "                <input type='number' id='num-exposures' placeholder='nº of photos (Ex. 20)'>\n"
                   "            </div>\n"
                   "            <details>\n"
                   "                <summary>Dither Settings</summary>\n"
                   "                <!-- Content inside the collapsible section -->\n"
                   "                <div class=\"grid2\">\n"
                   "                    <h3>Dithering Enable:</h3>\n"
                   "                    <input class=\"checkbox\" aria-label=\"Dithering\" type=\"checkbox\" id=\"dither_on\" %dither%>\n"
                   "                </div>\n"
                   "                <div class=\"grid2\">\n"
                   "                    <h3>Lens focal lenght:</h3>\n"
                   "                    <input type=\"number\" id=\"focal_len\" placeholder='in milimiters (Ex. 135)' value='%focallen%'>\n"
                   "                </div>\n"
                   "                <div class=\"grid2\">\n"
                   "                    <h3>Camera pixel size:</h3>\n"
                   "                    <input type=\"number\" id=\"pixel_size\" placeholder='in micrometer (Ex. 4.1)' value='%pixsize%' step=\"0.01\">\n"
                   "                </div>\n"
                   "            </details>\n"
                   "            <div class=\"button-group\">\n"
                   "                <button class=\"right-separator\" type=\"button\" onclick=\"sendCaptureRequest()\">Start capture</button>\n"
                   "                <button class=\"left-separator\" type=\"button\" onclick=\"sendRequest('/abort')\">Abort capture</button>\n"
                   "            </div>\n"
                   "        </div>\n"
                   "        <div class=\"card\">\n"
                   "            <h2>Status</h2>\n"
                   "            <p id='status'>Test Message</p>\n"
                   "        </div>\n"
                   "    </div>\n"
                   "</body>\n"
                   "\n"
                   "</html>";
