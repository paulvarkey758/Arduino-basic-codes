int pir=2;
int pirState=3;
int buzzer=4;
int led=5;

void setup() {
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  pirState=digitalRead(pir);
  Serial.println(pirState);
  if (pirState==HIGH) {
    Serial.println("Some motion detected!");
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  else{
    Serial.println("There is no motion detected!");
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

}
