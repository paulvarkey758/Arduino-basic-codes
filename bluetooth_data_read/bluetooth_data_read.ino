int led=6;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  char data;
  if(Serial.available()){
    data=Serial.read();
    if(data=='A'){
      digitalWrite(led,HIGH);
      }
     else if(data=='a'){
      digitalWrite(led,LOW);
      }
    }

}