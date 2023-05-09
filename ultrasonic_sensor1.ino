int trig = 7;
int Echo = 6;
long distancia;
long tiempo;
void setup() {
  pinMode(trig, OUTPUT);
  pinMode(Echo, INPUT);
  Serial.begin(9600);
 
}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  tiempo = (pulseIn(Echo, HIGH)/2);
  distancia = (tiempo / 29);
  Serial.println(distancia);
  delay(50);
  

}
