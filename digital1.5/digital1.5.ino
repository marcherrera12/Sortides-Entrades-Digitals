/********************************************************************************
**    El projecte 4 consisteix en un muntatge amb 8 LED's.                     **
**    Fa falta programació i muntatge físic.                                   **
**    Els LED's conten en binari fins al nº 15.                                **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int ledVermell1 = 5;
int ledVermell2 = 6;
int ledVermell3 = 7;
int ledVermell4 = 8;
int ledVermell5 = 9;
int ledVermell6 = 10;
int ledVermell7 = 11;
int ledVermell8 = 12;
int polsador = 2;
int numero = 0;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  // Configració del pins de sortida
  pinMode(ledVermell1, OUTPUT);
  pinMode(ledVermell2, OUTPUT);
  pinMode(ledVermell3, OUTPUT);
  pinMode(ledVermell4, OUTPUT);
  pinMode(ledVermell5, OUTPUT);
  pinMode(ledVermell6, OUTPUT);
  pinMode(ledVermell7, OUTPUT);
  pinMode(ledVermell8, OUTPUT);

  // Configració del pin d'entrada
  pinMode(polsador, INPUT);
  Serial.begin(9600);

}

// La funció Loop es va repetin cada cop.
void loop()
{

  if (digitalRead(polsador) == LOW) {
    numero++;
    Serial.println(numero);
    delay(1000);
    if (numero == 16){
      numero = 0;}
    
  }
  // Nº0
  else if (numero == 0) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);
  }

  // Nº1
  else if (numero == 1) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);
  }

  // Nº2
  else if (numero == 2) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // Nº3
  else if (numero == 3) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // Nº4
  else if (numero == 4) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // Nº5
  else if (numero == 5) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // Nº6
  else if (numero == 6) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // Nº7
  else if (numero == 7) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // Nº8
  else if (numero == 8) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // Nº9
  else if (numero == 9) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // Nº10
  else if (numero == 10) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // Nº11
  else if (numero == 11) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // Nº12
  else if (numero == 12) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // Nº13
  else if (numero == 13) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // Nº14
  else if (numero == 14) {
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }

  // Nº15
  else if (numero == 15) {
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell8, LOW);

  }
}
