# Opgave 1: Opsætning af Arduino IDE & Blink-test

# Introduktion og Mål
Målet med denne opgave var at installere det nye Arduino IDE udviklingsmiljø, etablere forbindelse mellem computeren og hardwareren, samt uploade det første fungerende testprogram.

# Hardware anvendt:
* Arduino Uno R4 WiFi
* USB-C kabel

---

# Hvad gør koden?
Koden styrer det indbyggede LED-lys på Arduino-boardet (`LED_BUILTIN`) og er opdelt i to hovedfunktioner:

1. **`setup()`**: Kører én gang, når Arduinoen tænder. Her initialiseres den indbyggede lysdiode som en udgang (`OUTPUT`), så printet kan sende strøm til den.
2. **`loop()`**: Kører uafendeligt i ring. Koden tænder for strømmen (`HIGH`), venter i 1 sekund (1000 ms), slukker for strømmen (`LOW`) og venter igen i 1 sekund.

Dette skaber en uendelig blinke-effekt med et præcist interval på 1 sekund.

---

# Resultat
Opgaven er fuldført og testet med succes. Koden er uploadet uden fejl via Arduino IDE version 2, og det indbyggede LED-lys blinker nu på boardet som forventet.
