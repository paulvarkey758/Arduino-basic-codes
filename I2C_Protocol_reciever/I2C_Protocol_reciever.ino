#include<Wire.h>
void setup() {
  // put your setup code here, to run once:
  Wire.begin(0x14);
  Serial.begin(9600);
  Wire.onReceive(receiveEvent);
  

}
void loop(){
  delay(100);
}
void receiveEvent()
{
  int data=Wire.read();
  Serial.println(data);
}
