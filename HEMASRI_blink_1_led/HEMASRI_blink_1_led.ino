void setup() {
  // initialize digital pin 12 as an output.
  pinMode (12, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
}
