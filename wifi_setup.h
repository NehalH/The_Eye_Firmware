#ifndef WIFI_SETUP_H
#define WIFI_SETUP_H

#include "Arduino.h"
#include "WiFi.h"

extern const char* ssid;
extern const char* password;

void setupWiFi();

#endif // WIFI_SETUP_H
