int ir=2;
int irState=3;
int buzzer=4;

void setup() {
  pinMode(ir, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  irState=digitalRead(ir);
  Serial.println(irState);
  if (irState==HIGH) {
    Serial.println("Object detected!");
    digitalWrite(buzzer, HIGH);
  }
  else{
    Serial.println("No object detected!");
    digitalWrite(buzzer, LOW);
  }

}
