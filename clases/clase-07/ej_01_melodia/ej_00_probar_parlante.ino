// ej_00_melodia
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19
// traduccion a español de ejemplo Arduino toneMelody

// incluir archivo en otra pestaña
#include "notas.h"

// declarar arreglo de enteros
// para melodia de 8 notas
int melodia[] = {
  NOTA_DO4, NOTA_SOL3,
  NOTA_SOL3, NOTA_LA3,
  NOTA_SOL3, 0,
  NOTA_SI3, NOTA_DO4
};

// declarar arreglo de enteros
// para duracion de 8 notas
int duraciones[] = {
  1, 2,
  2, 1,
  1, 1,
  1, 1
};

// multiplicador de la duracion
int multiplicadorDuracion = 4;

// pin de conexion del parlante
int pinParlante = 8;

// pausa entre notas
float multiplicadorPausa = 1.3;

// setup() ocurre una vez, al principio
void setup() {

  // bucle for
  // iterador es nota y parte en 0
  // repetir hasta que nota < 8
  // en cada iteracion aumentar nota en 1
  for (int nota = 0; nota < 8 ; nota++) {

    // duracion de la nota en milisegundos
    int duracionNota = 1000 / (duraciones[nota] * multiplicadorDuracion);

    // tone(pin, frecuencia, duracion)
    tone(pinParlante, melodia[nota], duracionNota);

    // pausa entre notas
    int pausa = duracionNota * multiplicadorPausa;

    // pausar para mantener nota
    delay(pausa);

    // silenciar nota
    noTone(pinParlante);

  }

}

// loop() ocurre después de setup(), en bucle
void loop() {

  // nada

}
