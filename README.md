# RaspiPico_Volt_Reader
 Building up a Voltage Reader using Raspberry Pi Pico.
 
 (23/05/06): Plan to use: <br>
 * Arduino IDE for scripts (sketch) for RaspberryPi Pico.
 * Python for interactive Serial Plotter.

# Setup
1. Arduino IDE <br>
https://logikara.blog/raspi-pico-arduinoide/ <br>
1.1. Download & install Arduino IDE <br>
1.2. Open File/Preferences, and type "https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json" into "Additional Board Manager".
<br>
1.3. Open Tool/Board/Board Manager, and install "Raspberry Pi Pico /RP2040" by Earle F. Philhower, III
<br>
1.4. Connect Raspberry Pi Pico and Open Tool/"Board or something" and choose "UF2 or something". Sorry not to remember clearly. Note that Tool/Serial at first not shown, and without selecting "UF2", you can't upload dummy sketch to your Raspberry Pi Pic.
<br>
1.5. Disconnect and connect Raspberry Pi Pico. Now that you should see Tool/Serial/COM#.
<br>
Now you are all set.

2. Analog_Read sketch <br>
https://garchiving.com/how-to-use-analogread-with-pico/
<br>
Changed "raw = analogRead(26);" into "raw = analogRead(A0);".
It should process the same though.