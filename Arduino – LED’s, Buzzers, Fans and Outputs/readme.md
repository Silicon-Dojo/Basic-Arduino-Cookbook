# Arduino – LED's, Buzzers, Fans and Outputs


![](http://www.silicondojo.com/wp-content/uploads/2021/05/Arduino-LEDs-Buzzers-Fans-and-Outputs_bb-678x381.jpg "Arduino-LEDs-Buzzers-Fans-and-Outputs_bb")

**Description:**

This project loops through and turns an LED, then a buzzer, then a Fan Motor on and off.  This shows students that turning most types of outputs on or off is the same.

**Parts:**

* Breadboard
* LED
* Piezo Buzzer
* Micro Fan
* 220 Resistor
* Wires

**Code**

```
#define led 8
#define buzzer 9
#define fan 10

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(fan, OUTPUT);
}

void loop() {
digitalWrite(led, HIGH);
digitalWrite(buzzer,LOW);
digitalWrite(fan, LOW);
delay(1000);
digitalWrite(led, LOW);
digitalWrite(buzzer,HIGH);
digitalWrite(fan, LOW);
delay(1000);
digitalWrite(led, LOW);
digitalWrite(buzzer,LOW);
digitalWrite(fan, HIGH);
delay(1000);
}
```
