int trig=8;
int echo=9;
int redLed=4;
int greenLed=2;
int blueLed=12;
long duration, distance;
void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration=pulseIn(echo, HIGH);
  distance=(duration*0.034)/2;
  Serial.println(distance);
  Serial.println("cm");
  if(distance<10){
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, HIGH);
    delay(1000);
  }
  else if(distance<20){
    digitalWrite(redLed, LOW);
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed, HIGH);
    delay(1000);
  }
  else{
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(blueLed, HIGH);
  }
}
