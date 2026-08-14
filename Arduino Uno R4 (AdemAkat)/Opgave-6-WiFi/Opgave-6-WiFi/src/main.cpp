#include <Arduino.h>
#include <WiFiS3.h>

char ssid[] = "prog";
char pass[] = "1234567890";

void setup() {
  // Vi bruger hastighed 115200 for hurtig kommunikation uden forsinkelse
  Serial.begin(115200);
  
  // Giver computeren 2 sekunder til at åbne porten i stedet for at låse programmet
  delay(2000); 

  Serial.print("Forbinder til WiFi: ");
  Serial.println(ssid);

  // Forsøg at oprette forbindelse til netværket
  while (WiFi.begin(ssid, pass) != WL_CONNECTED) {
    delay(2000);
    Serial.println("Forbinder...");
  }

  Serial.println("Forbundet med succes!");
  Serial.println("-------------------------------------");

  // Vi tvinger koden til at vente, indtil routeren har givet os en rigtig IP
  while (WiFi.localIP() == IPAddress(0, 0, 0, 0)) {
    delay(1000);
    Serial.println("Henter IP-adresse fra routeren...");
  }

  // OPGAVE: Udskriv den IP-adresse, som Arduinoen har fået tildelt
  IPAddress ip = WiFi.localIP();
  Serial.print("Arduinoens IP-adresse: ");
  Serial.println(ip);

  // OPGAVE: Udskriv netværkets signalstyrke (RSSI)
  long rssi = WiFi.RSSI();
  Serial.print("Signalstyrke (RSSI): ");
  Serial.print(rssi);
  Serial.println(" dBm");
  Serial.println("-------------------------------------");
}

void loop() {
  // Sektionen holdes tom, da vi kun behøver at forbinde én gang i setup
}
