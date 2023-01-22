int led=5;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available(){
    char data=Serial.read();
    Serial.println(data);
    if(data=='A'){
      digitalWrite(led,HIGH);
    }
    else{
      digitalWrite(led,LOW);
    }
  })

}
