const int pinPot = A0;
int potVal = 0;

void setup()
{
  pinMode(pinPot, INPUT);
  Serial.begin(9600);
}

void loop()
{
  potVal = analogRead(pinPot);
  Serial.println(potVal);
  delay(100);
  
 }