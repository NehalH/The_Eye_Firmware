#ifndef SERVER_SETUP_H
#define SERVER_SETUP_H

#include "Arduino.h"
#include <ESPAsyncWebServer.h>
#include <AsyncTCP.h>
#include "SPIFFS.h"

extern AsyncWebServer server;
extern AsyncWebSocket ws;

void setupServer();
void initWebSocket();
void notifyClients(uint8_t* imageData, size_t imageDataLength);

#endif // SERVER_SETUP_H
