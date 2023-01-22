#include<Servo.h>
Servo s1;
Servo s2;
void setup() {
  s1.attach(9);
  s2.attach(10);
}

void loop() {
  
  s1.write(0);
  delay(3000);
  s1.write(90);
  s2.write(90);
  delay(3000);
  s2.write(180);
}
