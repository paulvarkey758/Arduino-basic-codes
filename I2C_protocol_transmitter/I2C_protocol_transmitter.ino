#include <Wire.h>
int a=5;
void setup() {
  // put your setup code here, to run once:
  Wire.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  Wire.beginTransmission(0x14);
  Wire.write(a);
  Wire.endTransmission();
  delay(500);

}
