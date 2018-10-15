int x = 50;
void setup ()  {
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (8, OUTPUT);
} // setup
void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(x);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(x);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(x);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(x);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  delay(x);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(x);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(x);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(x);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(x);

}
