# Opgave 6: WiFi basics

# Introduktion og mål
Målet med denne opgave var at lære at bruge det indbyggede WiFi-modul på Arduino UNO R4 WiFi. Jeg skulle lære at koble Arduinoen på et trådløst netværk og hente informationer ud fra forbindelsen.

# Hardware brugt
- Arduino Uno R4 WiFi
- USB-C kabel

# Delopgaver og hvad jeg har gjort
- Forbindelse til WiFi: Jeg brugte WiFiS3 biblioteket til at scanne og logge på netværket ved hjælp af et netværksnavn og kodeord.
- IP-adresse: Jeg udvidede koden, så Arduinoen automatisk venter på routeren og udskriver den IP-adresse, den har fået tildelt, i min Serial Monitor.
- Signalstyrke (RSSI): Jeg tilføjede en funktion i koden, så programmet også måler og udskriver netværkets præcise signalstyrke i dBm.

# Resultat og terminal-output
Opgaven er løst og testet med succes. Arduinoen logger hurtigt på netværket og udskriver data uden fejl. 

Mit output fra Serial Monitor ser således ud:

--- Terminal on COM5 | 115200 8-N-1
Forbundet med succes!
-------------------------------------
Henter IP-adresse fra routeren...
Arduinoens IP-adresse: 172.31.0.111
Signalstyrke (RSSI): -51 dBm
-------------------------------------
