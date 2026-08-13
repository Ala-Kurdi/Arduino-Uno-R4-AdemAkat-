#include <Arduino.h>
#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

void setup() {
  matrix.begin(); // Start displayet
}

void loop() {
  matrix.beginDraw();      // Start tegning
  matrix.stroke(0xFFFFFFFF); // Sæt "farven" til tændt LED
  
  // 1. Tegn en linje fra (x1=0, y1=5) til (x2=5, y2=7)
  matrix.line(0, 5, 5, 7);
  
  // 2. Tegn en cirkel med centrum i (x=8, y=3) og radius=6
  matrix.circle(8, 3, 6);
  
  // 3. Tegn et rektangel/firkant fra (x=0, y=0) med bredde=4, højde=4
  matrix.rect(0, 0, 4, 4);
  
  // 4. Tegn et enkelt punkt/pixel på (x=8, y=3)
  matrix.point(8, 3);
  
  matrix.endDraw(); // Vis figurerne på skærmen
  delay(1000);      // Hold billedet i 1 sekund
}
