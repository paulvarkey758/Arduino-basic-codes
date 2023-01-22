#include<DHTStable.h>
DHTStable dh;
#define dhtval D5
int hum;
int temp;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  

}

void loop() {
  // put your main code here, to run repeatedly:
 int d=dh.read11(dhtval);
 Serial.println(d);
 hum=dh.getHumidity();
 Serial.print("humidity:");
 Serial.println(hum);
 temp=dh.getTemperature();
 Serial.print("temperature:");
 Serial.println(temp);
}
