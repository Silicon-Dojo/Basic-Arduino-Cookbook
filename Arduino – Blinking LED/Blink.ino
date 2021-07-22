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