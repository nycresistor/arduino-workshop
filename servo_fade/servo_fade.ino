
#include <Servo.h>

Servo servo;

int servoPin = 9;
int photocell = A0;

void setup()
{
	Serial.begin(9600);
	servo.attach(servoPin);
}

void loop()
{
	int sensorValue = analogRead(photocell);
	Serial.print("Analog reading = ");
	Serial.println(sensorValue);

	int servoPosition;
	for (servoPosition = 0; servoPosition < sensorValue; servoPosition++) {
		servo.write(servoPosition);
		delay(15);
	}
	for (servoPosition = sensorValue; servoPosition >= 0; servoPosition--) {
		servo.write(servoPosition);
		delay(15);
	}

}
