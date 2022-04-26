// ej_03_acorde
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19
// traduccion a español de ejemplo Arduino toneMelody

// incluir archivo en otra pestaña
# include "notas.h"

// ejemplo para 3 personas
int personaTotal = 3;

// persona es numero entre [0, personaTotal-1]
int persona = 0;

// elegir una nota del archivo notas.h
int notaBase = NOTA_DO4;

// acordes triada
// mayor      (nota base, 4 semitonos +, 7 semitonos +)
// menor      (nota base, 3 semitonos +, 7 semitonos +)
// disminuido (nota base, 3 semitonos +, 6 semitonos +)
// aumentado  (nota base, 4 semitonos +, 8 semitonos +)
int acordesTriada[][3] = {
  {0, 4, 7},
  {0, 3, 7},
  {0, 3, 6},
  {0, 4, 8}
};

// raiz doce de 2 o pow(2, 1/12)
const float subirSemitono = 1.0594631;

// 0 = mayor, 1 = menor, 2 = disminuido = 3 aumentado
int acordeSeleccion = 0;

int acordeFrecuencias[] = {0, 0, 0};

// pin de conexion del parlante
int pinParlante = 8;

float multiplicadorPausa = 1.3;

void setup() {

  Serial.begin(9600);

  for (int nota = 0; nota < 3; nota++) {
    acordeFrecuencias[nota] = notaBase * pow(subirSemitono, acordesTriada[acordeSeleccion][nota]);
  }

}

void loop() {

  for (int nota = 0 ; nota < 3; nota++) {
    int duracionNota = 1000 / 8;

    tone(pinParlante, acordeFrecuencias[nota], duracionNota);

    int pausa = duracionNota * multiplicadorPausa;

    // pausar para mantener nota
    delay(pausa);

    // pausar para mantener nota
    delay(pausa);

    // silenciar nota
    noTone(pinParlante);
  }

}
