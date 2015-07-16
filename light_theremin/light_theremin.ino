int speakerPin = 12;
int photocellPin = A0;
void setup()
{
    Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(photocellPin);
  Serial.println(reading);
  if (reading < 100) {
    tone(speakerPin, 200 + (reading * 10));
  }
  else {
    noTone(speakerPin);
  }
  delay(20);
}
