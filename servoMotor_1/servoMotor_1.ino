#include<Servo.h>
Servo s1;
void setup() {
  
  s1.attach(9);
  s1.write(180);
}

void loop() {
  delay(2000);
  
  for(int pos=0;pos<90;pos++)
  {
    s1.write(pos);
    delay(10);
  }
  delay(2000);
  for(int pos=90;pos>0;pos--)
  {
    s1.write(pos);
    delay(10);
  }
  delay(2000);
}
