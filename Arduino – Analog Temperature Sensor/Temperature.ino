//set sensor connection to analog pin 0. Use "A" in front of number for Analog pins
#define tempSensor A0

void setup()
{
//start serial output and set rate to 9600 baud
 Serial.begin(9600);
}

void loop()
{
//read value from analog temp sensor and set value to reading variable
  int reading = analogRead(tempSensor);
//create variable voltage as a float(number with decimal) and set the value to be reading * 5
  float voltage = reading * 5.0;
//divide voltage value by 1024 and set voltage value to the result
  voltage /= 1024.0;
//create variable tempC as a float and set value
  float tempC = (voltage - 0.5) * 100 ;
//create variable tempF as float and set value
  float tempF = (tempC * 9.0 / 5.0) + 32.0;

//print out values of variables to Serial Monitor. Serial.println ends line.
  Serial.print(reading); Serial.print(" reading - ");
  Serial.print(voltage); Serial.print(" volts  -  ");
  Serial.print(tempC); Serial.print(" degrees C  -  ");
  Serial.print(tempF); Serial.println(" degrees F");
}