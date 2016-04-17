/********************************************************************************
**    El projecte consisteix en un muntatge amb 8 LED's i un display de 7 seg. **
**    Fa falta programació i muntatge físic.                                   **
**    Es tracta de un comptador binari-decimal fins al nº15.                   **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int a = 9;
int b = 10;
int c = 11;
int d = 12;
int e = 13;
int f = 14;
int g = 15;
int p = 3;

const int ledPin[] = {5, 6, 7, 8};
const int buttonPin[] = {2};
boolean buttonEstat[] = {LOW};

int ledNum = 4;
int buttonNum = 2;
int num = 0;               // definir variable del número a mostrar tipus byte

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(p, OUTPUT);

  for (int i = 0; i < ledNum; i++) // definir sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
  for (int i = 0; i < buttonNum; i++) // definir entrades
  {
    pinMode(buttonPin[i], INPUT);
  }
  for (int j = 0; j < ledNum ; j++) // definir estat inicals sortides, mostren número 0
  {
    digitalWrite(ledPin[j], 0);
  }
}

// La funció Loop es va repetin cada cop.
void loop()
{

  buttonEstat[0] = digitalRead(buttonPin[0]);

  if (buttonEstat[0] == LOW)  // incrementar
  {
    num = num + 1;                 // incrementar el número a mostrar
    for (int j = 0; j < ledNum ; j++)  // actualitzar estat leds per mostrar número
    {
      digitalWrite(ledPin[j], bitRead(num, j));
    }
    delay(500);    // per evitar que en una pulsació curta salti més d'un número

    if (num == 16) {
      num = 0;
    }

    // Nº0
    if (num == 0) {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      digitalWrite(p, LOW);
    }

    // Nº1
    else if (num == 1) {
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(p, LOW);
    }

    // Nº2
    else if (num == 2) {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      digitalWrite(p, LOW);

    }

    // Nº3
    else if (num == 3) {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      digitalWrite(p, LOW);

    }

    // Nº4
    else if (num == 4) {
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(p, LOW);
    }

    // Nº5
    else if (num == 5) {
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(p, LOW);

    }

    // Nº6
    else if (num == 6) {
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(p, LOW);

    }

    // Nº7
    else if (num == 7) {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(p, LOW);

    }

    // Nº8
    else if (num == 8) {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(p, LOW);

    }

    // Nº9
    else if (num == 9) {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(p, LOW);

    }

    // Nº10
    else if (num == 10) {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      digitalWrite(p, HIGH);
    }

  }

  // Nº11
  else if (num == 11) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(p, HIGH);

  }

  // Nº12
  else if (num == 12) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(p, HIGH);

  }

  // Nº13
  else if (num == 13) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(p, HIGH);
  }

  // Nº14
  else if (num == 14) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(p, HIGH);
  }

  // Nº15
  else if (num == 15) {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(p, HIGH);

  }
}
