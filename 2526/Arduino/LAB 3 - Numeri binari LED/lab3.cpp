// Arduino code

const int white = 13;
const int green = 12;
const int blu = 8;
const int red = 7;
int waitingTime = 1000;

void setup()
{
  Serial.begin(9600);
  //pinMode(13, OUTPUT);
  //pinMode(12, OUTPUT);
  //pinMode(8, OUTPUT);
  //pinMode(7, OUTPUT);
  
  pinMode(white, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blu, OUTPUT);
  pinMode(red, OUTPUT);
  
}

void loop()
{
  digitalWrite(white, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blu, LOW);
  digitalWrite(red, LOW);
  Serial.println("0000 -> 0");
  delay(waitingTime); // Wait for 3000 millisecond(s)
  
  digitalWrite(white, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blu, LOW);
  digitalWrite(red, LOW);
  Serial.println("0001 -> 1");
  delay(waitingTime); // Wait for 3000 millisecond(s)
  
  digitalWrite(white, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blu, LOW);
  digitalWrite(red, LOW);
  Serial.println("0010 -> 2");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
  digitalWrite(white, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blu, LOW);
  digitalWrite(red, LOW);
  Serial.println("0011 -> 3");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
  digitalWrite(white, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blu, HIGH);
  digitalWrite(red, LOW);
  Serial.println("0100 -> 4");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
  digitalWrite(white, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blu, HIGH);
  digitalWrite(red, LOW);
  Serial.println("0101 -> 5");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
  digitalWrite(white, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blu, HIGH);
  digitalWrite(red, LOW);
  Serial.println("0110 -> 6");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
  digitalWrite(white, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blu, HIGH);
  digitalWrite(red, LOW);
  Serial.println("0111 -> 7");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
  digitalWrite(white, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blu, LOW);
  digitalWrite(red, HIGH);
  Serial.println("1000 -> 8");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
  digitalWrite(white, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blu, LOW);
  digitalWrite(red, HIGH);
  Serial.println("1001 -> 9");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
  digitalWrite(white, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blu, LOW);
  digitalWrite(red, HIGH);
  Serial.println("1010 -> 10");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
  digitalWrite(white, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blu, LOW);
  digitalWrite(red, HIGH);
  Serial.println("1011 -> 11");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
  digitalWrite(white, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blu, HIGH);
  digitalWrite(red, HIGH);
  Serial.println("1100 -> 12");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
  digitalWrite(white, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blu, HIGH);
  digitalWrite(red, HIGH);
  Serial.println("1101 -> 13");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
  digitalWrite(white, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blu, HIGH);
  digitalWrite(red, HIGH);
  Serial.println("1110 -> 14");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
  digitalWrite(white, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blu, HIGH);
  digitalWrite(red, HIGH);
  Serial.println("1111 -> 15");
  delay(waitingTime); // Wait for 1000 millisecond(s)
  
}