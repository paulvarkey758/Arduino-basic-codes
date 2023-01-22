int ma1=2;
int ma2=3;
int mb1=4;
int mb2=5;
int trig=8;
int echo=9;
long duration;
long distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(ma1,OUTPUT);
  pinMode(ma2,OUTPUT);
  pinMode(mb1,OUTPUT);
  pinMode(mb2,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=(duration*0.034)/2;
  Serial.println(distance);
  Serial.println("cm");
  if(distance<15){
    digitalWrite(mb1,LOW);
    digitalWrite(mb2,LOW);
    digitalWrite(ma2,LOW);
    digitalWrite(ma1,LOW);
    delay(1000);
    digitalWrite(ma1,LOW);
    digitalWrite(mb1,LOW);
    digitalWrite(ma2,HIGH);
    digitalWrite(ma2,HIGH);
    delay(1000);
    digitalWrite(ma1,HIGH);
    digitalWrite(mb1,LOW);
    digitalWrite(ma2,LOW);
    digitalWrite(ma2,LOW);
  }
  else{
    Serial.println("Forward");
    digitalWrite(ma1,HIGH);
    digitalWrite(mb1,HIGH);
    digitalWrite(ma2,LOW);
    digitalWrite(mb2,LOW);
  }

}
