int ldr=2;
int ldrState=3;
int lamp=4;

void setup() {
  pinMode(ldr,INPUT);
  pinMode(lamp,INPUT);
  Serial.begin(9600);

}

void loop() {
  ldrState=digitalRead(ldr);
  Serial.println(ldrState);
  if(ldrState==HIGH){
    Serial.println("lamp is turning ON");
    digitalWrite(lamp,HIGH);
  }
  else{
    Serial.println("lamp is turning OFF");
    digitalWrite(lamp,LOW);
  }

}
