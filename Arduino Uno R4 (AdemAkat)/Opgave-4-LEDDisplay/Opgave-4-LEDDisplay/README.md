# Opgave 4: LED Display & Grafik

# Introduktion og Mål
Målet med denne opgave var at få dybdegående kendskab til manipulation af Arduino UNO R4 WiFi'ens indbyggede 12x8 LED-matrix. Der blev arbejdet med både direkte pixel-styring via 2D-arrays og avanceret figur-tegning vha. grafik-biblioteker.

# Hardware anvendt:
* Arduino Uno R4 WiFi
* USB-C kabel

---

# Delopgaver og implementering
1. **Navn og alder (A2):** Kodet ved at oprette et specifikt `byte` 2D-array, hvor dioderne tændes individuelt (1 eller 0) for at forme initialet 'A' og alderen.
2. **Blinkende cursor:** Implementeret i `loop()` ved at tænde og slukke tre koordinater i øverste venstre hjørne med et `delay(500)`.
3. **Række-for-række animation:** Udviklet ved hjælp af nestede `for`-loops (løkker i løkker), der systematisk tænder x- og y-koordinaterne efter hinanden.
4. **Geometriske figurer:** Tegnet vha. `ArduinoGraphics` funktionerne `matrix.line()`, `matrix.circle()`, og `matrix.rect()`.

---

# Resultat
Opgaven er fuldført med succes. Alle visuelle animationer og figurer kører fejlfrit på hardwaren, og der er opnået fuld kontrol over LED-displayets koordinatsystem.
