#include <Arduino.h>

// Definer vores pins ud fra din fine ledningsføring
const int pinX = A0;      // VRx (Grøn ledning)
const int pinY = A1;      // VRy (Blå ledning)
const int pinSW = 2;      // SW (Pink ledning)

void setup() {
  // Sæt baud-rate til 115200 for at fjerne latency (hastigheds-forsinkelse)
  Serial.begin(115200);
  
  // Konfigurer trykknappen med indbygget pull-up modstand
  pinMode(pinSW, INPUT_PULLUP);
}

void loop() {
  // 1. Læs de analoge værdier (X og Y giver normalt mellem 0 og 1023)
  int xVal = analogRead(pinX);
  int yVal = analogRead(pinY);
  
  // 2. Læs den digitale knap (LOW = trykket ned, HIGH = sluppet)
  int swVal = digitalRead(pinSW);
  bool isPressed = (swVal == LOW);

  // 3. Tilføj en "Deadzone" til midterpositionen (så slidte komponenter ikke hopper)
  // Normal midte er ca. 512. Hvis værdien er tæt på, tvinger vi den til præcis 512.
  if (xVal > 490 && xVal < 530) xVal = 512;
  if (yVal > 490 && yVal < 530) yVal = 512;

  // 4. Print værdierne ud i Serial Monitor på én flot linje
  Serial.print("X-Akse: ");
  Serial.print(xVal);
  Serial.print("  |  Y-Akse: ");
  Serial.print(yVal);
  Serial.print("  |  Knap trykket: ");
  Serial.println(isPressed ? "JA" : "NEJ");

  // Lille delay på 50ms så skærmen ikke flimrer for hurtigt
  delay(50);
}
