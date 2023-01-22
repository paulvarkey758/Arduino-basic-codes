int button=3;
int buttonState;
int status=false;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonState=digitalRead(button);
  Serial.println(buttonState);
  if(buttonState==HIGH){
    status=!status;
    delay(250);
  }    
  digitalWrite(LED_BUILTIN,status);
}