#include <AWS_IOT.h>
#include <WiFi.h>
#include <ArduinoJson.h>
#include <Arduino.h>
#include "main.h"
//#include <WiFiManager.h>
AWS_IOT aws_iot;

int status = WL_IDLE_STATUS;
int tick = 0;
int msgCount = 0;

void setup()
{
  Serial.begin(9600);
     delay(2000);
    //  WiFiManager wifiManager;
    // wifiManager.autoConnect("skybot");
     while (status != WL_CONNECTED)
     {
         Serial.print("Attempting to connect to SSID: ");
         Serial.println(ssid);
         // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
         status = WiFi.begin(ssid, password);

         // wait 5 seconds for connection:
         delay(5000);
     }

     Serial.println("Connected to wifi");
     Serial.println("IP address: ");
     Serial.println(WiFi.localIP());
}

void loop()
{

}
