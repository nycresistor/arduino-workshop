int led = 9;
int photocell = A0;

void setup(void) {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(void) { 
  int sensorValue = analogRead(photocell);
  Serial.print("Analog reading = ");
  Serial.println(sensorValue);

  // TODO: scale the value if necessary
  analogWrite(photocell, sensorValue);
  delay(50);
}
