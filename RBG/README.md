A simple Arduino sketch that controls an RGB LED using digital pins 2, 3, and 4. The program turns on the red, green, and blue LEDs individually, then combines them to create different color combinations. Each color pattern is displayed for 3 seconds before changing to the next pattern.

## Hardware

- Arduino-compatible board
- RGB LED
- 1 × 220–330 ohm resistors
- Jumper wires
- Breadboard
- USB cable

## Wiring

- Connect Arduino digital pin 2 to the red LED pin
- Connect Arduino digital pin 3 to the green LED pin
- Connect Arduino digital pin 4 to the blue LED pin
- Connect the RGB LED's common pin to the appropriate power or ground connection through resistor, depending on whether it is a common-anode or common-cathode LED.

## Upload

1. Open your Arduino sketch in the Arduino IDE.
2. Select your board and port from the **Tools** menu.
3. Click **Verify** to compile the code.
4. Click **Upload** to upload the sketch.

The RGB LED displays the following sequence, with each state lasting 3 seconds:

- Red
- Green
- Blue
- Red + Green (yellow)
- Green + Blue (cyan)
- Blue + Red (magenta)
- Red + Green + Blue (white)

The sequence repeats continuously.
