int ma1=2;
int ma2=3;
int mb1=4;
int mb2=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(ma1,OUTPUT);
  pinMode(ma2,OUTPUT);
  pinMode(mb1,OUTPUT);
  pinMode(mb2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    char val=Serial.read();
    Serial.println(val);
    if(val=='f'){
      Serial.println("Forward");
      digitalWrite(ma1,HIGH);
      digitalWrite(mb1,HIGH);
      digitalWrite(ma2,LOW);
      digitalWrite(mb2,LOW);
    }
    if(val=='b'){
      Serial.println("Backward");
      digitalWrite(ma1,LOW);
      digitalWrite(mb1,LOW);
      digitalWrite(ma2,HIGH);
      digitalWrite(mb2,HIGH);
    }
    if(val=='r'){
      Serial.println("Right");
      digitalWrite(ma1,LOW);
      digitalWrite(mb1,HIGH);
      digitalWrite(ma2,LOW);
      digitalWrite(mb2,LOW);
    }
    if(val=='l'){
      Serial.println("Left");
      digitalWrite(ma1,HIGH);
      digitalWrite(mb1,LOW);
      digitalWrite(ma2,LOW);
      digitalWrite(mb2,LOW);
    }
    if(val=='s'){
      Serial.println("Stop");
      digitalWrite(ma1,LOW);
      digitalWrite(mb1,LOW);
      digitalWrite(ma2,LOW);
      digitalWrite(mb2,LOW);
    }
  }
}
