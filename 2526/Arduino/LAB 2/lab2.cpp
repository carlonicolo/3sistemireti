// Porzione dichiarazioni variabili

// Primo Task inserisci variabile
const int valPin = 11;
int tmpDelay = 500;
//int num1 = 0;
//int num2 = 1;
//int sommaNumeri = 0;

void setup()
{
  pinMode(valPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  // SOS segnale corto . . .
  // Utilizzo ciclo for
  for(int i = 0; i <= 2; i++){
    digitalWrite(valPin, HIGH);
    delay(tmpDelay); 
    digitalWrite(valPin, LOW);
    delay(tmpDelay);
  }
  

  // SOS segnale lungo ___ ___ ___
  for(int i = 0; i <= 2; i++){
    digitalWrite(valPin, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(valPin, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  
  
  for(int i = 0; i <= 2; i++){
    digitalWrite(valPin, HIGH);
    delay(tmpDelay); 
    digitalWrite(valPin, LOW);
    delay(tmpDelay);
  }
  delay(3000); 
  
}
