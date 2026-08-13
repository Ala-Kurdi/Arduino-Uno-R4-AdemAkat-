# Opgave 3: Seriel port og LED-skærm

# Introduktion og mål
Målet med denne opgave var at lære at bruge Arduinoens indbyggede serielle port til at sende og modtage data mellem computeren og Arduinoen via USB-kablet. Til sidst skulle vi modtage tekstbeskeder fra computeren og få dem til at rulle hen over Arduinoens indbyggede 12x8 LED-skærm.

# Hardware brugt
- Arduino Uno R4 WiFi
- USB-C kabel

# Projektets opbygning og hvad jeg har gjort
Opgaven blev løst i PlatformIO og opdelt i tre dele:
1. Del 1 (Send): Arduinoen blev programmeret til at sende teksten "Hello, World from Arduino!" til computeren hvert sekund med en hastighed på 9600.
2. Del 2 (Modtag): Arduinoen lyttede på den serielle port og sendte de beskeder, jeg skrev på computeren, direkte tilbage til Serial Monitor.
3. Del 3 (LED-skærm): Ved hjælp af grafik-bibliotekerne fik jeg den tekst, jeg skrev på computeren, til at rulle live hen over det fysiske LED-display på printet.

# Resultat
Opgaven er færdig og virker super godt. Kommunikationen over den serielle port fungerer fejlfrit i begge retninger, og den tekst, jeg skriver i Serial Monitor, ruller flot hen over Arduinoens skærm som forventet.
