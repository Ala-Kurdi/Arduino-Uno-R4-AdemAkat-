# Opgave 1: Opsætning af Arduino IDE og Blink-test.

# Introduktion og mål
Målet med denne opgave var at installere det nye Arduino IDE, lave en forbindelse mellem computeren og Arduinoen, samt uploade det første testprogram, så det virker.

# Hardware brugt
- Arduino Uno R4 WiFi
- USB-C kabel

# Hvad gør koden?
Koden styrer det indbyggede LED-lys på Arduino-boardet og er opdelt i to hovedfunktioner:

1. setup(): Kører kun én gang, når Arduinoen tænder. Her bliver det indbyggede lys sat op som en udgang, så printet kan sende strøm til det.
2. loop(): Kører i ring hele tiden. Koden tænder for strømmen, venter i 1 sekund, slukker for strømmen og venter igen i 1 sekund.

Dette gør, at lyset blinker hele tiden med en pause på 1 sekund.

# Resultat
Opgaven er færdig og testet med succes. Koden er uploadet uden fejl via Arduino IDE version 2, og det indbyggede LED-lys blinker nu på boardet, som det skal.
