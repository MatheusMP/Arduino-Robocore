void setup() {
  pinMode(11, OUTPUT); // LED verde
  //pinMode(12, OUTPUT); // LED amarelo
  //pinMode(13, OUTPUT); // LED vermelho
}

void loop() {
  digitalWrite(11, HIGH);
  //digitalWrite(12, LOW);
  //digitalWrite(13, LOW);
  delay(2000);
  
  digitalWrite(11, LOW);
  //digitalWrite(12, HIGH);
  //digitalWrite(13, LOW);
  delay(2000);
  
  //digitalWrite(11, LOW);
  //digitalWrite(12, LOW);
  //digitalWrite(13, HIGH);
  //delay(5000);
}
