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