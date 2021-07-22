# Arduino – Blinking LED


![](http://www.silicondojo.com/wp-content/uploads/2021/04/arduino-led-678x381.png "arduino-led")

**Description**:

This recipe teaches you how to make an LED blink using an Arduino. LED's are used in Arduino projects as a way to communicate system status to users.

Make sure to use the 220 Ohm resistor between pin 8 and the LED or the current will be too high for the LED and will burn it out.

When dealing with LED's the Long Leg of the LED is Positive, and the Short Leg is ground.

**Parts:**

* Breadboard
* LED
* 220 Resistor
* Wires

**Code**:

```
#define greenLED 8

void setup() {
  pinMode(greenLED, OUTPUT);
}

void loop() {
digitalWrite(greenLED, HIGH);
delay(1000);
digitalWrite(greenLED, LOW);
delay(1000);
}
```

**Extra Credit**:

Use a Green, Yellow and Red LED.

Connect them to individual Digital Pins

Create code to:

* Turn on Only Green LED, wait 1 second
* Turn on Only Yellow LED, wait 1 second
* Turn on Only Red LED, wait 1 second
* Turn ON ALL LED's, wait 1 second
* Turn OFF ALL LED's, wait 1 second
