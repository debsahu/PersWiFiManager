/* PersWiFiManager
   version 3.0.1
   https://r-downing.github.io/PersWiFiManager/
*/

#include "PersWiFiManager.h"

#ifdef WIFI_HTM_PROGMEM
const char wifi_htm[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta name="viewport" content="width=device-width, initial-scale=1, user-scalable=no"/><title>ESP WiFi</title><script>function g(i){return document.getElementById(i);};function p(t,l){if(confirm(t)) window.location=l;};function E(s){return document.createElement(s)};var S="setAttribute",A="appendChild",H="innerHTML",X,wl;function scan(){if(X) return;X=new XMLHttpRequest(),wl=document.getElementById('wl');wl[H]="Scanning...";X.onreadystatechange=function(){if (this.readyState==4&&this.status==200){X=0;wl[H]="";this.responseText.split("\n").forEach(function (e){let t=e.split(","), s=t.slice(2).join(',');var d=E('div'),i=E('a'),c=E('a');i[S]('class','s'); c[S]('class','q');i.onclick=function(){g('s').value=s;g('p').focus();};i[A](document.createTextNode(s));c[H]=t[0]+"%"+(parseInt(t[1])?"\uD83D\uDD12":"\u26A0");wl[A](i); wl[A](c);wl[A](document.createElement('br'));});}};X.open("GET","wifi/list",true);X.send();};</script><style>input{padding:5px;font-size:1em;width:95%;}body{text-align:center;font-family:verdana;background-color:black;color:white;}a{color:#1fa3ec;}button{border:0;border-radius:0.3em;background-color:#1fa3ec;color:#fff;line-height:2.4em;font-size:1.2em;width:100%;display:block;}.q{float:right;}.s{display:inline-block;width:14em;overflow:hidden;text-overflow:ellipsis;white-space:nowrap;}#wl{line-height:1.5em;}</style></head><body><div style='text-align:left;display:inline-block;width:320px;padding:5px'><button onclick="scan()">&#x21bb; Scan</button><p id='wl'></p><form method='post' action='/wifi/connect'><input id='s' name='n' length=32 placeholder='SSID'><br><input id='p' name='p' length=64 type='password' placeholder='password'><br><br><button type='submit'>Connect</button></form><br><br><button onclick="p('Reboot device?','/wifi/rst')">Reboot</button><br><a href="javascript:history.back()">Back</a> |<a href="/">Home</a></div></body></html>)=====";
#endif
#ifdef WIFI_HTM_GZ_PROGMEM
#define wifi_htm_gz_len 1159
static const uint8_t wifi_htm_gz[] PROGMEM = {
  0x1f, 0x8b, 0x08, 0x08, 0x6a, 0x13, 0x1e, 0x5a, 0x02, 0x0b, 0x77, 0x69,
  0x66, 0x69, 0x2e, 0x6d, 0x69, 0x6e, 0x2e, 0x68, 0x74, 0x6d, 0x00, 0x85,
  0x56, 0x6d, 0x6f, 0xdb, 0x36, 0x10, 0xfe, 0x2b, 0x1c, 0x8b, 0x56, 0x12,
  0x6a, 0xcb, 0x2f, 0x69, 0x8a, 0x4d, 0x12, 0x5d, 0xa4, 0x89, 0xbb, 0x04,
  0x68, 0xb7, 0xa0, 0x0e, 0xd0, 0x0c, 0x69, 0x3e, 0xd0, 0x12, 0x65, 0xb1,
  0xa5, 0x49, 0x96, 0xa4, 0xac, 0x78, 0x9e, 0xff, 0xfb, 0x8e, 0x92, 0xed,
  0xb8, 0x0b, 0xda, 0x01, 0xb6, 0xc2, 0x3b, 0xdf, 0x3d, 0xf7, 0x1c, 0xef,
  0x45, 0xc9, 0x7e, 0xb9, 0xf8, 0xf3, 0xfc, 0xe6, 0xaf, 0xeb, 0x29, 0xaa,
  0xdc, 0x52, 0x4c, 0xb2, 0xdd, 0x93, 0xd1, 0x62, 0x92, 0x2d, 0x99, 0xa3,
  0x48, 0xd2, 0x25, 0x23, 0x78, 0xc5, 0x59, 0xa3, 0x95, 0x71, 0x18, 0xe5,
  0x4a, 0x3a, 0x26, 0x1d, 0xc1, 0x0d, 0x2f, 0x5c, 0x45, 0x0a, 0xb6, 0xe2,
  0x39, 0xeb, 0xb7, 0x42, 0x0f, 0x71, 0xc9, 0x1d, 0xa7, 0xa2, 0x6f, 0x73,
  0x2a, 0x18, 0x19, 0xf5, 0x50, 0x6d, 0x99, 0x69, 0x25, 0x3a, 0x07, 0x85,
  0x54, 0x78, 0x30, 0xc9, 0x1c, 0x77, 0x82, 0x4d, 0xa6, 0xb3, 0x6b, 0xf4,
  0x89, 0xbf, 0xe3, 0xd9, 0xa0, 0x93, 0x33, 0x9b, 0x1b, 0xae, 0xdd, 0xa4,
  0xac, 0x65, 0xee, 0xb8, 0x92, 0x68, 0x11, 0xf2, 0x68, 0x63, 0x98, 0xab,
  0x8d, 0x44, 0x85, 0xca, 0xeb, 0x25, 0x44, 0x8d, 0x17, 0xcc, 0x4d, 0x05,
  0xf3, 0xc7, 0xb7, 0xeb, 0xab, 0x02, 0x2c, 0xd2, 0x6d, 0x7a, 0xf0, 0xd0,
  0xa1, 0xeb, 0x89, 0x68, 0xc3, 0xcb, 0x10, 0x48, 0x96, 0xdc, 0x2c, 0x43,
  0x17, 0x45, 0xa8, 0xe1, 0xb2, 0x50, 0x4d, 0x2c, 0x54, 0x4e, 0xbd, 0x15,
  0x11, 0xc7, 0x2e, 0xd3, 0xd0, 0x3e, 0x0d, 0x92, 0x1b, 0x46, 0x1d, 0xdb,
  0xc5, 0x01, 0x83, 0x6d, 0xba, 0xa2, 0x06, 0xcd, 0x08, 0xb6, 0xcc, 0x9d,
  0x39, 0x67, 0xf8, 0xbc, 0x76, 0x0c, 0xf7, 0xce, 0x08, 0xa6, 0x5a, 0x33,
  0x59, 0x9c, 0x57, 0x5c, 0x14, 0xb8, 0x77, 0x49, 0x30, 0x97, 0x92, 0x99,
  0xcb, 0x9b, 0x0f, 0xef, 0x71, 0xef, 0xb6, 0xd7, 0x88, 0xc7, 0x38, 0x70,
  0x05, 0x32, 0x6c, 0xa9, 0xdd, 0x46, 0xa8, 0x8b, 0x97, 0xde, 0x12, 0xc9,
  0x1a, 0x74, 0xfb, 0xe1, 0xfd, 0xa5, 0x73, 0xfa, 0x23, 0xfb, 0x56, 0x33,
  0xeb, 0xc2, 0x08, 0xdc, 0xc8, 0x8f, 0xd2, 0x0d, 0x1a, 0x11, 0x44, 0x69,
  0x23, 0xee, 0x2e, 0xef, 0x09, 0x9e, 0x01, 0xa4, 0xe4, 0x72, 0x11, 0xc7,
  0x31, 0x4e, 0x6f, 0x63, 0x25, 0x81, 0x75, 0xb1, 0xb6, 0x0e, 0xa8, 0xe7,
  0x15, 0x95, 0x0b, 0x46, 0xf6, 0xd1, 0xdb, 0xc0, 0x28, 0x74, 0x15, 0xb7,
  0x71, 0x6b, 0x34, 0xf3, 0x46, 0x84, 0xbc, 0x7a, 0xf1, 0xa2, 0xd5, 0x79,
  0x9f, 0xda, 0x12, 0x32, 0x1e, 0x0e, 0xa3, 0xcd, 0x2d, 0x19, 0xee, 0x23,
  0xe0, 0x74, 0xe7, 0x62, 0xb5, 0x92, 0x96, 0xdd, 0xb0, 0x07, 0x17, 0x5b,
  0x2d, 0xb8, 0x0b, 0xf1, 0x67, 0x89, 0xa3, 0xb8, 0x54, 0x66, 0x4a, 0xf3,
  0x2a, 0x3c, 0x64, 0x19, 0xb2, 0x68, 0x23, 0x98, 0x43, 0x8e, 0xb0, 0xbd,
  0x61, 0x0f, 0x47, 0x3d, 0x64, 0x09, 0x38, 0x0a, 0xe8, 0x93, 0x70, 0x1c,
  0xc5, 0x5f, 0x14, 0x97, 0x61, 0xd0, 0x83, 0x44, 0xfc, 0xad, 0x16, 0x64,
  0x1a, 0x06, 0x05, 0x5f, 0x05, 0x51, 0x8f, 0xfb, 0x23, 0x85, 0x43, 0xbe,
  0x3b, 0xa4, 0xfc, 0x6e, 0x76, 0x1f, 0x06, 0xb9, 0xa0, 0xd6, 0x82, 0x83,
  0x05, 0x0d, 0xca, 0xbf, 0x53, 0x7d, 0xf3, 0x46, 0x90, 0x7a, 0x0e, 0xe0,
  0x5f, 0x8f, 0xf3, 0x5d, 0x84, 0xde, 0x3c, 0x5e, 0x51, 0x51, 0x33, 0x62,
  0x53, 0x10, 0x75, 0xe0, 0x09, 0xe7, 0xb5, 0x0d, 0x7d, 0xcf, 0xf0, 0xbb,
  0xb3, 0xfb, 0xf0, 0x3f, 0x05, 0xf7, 0xf9, 0xfd, 0xa1, 0x0a, 0x06, 0x15,
  0x8f, 0xd2, 0xdc, 0xdf, 0x80, 0xbb, 0x1b, 0xde, 0xbf, 0xc4, 0xcf, 0xf1,
  0xcb, 0x50, 0x53, 0x63, 0xd9, 0x15, 0x74, 0x83, 0xbb, 0x1b, 0xdd, 0x47,
  0x6f, 0xf0, 0xe7, 0xfa, 0xe2, 0xd7, 0x93, 0x0b, 0x78, 0x5e, 0x8c, 0xc6,
  0x38, 0x01, 0x71, 0xfc, 0xfa, 0x6c, 0x88, 0xdb, 0xda, 0x00, 0x30, 0xb4,
  0x25, 0xea, 0x4e, 0xf9, 0x5e, 0xf5, 0x83, 0xe6, 0x0a, 0xe6, 0x26, 0x80,
  0x68, 0x5b, 0xf8, 0x6c, 0x7d, 0x11, 0xa1, 0x9d, 0x42, 0xfc, 0xfb, 0xf4,
  0x06, 0xee, 0xad, 0xe1, 0x25, 0x1f, 0x08, 0x6e, 0x1d, 0xee, 0x39, 0x53,
  0xb3, 0x08, 0x7e, 0xb6, 0xd0, 0x6c, 0x2d, 0xfd, 0x6c, 0xb0, 0x9b, 0x96,
  0xcc, 0xba, 0x35, 0x0c, 0x0f, 0x97, 0xba, 0x76, 0x1b, 0x4d, 0x8b, 0x02,
  0x1a, 0x22, 0x39, 0xd5, 0x0f, 0x69, 0x09, 0x63, 0xda, 0xb7, 0xfc, 0x6f,
  0x96, 0x8c, 0xd8, 0x32, 0x6d, 0xc7, 0x33, 0xf9, 0xed, 0xf4, 0x79, 0x5a,
  0x72, 0xe1, 0x98, 0x49, 0xb8, 0x5c, 0x31, 0xe3, 0xc2, 0xd1, 0x70, 0xf8,
  0x1c, 0xf0, 0xe6, 0xaa, 0x58, 0x6f, 0x1c, 0xa4, 0xdf, 0xa7, 0x82, 0x2f,
  0x64, 0x92, 0x03, 0x35, 0x66, 0x3a, 0x8c, 0x92, 0x2e, 0xb9, 0x58, 0x27,
  0x60, 0x5e, 0x50, 0x49, 0xd3, 0x39, 0xcd, 0xbf, 0x2e, 0x8c, 0xaa, 0x65,
  0xd1, 0xcf, 0x95, 0x50, 0x26, 0x99, 0x0b, 0xd0, 0xa4, 0xdd, 0xb9, 0xa9,
  0xb8, 0x63, 0xe9, 0x96, 0x6e, 0x3a, 0xf1, 0xd9, 0xa8, 0xa4, 0x27, 0x2c,
  0x07, 0xfc, 0xda, 0x39, 0x25, 0x37, 0x73, 0x65, 0x0a, 0x88, 0x3d, 0x4c,
  0xbb, 0x43, 0xdf, 0xd0, 0x82, 0xd7, 0x36, 0x19, 0xc6, 0x27, 0x40, 0xf1,
  0x09, 0xf0, 0xde, 0x7b, 0x27, 0x95, 0x65, 0x99, 0x0a, 0x2e, 0x59, 0xbf,
  0x62, 0x7c, 0x51, 0xb9, 0x64, 0x1c, 0xbf, 0x02, 0xaf, 0xa3, 0x34, 0xe3,
  0xf1, 0x21, 0x51, 0x9f, 0x56, 0x5a, 0x70, 0x68, 0x41, 0xba, 0x06, 0x82,
  0x0a, 0x08, 0x6e, 0xe3, 0x6f, 0x9b, 0x52, 0x28, 0xea, 0x12, 0xe3, 0xdd,
  0x41, 0xb6, 0x9b, 0xbd, 0x05, 0x97, 0x2d, 0x70, 0x67, 0xb8, 0x43, 0xf0,
  0xe0, 0x0a, 0x92, 0x06, 0x9f, 0x26, 0xa9, 0x78, 0x51, 0x30, 0x99, 0xb6,
  0x37, 0x74, 0x50, 0x32, 0x21, 0xb8, 0xb6, 0xdc, 0xa6, 0x6d, 0xd6, 0x7d,
  0xab, 0x69, 0xce, 0x12, 0xa9, 0x1a, 0x43, 0x75, 0xba, 0x7d, 0xd6, 0x88,
  0xcd, 0x31, 0xdb, 0x51, 0x7c, 0x0a, 0x80, 0x5b, 0xa8, 0x5b, 0x5b, 0xaf,
  0x6c, 0xd0, 0x6d, 0x58, 0x7f, 0xf1, 0x93, 0x0c, 0xda, 0x1f, 0xb5, 0x7a,
  0x12, 0x1c, 0x15, 0x41, 0xb0, 0xd2, 0xa5, 0x3f, 0xa1, 0x78, 0x32, 0x1e,
  0x42, 0x9d, 0x8f, 0x6a, 0x1e, 0x00, 0x5e, 0x7b, 0xd1, 0x68, 0x3f, 0x10,
  0xb8, 0x5b, 0x3b, 0x78, 0xf2, 0xe2, 0xd9, 0xc3, 0x78, 0x34, 0x9f, 0xa7,
  0xc8, 0x2f, 0x8d, 0x6c, 0xd0, 0x99, 0x4d, 0x32, 0x8d, 0x78, 0x41, 0xfc,
  0x52, 0x01, 0x42, 0x7a, 0x92, 0xc1, 0x3c, 0x2f, 0x11, 0x2c, 0xfd, 0x4a,
  0x81, 0x56, 0x2b, 0xeb, 0x02, 0x44, 0xdb, 0x81, 0x22, 0xc1, 0xa0, 0xed,
  0x46, 0x58, 0xab, 0x92, 0xe5, 0x0e, 0xcc, 0xdb, 0x86, 0x6b, 0xbd, 0x6d,
  0xd0, 0xbd, 0x22, 0x02, 0x19, 0x20, 0xc1, 0xe4, 0x02, 0xde, 0x09, 0x27,
  0x63, 0x04, 0xa4, 0x73, 0x56, 0x29, 0x01, 0x65, 0x26, 0xc1, 0x6c, 0x76,
  0x75, 0xe1, 0xc9, 0x99, 0x63, 0x3f, 0xbd, 0xf7, 0xd3, 0x07, 0xbf, 0xd7,
  0xaf, 0x90, 0x5b, 0x6b, 0xaf, 0x82, 0xe9, 0x6e, 0xa0, 0x47, 0x82, 0xef,
  0x71, 0x0e, 0xea, 0x0e, 0xab, 0xfd, 0x76, 0x09, 0x77, 0x6e, 0xb6, 0x9e,
  0x2f, 0x39, 0xb0, 0x3b, 0xef, 0x68, 0x3e, 0xe6, 0x39, 0xf0, 0x99, 0x3d,
  0x71, 0x3a, 0xdc, 0x92, 0x0e, 0x03, 0xd8, 0x88, 0xc6, 0xa1, 0x4f, 0xd7,
  0xb3, 0x37, 0xb0, 0x55, 0xba, 0x64, 0x1b, 0x0d, 0x1b, 0x04, 0x4f, 0x40,
  0x87, 0x66, 0xb0, 0xb0, 0xf5, 0x23, 0xdc, 0x4f, 0x31, 0xce, 0xae, 0xd1,
  0x12, 0x96, 0xc8, 0x23, 0x0e, 0xd5, 0x1e, 0x06, 0xd4, 0x1f, 0x40, 0xfd,
  0xbf, 0x20, 0x1f, 0xd9, 0x5c, 0x29, 0x87, 0xba, 0xd7, 0xea, 0x23, 0x88,
  0x81, 0x62, 0x00, 0x4a, 0xf7, 0xeb, 0xf7, 0x20, 0x14, 0x55, 0x86, 0x95,
  0x04, 0x7f, 0xa1, 0x2b, 0xda, 0x6d, 0x05, 0xe8, 0x57, 0xeb, 0x94, 0x59,
  0xc7, 0x7e, 0xa6, 0x7c, 0xf9, 0xdf, 0xc2, 0xdf, 0x6c, 0x40, 0x27, 0xe8,
  0x1f, 0x74, 0x30, 0x1f, 0xe0, 0xc9, 0xa5, 0x5a, 0x32, 0xaf, 0xce, 0x06,
  0xd0, 0x81, 0xf0, 0xec, 0xba, 0x71, 0xd0, 0xfe, 0x0b, 0xf0, 0x2f, 0x63,
  0xc4, 0x35, 0x73, 0x18, 0x08, 0x00, 0x00
};
#endif

PersWiFiManager::PersWiFiManager(AsyncWebServer &s, AsyncDNSServer &d, const fs::FS& fs):_fs(fs)
{
  _aserver = &s;
  _adnsServer = &d;
  _apPass = "";
} //PersWiFiManager

bool PersWiFiManager::attemptConnection(const String &ssid, const String &pass)
{
  //attempt to connect to wifi
  WiFi.mode(WIFI_STA);
  if (ssid.length())
  {
    if(Serial) Serial.printf("Connecting to SSID: %s\n", ssid.c_str());
    if (pass.length())
      WiFi.begin(ssid.c_str(), pass.c_str());
    else
      WiFi.begin(ssid.c_str());
  }
  else
  {
    if(Serial) Serial.printf("Connecting to previously stored WiFi credentials.\n");
    WiFi.begin();
  }

  //if in nonblock mode, skip this loop
  _connectStartTime = millis();
  do
  {
    handleWiFi();
    yield();
  }
  while (!_connectNonBlock && _connectStartTime);

  return (WiFi.status() == WL_CONNECTED);

} //attemptConnection

void PersWiFiManager::handleWiFi()
{
  if (!_connectStartTime)
    return;

  if (WiFi.status() == WL_CONNECTED)
  {
    _connectStartTime = 0;
    if (_connectHandler)
      _connectHandler();
    return;
    if (Serial) { 
      Serial.print("Router IP: ");
      Serial.println(WiFi.localIP());
    }
  }

  //if failed or not connected and time is up
  if ((WiFi.status() == WL_CONNECT_FAILED) || ((WiFi.status() != WL_CONNECTED) && ((millis() - _connectStartTime) > (1000 * WIFI_CONNECT_TIMEOUT))))
  {
    startApMode();
    _connectStartTime = 0; //reset connect start time
  }

} //handleWiFi

void PersWiFiManager::startApMode()
{
  //start AP mode
  IPAddress apIP(192, 168, 1, 1);
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(apIP, apIP, IPAddress(255, 255, 255, 0));
  _apPass.length() ? WiFi.softAP(getApSsid().c_str(), _apPass.c_str()) : WiFi.softAP(getApSsid().c_str());
  if(Serial) {
    Serial.print("Started AP mode, IP: ");
    Serial.println(WiFi.softAPIP());
    Serial.println("--------------");
  }
  if (_apHandler)
    _apHandler();
} //startApMode

void PersWiFiManager::setConnectNonBlock(bool b)
{
  _connectNonBlock = b;
} //setConnectNonBlock

void PersWiFiManager::setupWiFiHandlers()
{
  if (Serial)
  {
    Serial.println("\n\n---------------------------");
    Serial.println("Starting SPIFFs...");
  }

  if (_fs.begin())
  {
    Dir dir = _fs.openDir("/");
    while (dir.next())
    {
      String fileName = dir.fileName();
      size_t fileSize = dir.fileSize();
      if (Serial)
        Serial.printf("FS File: %s, size: %dB\n", fileName.c_str(), fileSize);
    }

    FSInfo fs_info;
    _fs.info(fs_info);
    if (Serial)
    {
      Serial.printf("FS Usage: %d/%d bytes\n\n", fs_info.usedBytes, fs_info.totalBytes);
      Serial.println("SPIFFs started");
    }
  }

  IPAddress apIP(192, 168, 1, 1);
  _adnsServer->setErrorReplyCode(AsyncDNSReplyCode::NoError);
  _adnsServer->start((byte)53, "*", apIP); //used for captive portal in AP mode

  _aserver->on("/wifi/list", HTTP_GET, [](AsyncWebServerRequest *request) {
    //scan for wifi networks
    String s = "Scan again after 3-5s";
    s.reserve(2050);

    int n = WiFi.scanComplete();
    if (n == -2)
    {
      WiFi.scanNetworks(true);
    }
    else if (n)
    {
      //build array of indices
      int ix[n];
      for (int i = 0; i < n; i++)
        ix[i] = i;

      //sort by signal strength
      for (int i = 0; i < n; i++)
        for (int j = 1; j < n - i; j++)
          if (WiFi.RSSI(ix[j]) > WiFi.RSSI(ix[j - 1]))
            std::swap(ix[j], ix[j - 1]);
      //remove duplicates
      for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
          if (WiFi.SSID(ix[i]).equals(WiFi.SSID(ix[j])) && WiFi.encryptionType(ix[i]) == WiFi.encryptionType(ix[j]))
            ix[j] = -1;

      //build plain text string of wifi info
      //format [signal%]:[encrypted 0 or 1]:SSID
      s="";
      for (int i = 0; i < n && s.length() < 2000; i++)
      { //check s.length to limit memory usage
        if (ix[i] != -1)
        {
          s += String(i ? "\n" : "") + ((constrain(WiFi.RSSI(ix[i]), -100, -50) + 100) * 2) + "," + ((WiFi.encryptionType(ix[i]) == ENC_TYPE_NONE) ? 0 : 1) + "," + WiFi.SSID(ix[i]);
        }
      }
      WiFi.scanDelete();
      if (WiFi.scanComplete() == -2)
      {
        WiFi.scanNetworks(true);
      }
    }
    if (Serial)
    {
      Serial.print("Sending >>>>>>>>>>>>>\n");
      Serial.println(s);
      Serial.println("<<<<<<<<<<<<<<<<<<<<<");
    }

    //send string to client
    request->send(200, "text/plain", s);
    s = String();
  }); //_aserver->on /wifi/list

  _aserver->on("/wifi/connect", HTTP_POST, [&](AsyncWebServerRequest *request) {
    request->send(200, "text/html", "<META http-equiv='refresh' content='15;URL=/'> Connecting...");
    if (request->hasArg("n") and request->hasArg("p"))
      attemptConnection(request->arg("n"), request->arg("p"));
  }); //_aserver->on /wifi/connect

  _aserver->on("/wifi/ap", HTTP_GET, [&](AsyncWebServerRequest *request) {
    request->send(200, "text/html", "<META http-equiv='refresh' content='15;URL=/'> Access point: " + getApSsid());
    startApMode();
  }); //_aserver->on /wifi/ap

  _aserver->on("/wifi/restart", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", "<META http-equiv='refresh' content='15;URL=/'> Rebooting...");
    //delay(100);
    //ESP.restart();
    // Adding Safer Restart method
    ESP.wdtDisable();
    ESP.reset();
  }); //_aserver->on /wifi/restart

  _aserver->on("/wifi/reset", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", "<META http-equiv='refresh' content='15;URL=/'> Erasing WiFi credentials and Rebooting...");
    WiFi.disconnect(); //erases wifi credentials
    ESP.wdtDisable();
    ESP.reset();
  }); //_aserver->on /wifi/reset


  _aserver->addHandler(new SPIFFSEditor(_fsUser, _fsPass));

  _aserver->onNotFound([&](AsyncWebServerRequest *request) {
    String filename = request->url();
    String ContentType = "text/plain";

    if (filename.endsWith(".htm"))
      ContentType = "text/html";
    else if (filename.endsWith(".html"))
      ContentType = "text/html";
    else if (filename.endsWith(".css"))
      ContentType = "text/css";
    else if (filename.endsWith(".js"))
      ContentType = "application/javascript";
    else if (filename.endsWith(".png"))
      ContentType = "image/png";
    else if (filename.endsWith(".gif"))
      ContentType = "image/gif";
    else if (filename.endsWith(".jpg"))
      ContentType = "image/jpeg";
    else if (filename.endsWith(".ico"))
      ContentType = "image/x-icon";
    else if (filename.endsWith(".xml"))
      ContentType = "text/xml";
    else if (filename.endsWith(".pdf"))
      ContentType = "application/x-pdf";
    else if (filename.endsWith(".zip"))
      ContentType = "application/x-zip";
    else if (filename.endsWith(".gz"))
      ContentType = "application/x-gzip";
    else if (filename.endsWith("ico.gz"))
      ContentType = "image/x-icon";

    if (_fs.exists(filename + ".gz") || _fs.exists(filename))
    {
      if (_fs.exists(filename + ".gz"))
        filename += ".gz";
      AsyncWebServerResponse *response = request->beginResponse(SPIFFS, filename, ContentType);
      if (filename.endsWith(".gz"))
        response->addHeader("Content-Encoding", "gzip");
      request->send(response);
      return;
    }

    request->redirect("/wifi"); // send all DNS requests to wifi
  });

#ifdef WIFI_HTM_PROGMEM
  _aserver->on("/wifi", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send_P(200, "text/html", wifi_htm);
  });
#endif

#ifdef WIFI_HTM_GZ_PROGMEM
  _aserver->on("/wifi", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", wifi_htm_gz, wifi_htm_gz_len);
    response->addHeader("Content-Encoding", "gzip");
    request->send(response);
  });
#endif

} //setupWiFiHandlers

void PersWiFiManager::setFSCredentials(const String &http_user, const String &http_pass)
{
  if (http_user.length())
    _fsUser = http_user;
  if (http_pass.length() >= 8)
    _fsPass = http_pass;
} //setApCredentials

bool PersWiFiManager::begin(const String &ssid, const String &pass)
{
  setupWiFiHandlers();
  return attemptConnection(ssid, pass); //switched order of these two for return
} //begin

String PersWiFiManager::getApSsid()
{
  return _apSsid.length() ? _apSsid : "ESP8266";
} //getApSsid

void PersWiFiManager::setApCredentials(const String &apSsid, const String &apPass)
{
  if (apSsid.length())
    _apSsid = apSsid;
  if (apPass.length() >= 8)
    _apPass = apPass;
} //setApCredentials

void PersWiFiManager::onConnect(WiFiChangeHandlerFunction fn)
{
  _connectHandler = fn;
}

void PersWiFiManager::onAp(WiFiChangeHandlerFunction fn)
{
  _apHandler = fn;
}