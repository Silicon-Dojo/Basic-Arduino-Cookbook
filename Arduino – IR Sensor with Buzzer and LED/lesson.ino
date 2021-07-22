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