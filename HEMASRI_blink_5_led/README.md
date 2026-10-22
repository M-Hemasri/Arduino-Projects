A simple Arduino sketch that controls five LEDs connected to digital pins 12, 11, 10, 9, and 8. Each LED turns on for 300 milliseconds and then turns off before the next LED in the sequence turns on. The sequence repeats continuously.

## Hardware

- Arduino-compatible board
- 5 LEDs
- 5 × 220–330 ohm resistors
- Jumper wires
- Breadboard

## Wiring

- Connect digital pin 12 to LED 1's anode (long leg) through a resistor.
- Connect digital pin 11 to LED 2's anode (long leg) through a resistor.
- Connect digital pin 10 to LED 3's anode (long leg) through a resistor.
- Connect digital pin 9 to LED 4's anode (long leg) through a resistor.
- Connect digital pin 8 to LED 5's anode (long leg) through a resistor.
- Connect each LED's cathode (short leg) to GND.

## Upload

1. Open your Arduino sketch in the Arduino IDE.
2. Select your board and its port from the **Tools** menu.
3. Click **Verify** to compile the code.
4. Click **Upload** to upload the sketch.

LEDs 1 through 5 turn on one after another, each staying on for 300 milliseconds. After each LED turns off, the next LED in the sequence turns on. Once all five LEDs have completed the sequence, it starts again from LED 1.