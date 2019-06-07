#include <Arduino.h>
#include <WiFi.h>
#include <AWS_IOT.h>
#include <ArduinoJson.h>
#include <main.h>
//#include <WiFiManager.h>
AWS_IOT aws_iot;
int tick=0;
int msg_count=0;

int status = WL_IDLE_STATUS;
void setup() {
  Serial.begin(9600);
   WiFi.begin(ssid, password);
  while(WiFi.status() != WL_CONNECTED)
  {
    Serial.print("Attempting to connect SSID:");
    Serial.println(ssid);
    status =  WiFi.begin(ssid,password);
    delay(5000);
  }
  Serial.println();
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
   Serial.println(WiFi.localIP());
   if (aws_iot.connect(aws_mqtt_server, aws_mqtt_client_id) == 0)
       {
           Serial.println("Connected to AWS");
           delay(1000);
       }
       else
       {
           Serial.println("AWS connection failed, Check the HOST Address");
           while (1){
           delay(1000);
         }

       }

  delay(2000);
}

    void loop() {
      if(tick >= 5)
      {
        tick=0;


        unsigned int  buffersize = JSON_OBJECT_SIZE(2) +  20;
        DynamicJsonBuffer JsonBuffer(buffersize);

        JsonObject &root = JsonBuffer.createObject();
        root["payload"] = msg_count++;
        root["thing_id"] = thing_id;

        String json_output;
        root.printTo(json_output);
        char payload[buffersize];

        json_output.toCharArray(payload,buffersize);
        sprintf(payload,json_output.c_str());

        if(aws_iot.publish(aws_mqtt_thing_topic_pub,payload) == 0)
        {
          Serial.println("Publish message");
          Serial.println(payload);
        }else{
          Serial.println("Publish failed");
        }
      }
      vTaskDelay(1000/portTICK_RATE_MS);
      tick++;
    }
