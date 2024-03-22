
## Problem statement

Develop the code in Arduino to interface an LM35 temperature sensor (Assume the sensor is connected to Arduino Analog pin A0) with an Arduino Uno and control the onboard LED based on temperature readings: 
- Interface the LM35 temperature sensor with an Arduino Uno. 
- When the temperature falls below 30 degrees Celsius, make the onboard LED blink every 250 milliseconds.
- If the temperature rises above 30 degrees Celsius, make the onboard LED blink every 500 milliseconds.


## LM35 Temperature Sensor with Arduino

This Arduino sketch reads temperature data from an LM35 temperature sensor and controls an LED based on the temperature readings. It utilizes a macro for delaying execution and analog-to-digital conversion to convert sensor data to temperature readings.

## Components Required

Arduino board
LM35 temperature sensor
LED and resistor (for visual indication)
Jumper wires
Circuit Diagram

## Installation

Connect the LM35 temperature sensor to pin A0 of the Arduino board.
Connect an LED to pin 8 of the Arduino board.
Upload the provided Arduino sketch to the Arduino board using the Arduino IDE.
Usage

The Arduino will read temperature data from the LM35 sensor and convert it to Celsius.
If the temperature is less than or equal to 30°C, the LED will blink with a 250 ms on/off cycle.
If the temperature is greater than 30°C, the LED will blink with a 500 ms on/off cycle.

[Watch the video](https://player.vimeo.com/video/926378168?h=c2721d6c83)
