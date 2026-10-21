A simple Arduino sketch that controls three LEDs connected to digital pins 2, 4, and 7. The green, blue, and yellow LEDs blink one after another in a repeating sequence.

## Hardware

* Arduino-compatible board
* Green LED
* Blue LED
* Yellow LED
* 3 × 220–330 ohm resistors
* Jumper wires
* Breadboard

## Wiring

* Connect digital pin 2 to the green LED's anode (long leg) through a resistor.
* Connect digital pin 4 to the blue LED's anode (long leg) through a resistor.
* Connect digital pin 7 to the yellow LED's anode (long leg) through a resistor.
* Connect each LED's cathode (short leg) to GND.

## Upload

1. Open your Arduino sketch in the Arduino IDE.
2. Select your board and its port from the **Tools** menu.
3. Click **Verify** to compile the code.
4. Click **Upload** to upload the sketch.

The green, blue, and yellow LEDs turn on one after another, each staying on for 200 milliseconds. The sequence repeats continuously.
