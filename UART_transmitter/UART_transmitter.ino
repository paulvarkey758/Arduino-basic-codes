char data;
int button=6;
int buttonStatus;
void setup() {
  pinMode(button,INPUT);
  Serial.begin(9600);

}

void loop() {
  buttonStatus=digitalRead(button);
  // Serial.println("button status: ");
  // Serial.print(buttonStatus);
  if(buttonStatus==HIGH){
    data='A';
  }
  else{
    data='B';
  }
  // Serial.println("data: ");
  // Serial.print(data);
  Serial.write(data);

}
