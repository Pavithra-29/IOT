 int input;
int REDLED = 2;
int BLUELED = 3;
int GREENLED = 4;

void setup()
{
  Serial.begin(9600);
  pinMode (GREENLED, OUTPUT);
  pinMode (BLUELED, OUTPUT);
  pinMode (REDLED, OUTPUT);
  digitalWrite(GREENLED, LOW);
  digitalWrite(BLUELED, LOW);
  digitalWrite(REDLED, LOW);
}
void loop()
{
  input = map(analogRead(0), 0, 1023, 0, 800);
  if(input > 500)
  {
    digitalWrite(GREENLED, HIGH);
    digitalWrite(BLUELED, LOW);
    digitalWrite(REDLED, LOW);
  }
  else if (input >= 301 && input <=500)
  {
    digitalWrite(GREENLED, LOW);
    digitalWrite(BLUELED, HIGH);
    digitalWrite(REDLED, LOW);
  }
  else if (input > 0 && input <= 300)
  {
    digitalWrite(GREENLED, LOW);
    digitalWrite(BLUELED, LOW);
    digitalWrite(REDLED, HIGH);
  }
  Serial.println(input);}