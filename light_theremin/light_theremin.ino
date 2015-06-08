/*
Adafruit Arduino - Lesson 10. Pseudo Thermin
*/

int speakerPin = 12;
int photocellPin = 0;

void setup()
{
}

void loop()
{
  int reading = analogRead(photocellPin);
  Serial.println(reading);

  if (reading > 150) {
    tone(speakerPin, 200 + (reading / 2));
  }
  else {
    noTone(speakerPin);
  }
  delay(20);
}
