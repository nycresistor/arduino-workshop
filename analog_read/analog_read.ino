void setup(void) {
  Serial.begin(9600);
}
 
void loop(void) { 
  Serial.print("Analog reading = ");
  Serial.println(analogRead(A0));
  delay(100);
}
