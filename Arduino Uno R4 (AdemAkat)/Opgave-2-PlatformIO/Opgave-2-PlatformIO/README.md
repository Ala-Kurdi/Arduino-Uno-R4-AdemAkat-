# Opgave 2: Opsætning af PlatformIO.

# Introduktion og mål
Målet med denne opgave var at prøve en mere professionel udviklingsplatform ved at installere Visual Studio Code og udvidelsen PlatformIO IDE. Herefter skulle det velkendte Blink-program uploades herigennem.

# Hardware brugt
- Arduino Uno R4 WiFi
- USB-C kabel

# Hvad jeg lærte og forskellen fra opgave 1
Hvor opgave 1 blev lavet i det mere enkle og lukkede Arduino IDE, er denne opgave lavet i kildekodeneditoren VS Code ved hjælp af PlatformIO-systemet.
- Inkludering af kode: Koden i main.cpp kræver nu linjen #include <Arduino.h> i toppen, fordi vi ikke længere kører i Arduinos eget lukkede miljø.
- Struktur: PlatformIO opbygger et rigtigt projektmiljø med en platformio.ini fil til indstillinger, en src-mappe til selve kildekoden og automatiske værktøjer til at bygge koden.

# Resultat
PlatformIO er sat rigtigt op, og koden er bygget og uploadet uden fejl. Terminalen skriver SUCCESS, og Arduinoens indbyggede LED blinker som den skal.
