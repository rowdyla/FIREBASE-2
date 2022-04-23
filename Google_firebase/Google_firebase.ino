#include <M5StickCPlus.h>

#include <IOXhop_FirebaseESP32.h>
#include <IOXhop_FirebaseStream.h>
int BUILTIN_LED = 10;

#include <WiFi.h>

#include "secret.h"
const char* ssid     = SECRET_SSID;
const char* password = SECRET_PASS;

#define BUILTIN_LED 10 
void setup() {
  // put your setup code here, to run once:
  pinMode to pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  delay(1000);
  pinMode(BUILTIN_LED,OUTPUT);
  Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
    M5.begin;
  }



void loop() {
  // put your main code here, to run repeatedly:

}
