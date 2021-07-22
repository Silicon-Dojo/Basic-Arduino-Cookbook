# Arduino – IR Sensor with Buzzer and LED


![](http://www.silicondojo.com/wp-content/uploads/2021/04/Arduino-IR-Sensor-with-Buzzer-and-LED_bb-678x381.png "Arduino-IR-Sensor-with-Buzzer-and-LED_bb")

**Description:**

This recipe will teach you how to use an IR Sensor with the Arduino and you will learn to turn on either an LED or a Buzzer based on whether the sensor is triggered.

**Parts:**

* Arduino Uno
* IR Sensor
* LED
* 220 Ohm Resisitor
* Buzzer
* Breadboard
* Wires

**Code:**

```
#define ir 7
#define buzzer 8
#define led 9

int obstacle;

void setup() {
  pinMode(ir, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  obstacle = digitalRead(ir);

  if (obstacle == LOW)
  {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, HIGH);
  }
  else
  {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, LOW);

  }
}
```

**Code with Comments:**

```
//Create names for digital pins
#define ir 7
#define buzzer 8
#define led 9

//Create variable to test against for sensor
int obstacle;

void setup() {
//Set ir pin for INPUT so that it reads from the sensor
  pinMode(ir, INPUT);
//Set led and buzzer to OUTPUT so that they can be turned on/ off
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
//read from the IR sensor and assign value to obstacle variable
  obstacle = digitalRead(ir);

//if IR Sensor detects something then turn buzzer on, and led off
  if (obstacle == LOW)
  {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, HIGH);
  }
//if IR Sensor does not detect something turn led on, and buzzer off
  else
  {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, LOW);

  }
}
```

**Extra Credit:**

Test IR Sensor with different materials and see if you can touch the sensor without triggering it.

Note: Try electrical tape.
