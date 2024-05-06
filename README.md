# The_Eye_Firmware

Firmware written in C++ for ESP32-CAM microcontroller (The Eye). And is a part of the "A-Eye" project.

## Functions
- Captures images on external user input (Pushdown button)
- Establishes a WiFi network and acts as an Accesspoint
- Runs a Web server with an API service
- Runs a Websocket server

## API and Websocket Endpoints
 - `http://192.168.4.1/` Captures and serves the image
 - `http://192.168.4.1/capture` Captures and saves image locally
 - `http://192.168.4.1/saved-photo` Serves the last captured image
 - `ws://192.168.4.1/ws` Websocket endpoint

## Other Related Projects
 - [Cortex](https://github.com/NehalH/Cortex) (Standalone version of the Cortex App)
 - [Websocket client](https://github.com/NehalH/WebSocket-client) (Browser websocket client for "The Eye")
 - [Cortex (Standalone)](https://github.com/NehalH/Cortex-standalone) (Standalone version of the Cortex App)
