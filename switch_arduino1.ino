// C++ code
//
int led = 5;
int btn = 12;
int btnstate = 0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(btn,INPUT_PULLUP);
  Serial.begin(9600);
  
}
void loop()
{
  btnstate = digitalRead(btn);
  
  
  if(btnstate==HIGH){
    digitalWrite(led,LOW);
  }
  else{
    digitalWrite(led,HIGH);
  }
  Serial.print(btnstate);
  delay(1000);
}