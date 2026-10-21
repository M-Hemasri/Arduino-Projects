A simple Arduino sketch that controls four LEDs connected to digital pins 2, 4, 7, and 6. The green, blue, and yellow LEDs turn on one after another, with a duration of 300 milliseconds each. The white LED is configured as an output but is not yet included in the blinking sequence.

## Hardware

- Arduino-compatible board
- Green LED
- Blue LED
- Yellow LED
- White LED
- 4 × 220–330 ohm resistors
- Jumper wires
- Breadboard

## Wiring

- Connect digital pin 2 to the green LED's anode (long leg) through a resistor.
- Connect digital pin 4 to the blue LED's anode (long leg) through a resistor.
- Connect digital pin 7 to the yellow LED's anode (long leg) through a resistor.
- Connect digital pin 6 to the white LED's anode (long leg) through a resistor.
- Connect each LED's cathode (short leg) to GND.

## Upload

1. Open your Arduino sketch in the Arduino IDE.
2. Select your board and its port from the **Tools** menu.
3. Click **Verify** to compile the code.
4. Click **Upload** to upload the sketch.

The green, blue, and yellow LEDs turn on one after another, each staying on for 300 milliseconds. The sequence repeats continuously. The white LED is configured but does not blink because it has not yet been added to the `loop()` function.