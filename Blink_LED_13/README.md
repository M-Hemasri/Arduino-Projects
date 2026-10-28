# 13 LED Blinking Sequence

A simple Arduino sketch that controls 13 LEDs connected to digital pins 2 through 13 and analog pin A0. Each LED turns on one after another for approximately 100 milliseconds, creating a running-light effect. The sequence repeats continuously.

## Hardware

- Arduino-compatible board
- 13 LEDs
- 1 × 220–330 ohm resistors
- Breadboard
- Jumper wires
- USB cable

## Wiring

- Connect LED 1 to digital pin 2.
- Connect LED 2 to digital pin 3 .
- Connect LED 3 to digital pin 4 .
- Connect LED 4 to digital pin 5.
- Connect LED 5 to digital pin 6 .
- Connect LED 6 to digital pin 7.
- Connect LED 7 to digital pin 8 .
- Connect LED 8 to digital pin 9.
- Connect LED 9 to digital pin 10 .
- Connect LED 10 to digital pin 11.
- Connect LED 11 to digital pin 12.
- Connect LED 12 to digital pin 13 .
- Connect LED 13 to analog pin A0 .
- Connect the cathode (short leg) of each LED to GND through a current-limiting resistor.

## Upload

1. Open the Arduino sketch in the Arduino IDE.
2. Select your Arduino board and port from the **Tools** menu.
3. Click **Verify** to compile the code.
4. Click **Upload** to upload the sketch.

## Working Principle

1. The Arduino configures all 13 LED pins as outputs.
2. The first LED turns on while the remaining LEDs stay off.
3. Each subsequent LED turns on in sequence, with a delay of approximately 100 milliseconds.
4. After the last LED, the sequence starts again from the first LED.

## Expected Result

The LEDs light up one after another, producing a running-light effect that repeats continuously.
