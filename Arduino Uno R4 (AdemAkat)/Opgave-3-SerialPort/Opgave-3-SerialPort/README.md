# Opgave 3: Serial Port & LED Matrix

# Introduktion og Mål
Målet med denne opgave var at lære at bruge Arduinoens indbyggede serielle port (UART-protokol) til at sende og modtage data mellem computeren og microcontrollere via USB-kablet. Opgaven kulminerede i at modtage tekstbeskeder fra computeren og printe dem ud på Arduinoens indbyggede 12x8 LED Matrix-skærm.

# Hardware anvendt:
* Arduino Uno R4 WiFi
* USB-C kabel

---

# Projektets opbygning og delopgaver
Opgaven blev løst i PlatformIO og opdelt i tre faser:
1. **Del 1 (Send):** Arduinoen blev programmeret til at sende en tekststreng (`"Hello, World from Arduino!"`) til computeren hvert sekund med en baud-rate på 9600.
2. **Del 2 (Modtag):** Arduinoen lyttede på den serielle port vha. `Serial.available()` og returnerede de indtastede beskeder tilbage til Serial Monitor.
3. **Del 3 (LED Matrix):** Ved brug af de officielle biblioteker `ArduinoGraphics` og `Arduino_LED_Matrix` blev den modtagne tekst konverteret, så den ruller live hen over det fysiske LED-display på printet.

---

# Resultat
Opgaven er fuldført med succes. Kommunikation over den serielle port fungerer fejlfrit i begge retninger, og indtastet tekst i Serial Monitor ruller hen over Arduinoens LED Matrix som forventet.
