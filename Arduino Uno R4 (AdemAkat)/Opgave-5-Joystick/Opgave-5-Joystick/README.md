# Opgave 5: Joystick!

# Introduktion og mål
Målet med denne opgave var at forbinde et joystick til Arduino UNO R4 WiFi. Jeg skulle lære at læse både digitale signaler fra trykknappen og analoge signaler fra X- og Y-aksen. Opgaven handlede også om at finde fejl i koden og optimere dataene med en deadzone og en højere hastighed.

### Hardware brugt
- Arduino Uno R4 WiFi
- Joystick modul
- 5 ledninger (male-female)
- USB-C kabel

# Svar på spørgsmål fra opgaven

1. Hvorfor aflæses X- og Y-akserne med analoge pins?
Svar: Fordi joysticket sender et flydende signal alt efter hvor meget man skubber til det. Digitale pins kan kun forstå om noget er helt tændt eller helt slukket, så de kan ikke måle joystickets præcise position.

2. Hvorfor aflæses trykknappen med en digital pin?
Svar: Fordi knappen kun har to tilstande. Enten trykker man den ned, eller også slipper man den. Det passer perfekt til en digital pin.

3. Hvorfor er trykknappen koblet til digital pin 2 og ikke pin 0 eller 1?
Svar: Fordi pin 0 og 1 bliver brugt til at snakke med computeren (RX og TX). Hvis vi sætter knappen til dem, ødelægger det upload af koden og signalet til Serial Monitor.

# Fejlfinding og ændringer af koden
- Knappen virkede ikke rigtigt i starten: Det originale program havde en fejl, fordi pin 2 opførte sig tilfældigt, når man ikke rørte knappen. Det fiksede jeg ved at bruge INPUT_PULLUP i setup funktionen. Det vender signalet om, så koden nu tænder lyset, når pinden læser LOW.
- Forsinkelse i terminalen: Dataene hakkede lidt i starten. Det løste jeg ved at sætte hastigheden op fra 9600 til 115200 både i koden med Serial.begin og i platformio.ini filen. Det fjernede forsinkelsen helt.
- Joysticket hoppede i midten: Da joysticket stod helt stille i midten, svingede tallene en lille smule i stedet for at stå helt fast. Jeg lavede en deadzone i koden mellem 490 og 530, som tvinger tallene til at stå helt stabilt på 512, når man slipper joysticket.

# Resultat
Opgaven er lavet og testet. Både X-aksen, Y-aksen og knappen bliver nu læst helt uden problemer, og tallene ruller fint over skærmen i Serial Monitor uden fejl, når jeg bevæger joysticket rundt.
