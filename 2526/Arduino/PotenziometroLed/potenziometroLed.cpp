const int pinPot = A0;
const int pinLed = 13;
int potVal = 0;

void setup()
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinPot, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  potVal = analogRead(pinPot);
  Serial.println(potVal);
  
  if(potVal > 600){
    digitalWrite(pinLed, HIGH);
  }
  else{
    digitalWrite(pinLed, LOW);
  }  
  
  delay(100);
  
 }