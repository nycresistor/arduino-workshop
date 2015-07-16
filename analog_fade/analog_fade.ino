// Pins with the ~ (PWM) symbol, can do analog output too.
int led = 9;

void setup() {                
  pinMode(led, OUTPUT);     
}

void loop() {
  for (int i = 0; i < 255; i++) {
    analogWrite(led, i);
    delay(10);
  }
  for (int i = 255; i > 0; i--) {
    analogWrite(led, i);
    delay(10);
  }
}
