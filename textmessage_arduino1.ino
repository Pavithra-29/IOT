int FAN=4;
  int LIGHT=3;
  String input;
  void setup()
  {
    pinMode(FAN, OUTPUT);
    pinMode(LIGHT,OUTPUT);
    Serial.begin(9600);
  }
  void loop()
  {
    if(Serial.available()==0)
    {
    }
    input = Serial.readString();
    if(input=="FANON")
    {
      digitalWrite(FAN,HIGH);
      digitalWrite(LIGHT,LOW);
      Serial.println("fan is ON");
      }
    if(input=="FANOFF")
    {
      digitalWrite(FAN,LOW);
      digitalWrite(LIGHT,LOW);
      Serial.println("fan is OFF");        }
    if(input=="LIGHTON")
    {
      digitalWrite(LIGHT,HIGH);
      digitalWrite(FAN,LOW);
      Serial.println("light is ON");
    }
    if(input=="LIGHTOFF")
    {
      digitalWrite(LIGHT,LOW);
      digitalWrite(FAN,LOW);
      Serial.println("light is OFF");
                     }  
  }
