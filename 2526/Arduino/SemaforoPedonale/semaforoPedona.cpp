#define VERDE 0
#define GIALLO 1
#define ROSSO 2

// Dichiarazione array con il numero dei
int semaforoPrincipale[] = {5, 6, 7};
int semaforoPedonale[] = {8, 9, 10};
//int pin = 3;
int ritardo = 2000;
int pulsantePin = 2;
int attesaChiamata =3000;

void setup()
{
  Serial.begin(9600);
  for(int i = 0; i < 3; i++){
    pinMode(semaforoPrincipale[i], OUTPUT);
    pinMode(semaforoPedonale[i], OUTPUT);
  }
  //pinMode(pin, OUTPUT);
  
  pinMode(pulsantePin, INPUT_PULLUP);
  // Imposto i due semafori
  cambiaLuce(semaforoPedonale, ROSSO);
  cambiaLuce(semaforoPrincipale, VERDE);
  
  
}

void loop()
{
  //Serial.println("Valore pulsantePin");
  //Serial.println(digitalRead(pulsantePin));
  
  if( digitalRead(pulsantePin) == LOW){
    delay(attesaChiamata);
    cambiaLuce(semaforoPrincipale, GIALLO);
    delay(ritardo/2);
    cambiaLuce(semaforoPrincipale, ROSSO);
    cambiaLuce(semaforoPedonale, VERDE);
    delay(ritardo);
    cambiaLuce(semaforoPedonale, GIALLO);
    delay(ritardo/2);
    cambiaLuce(semaforoPedonale, ROSSO);
    cambiaLuce(semaforoPrincipale, VERDE);
  }
  delay(10);
  /*
  cambiaLuce(semaforo2, ROSSO);
  cambiaLuce(semaforo1, VERDE);
  delay(ritardo);
  
  cambiaLuce(semaforo1, GIALLO);
  delay(ritardo);
  
  cambiaLuce(semaforo1, ROSSO);
  cambiaLuce(semaforo2, VERDE);
  delay(ritardo);
  
  cambiaLuce(semaforo2, GIALLO);
  delay(ritardo/2);
  */
  
  /*
  digitalWrite(pin, HIGH);
  delay(ritardo);
  digitalWrite(pin, LOW);
  delay(ritardo);
  */
  
}


void cambiaLuce(int semaforo[], int luce){
  for(int i = 0; i < 3; i++){
    //Serial.println(luce);
    if(i == luce){
      Serial.println(semaforo[i]);
      digitalWrite(semaforo[i], HIGH);
    }else{
      digitalWrite(semaforo[i], LOW);
    }
  }
}
