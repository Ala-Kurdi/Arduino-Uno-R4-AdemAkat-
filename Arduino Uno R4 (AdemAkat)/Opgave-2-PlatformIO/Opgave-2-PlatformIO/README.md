# Opgave 2: Opsætning af PlatformIO

# Introduktion og Mål
Målet med denne opgave var at stifte bekendtskab med en professionel udviklingsplatform ved at installere Visual Studio Code og udvidelsen PlatformIO IDE, samt uploade det velkendte Blink-program herigennem.

# Hardware anvendt:
* Arduino Uno R4 WiFi
* USB-C kabel

---

# Hvad lærte vi (Forskel fra Opgave 1)
Hvor opgave 1 blev løst i det mere enkle og låste Arduino IDE, er denne opgave løst i en avanceret kildekodeneditor (VS Code) ved hjælp af PlatformIO-systemet.
* **Eksplicit inkludering:** Koden i `main.cpp` kræver nu linjen `#include <Arduino.h>` i toppen, da vi ikke længere kører i Arduinos eget lukkede miljø.
* **Struktur:** PlatformIO opbygger et rigtigt professionelt projektmiljø med en `platformio.ini` konfigurationsfil, en `src/` mappe til kildekoden og automatiske build-værktøjer.

---

# Resultat
PlatformIO er opsat korrekt, koden er kompileret (bygget) og uploadet uden fejl. Terminalen melder `[SUCCESS]`, og Arduinoens indbyggede LED blinker som forventet.
