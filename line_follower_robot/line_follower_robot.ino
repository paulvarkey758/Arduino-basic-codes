int a1=2;
int a2=3;
int b1=4;
int b2=5;
int irRight=A1;
int irLeft=A0;
int irRightState;
int irLeftState;

void setup() {
  // put your setup code here, to run once:
  pinMode(a1,OUTPUT);
  pinMode(a2,OUTPUT);
  pinMode(b1,OUTPUT);
  pinMode(b2,OUTPUT);
  pinMode(irRight,INPUT);
  pinMode(irLeft,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  irRightState=analogRead(A1);
  irLeftState=analogRead(A0);
  Serial.println(irRightState);
  Serial.println(irLeftState);
  delay(2000);
  if(irRightState>500&&irLeftState<500){
    Serial.println("Turning left");
    digitalWrite(b1,LOW);
    digitalWrite(b2,LOW);
    digitalWrite(a2,LOW);
    digitalWrite(a1,HIGH);
  }
  else if(irLeftState>500&&irRightState<500){
    Serial.println("Turning right");
    digitalWrite(b2,LOW);
    digitalWrite(a1,LOW);
    digitalWrite(a2,LOW);
    digitalWrite(b1,HIGH);
  }
  else if(irLeftState<500&&irRightState<500){
    Serial.println("stop");
    digitalWrite(a1,LOW);
    digitalWrite(b1,LOW);
    digitalWrite(a2,LOW);
    digitalWrite(b2,LOW);
  }
  else{
    Serial.println("Forward");
    digitalWrite(a1,HIGH);
    digitalWrite(b1,HIGH);
    digitalWrite(a2,LOW);
    digitalWrite(b2,LOW);
  }

}
