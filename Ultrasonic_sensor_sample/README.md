A simple Arduino sketch that measures the distance between an ultrasonic sensor and an object using the HC-SR04 sensor. The calculated distance is displayed in centimeters in the Serial Monitor.

## Hardware

- Arduino-compatible board
- HC-SR04 ultrasonic distance sensor
- Jumper wires
- USB cable

## Wiring

- Connect the sensor's **VCC** pin to Arduino **5V**.
- Connect the sensor's **GND** pin to Arduino **GND**.
- Connect the sensor's **TRIG** pin to digital pin **10**.
- Connect the sensor's **ECHO** pin to digital pin **9**.

## Formula

The distance is calculated using the following formula:

`distance = (duration × speed of sound) / 2`

- **Duration:** The time taken by the ultrasonic pulse to travel from the transmitter, hit an object, and return to the receiver.
- **Speed of sound:** Approximately **0.034 cm/µs**.
- **Division by 2:** The duration represents the total round-trip time, so it is divided by 2 to calculate the one-way distance.

## Upload

1. Open your Arduino sketch in the Arduino IDE.
2. Select your board and port from the **Tools** menu.
3. Click **Verify** to compile the code.
4. Click **Upload** to upload the sketch.
5. Open the **Serial Monitor** and set the baud rate to **9600**.

The sensor measures the distance to an object and displays the result in centimeters. Measurements are updated approximately every 100 milliseconds.

**Example output:**

```text
Distance: 15.42cm
Distance: 16.10cm
Distance: 15.87cm
```
