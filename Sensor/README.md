## Hall Effect Sensor

The hall effect sensor is one of the devices that can be used to detect the proximity of another object. Specifically, it detects changes in magnetic fields. This allows us to know when a magnet is close or far from the sensor. By attaching a small magnet to an object, it can be detected by an Arduino when an object is approaching or passing by. Example applications of this sensor include being used as a limit switch or counting rotations of a moving object without having to make contact with it.

#### Setup

The circuit is very straightforward, and only requires one pull-up resistor, three connections, and the sensor. The middle pin (generally) will be used as the ground, and either end is 5v and input. The sensor can be used in a digital or analog setup depending on the code implementation. 

Here is an example provided by Maker Pro
https://maker.pro/arduino/tutorial/how-to-use-a-hall-effect-sensor-with-arduino

#### Challenges

It is very easy to get the sensor backward, and as a result, have no reading. Some of the sites show different layouts so if it doesn't work try flipping it as sensors differ.
https://all3dp.com/2/hall-effect-sensor-arduino-how-to/

For debugging I also switched to analog readings to see what the actual reading was versus the interpreted digital value. 

It is also easy to forget that the resistor is a pull-up resistor, and this has to be coded. This means without a magnet, the default value is HIGH, so doing an if statement without negating the condition will often result in a flipped response to what is needed.


![diagram](https://drive.google.com/uc?export=view&id=1KJZPDLjuL-6T0JO6G9Vls-lSy8ctc-bZ)
![diagram](https://drive.google.com/uc?export=view&id=1QQAqiYxY-OzUABmyovmcWPoSMmK7yjua)
