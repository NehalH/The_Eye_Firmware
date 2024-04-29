#ifndef SERVER_SETUP_H
#define SERVER_SETUP_H

#include "Arduino.h"
#include <ESPAsyncWebServer.h>
#include "SPIFFS.h"

extern AsyncWebServer server;

void setupServer();

#endif // SERVER_SETUP_H
