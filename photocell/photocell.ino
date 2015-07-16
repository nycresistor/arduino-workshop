int photocell = A0;

void setup(void) {
  Serial.begin(9600);
}

void loop(void) { 
  int sensorValue = analogRead(photocell);
  Serial.print("Analog reading = ");
  Serial.println(sensorValue);

  delay(50);
}
