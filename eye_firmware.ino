#include "Arduino.h"
#include "camera_setup.h"
#include "server_setup.h"
#include "wifi_setup.h"
#include "photo_functions.h"
#include "soc/soc.h"           // Disable brownout problems
#include "soc/rtc_cntl_reg.h"  // Disable brownout problems
#include "SPIFFS.h"

boolean takeNewPhoto;


AsyncWebServer server(80);

const char* ssid = "ESP32_AP";
const char* password = "password";

void setup() {
  // Serial port for debugging purposes
  Serial.begin(115200);

  // Setup button pin
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Setup ESP32 as Access Point
  setupWiFi();

  // Mount SPIFFS
  if (!SPIFFS.begin(true)) {
    Serial.println("An Error has occurred while mounting SPIFFS");
    ESP.restart();
  }
  else {
    delay(500);
    Serial.println("SPIFFS mounted successfully");
  }

  // Print ESP32 Local IP Address
  Serial.print("IP Address: http://");
  Serial.println(WiFi.softAPIP());

  // Turn-off the 'brownout detector'
  WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0);

  // Setup camera
  setupCamera();

  // Setup server
  setupServer();
}

void loop() {
  // Check button press or command to take a new photo
  if (digitalRead(BUTTON_PIN) == LOW || takeNewPhoto) {
    capturePhotoSaveSpiffs();
    takeNewPhoto = false;
  }
  delay(10);
}
