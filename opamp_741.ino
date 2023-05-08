// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  int opampout=analogRead(A0);
  Serial.print("output voltage of OP-AMP:");
  Serial.println(opampout);
  delay(1000);
}