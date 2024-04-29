#include "wifi_setup.h"

void setupWiFi() {
  // Setup ESP32 as Access Point
  WiFi.softAP(ssid, password);
}
