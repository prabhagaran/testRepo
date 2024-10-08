/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue1 = analogRead(A0);// reads the value from sensor1
  int sensorValue2 = analogRead(A1);//reads the value from sensor2
  int sensorValue3 = analogRead(A2);//reads the value from sensor3
  int sensorValue4 = analogRead(A3);//reads the value from sensor4

  
  // print out the value you read:
  Serial.print("S1 : "); // prints the value from s1
  Serial.print(sensorValue1);
  Serial.print("  |  ");
  Serial.print("S2 : ");
  Serial.print(sensorValue2);
 Serial.print("  |  ");
  Serial.print("S3 : ");
  Serial.print(sensorValue3);
Serial.print("  |  ");
  Serial.print("S4 : ");
  Serial.print(sensorValue4);
  Serial.println();
  delay(1);        // delay in between reads for stability
}
