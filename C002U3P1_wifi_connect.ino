#include <ESP8266WiFi.h>

    const char* ssid     = "YOUR NETWORK SSID";
    const char* password = "PASSWORD";     

    int wifiStatus;
     
    void setup() {
      
      Serial.begin(9600);
      delay(200);
      Serial.println();
      Serial.println();
      Serial.print("Your are connecting to;");
      Serial.println(ssid);
      WiFi.begin(ssid, password);
      delay(2000);
      
     
 }   
     
void loop() {
        wifiStatus = WiFi.status();

      if(wifiStatus == WL_CONNECTED){
         Serial.println("");
         Serial.println("Your WiFi is connected!");  
         Serial.println("Your IP address is: ");
         Serial.println(WiFi.localIP());  
      }
      else{
        Serial.println("WiFi not connected");
      }
      

     

}

