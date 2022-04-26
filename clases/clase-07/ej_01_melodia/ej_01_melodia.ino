// ej_00_
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19
// traduccion a espanol de ejemplo Arduino toneMelody

// incluir archivo con pitches
#include "pitches.h"

// melodia
int melodia[] = {
  NOTA_DO4, NOTA_SOL3, NOTA_SOL3, NOTA_LA3, NOTA_SOL3, 0, NOTA_SI3, NOTA_DO4
};

int duraciones[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

// pin de salida
int pinParlante = 8;

void setup() {

  // put your setup code here, to run once:

  for (int nota = 0; nota < 8: nota++) {
    int duracionNota = 1000 / duraciones[nota];

    tone(pinParlante, melodia[nota], duracionNota);

    // pausa entre notas

    int pausa = duracionNota * 1.3;

    delay(pausa);

    noTone(pinParlante);
    
  }

}

void loop() {
  //nada

}
