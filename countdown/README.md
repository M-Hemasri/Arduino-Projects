# Countdown Timer Using a 7-Segment Display

A simple Arduino project that uses a 7-segment display to show a sequence of digits. The display is controlled through digital pins 2 to 8, while an LED connected to pin 9 blinks five times after the digit sequence finishes.
Here i used a led to finish the sequence,you can use a buzzer.

## Hardware

- Arduino-compatible board
- 7-segment display
- LED
- 2 resistor for the display segments and LED
- Breadboard
- Jumper wires
- USB cable

## Wiring

- Connect the seven display segments (a, b, c, d, e, f, and g) to Arduino digital pins **2, 3, 4, 5, 6, 7, and 8**, respectively.
- Connect the LED to digital pin **9** .
- Connect the display's common pin through a resistor according to the display type (common anode or common cathode).
- Connect the circuit's GND as required.

## Working Principle

1. The Arduino configures pins 2 to 9 as outputs.
2. The 7-segment display shows a sequence of digit patterns, with each pattern displayed for one second.
3. After the digit sequence, the display segments turn off.
4. The LED connected to pin 9 blinks five times, with 500 milliseconds for each ON and OFF interval.
5. The sequence repeats continuously.

## Upload

1. Open the sketch in the Arduino IDE.
2. Select your Arduino board and port from the **Tools** menu.
3. Click **Verify** to compile the code.
4. Click **Upload** to upload the sketch.
5. Start the simulation or observe the physical circuit.

## Applications

- Learning Arduino digital output control
- Understanding 7-segment displays
- Practicing digit patterns and timing delays
- Building basic countdown and timer projects