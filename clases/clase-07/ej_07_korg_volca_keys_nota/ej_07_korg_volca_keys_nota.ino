// ej_07_korg_volca_keys_nota
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// pin de conexion del potenciometro
const int pinPotenciometro = A0;

// variable para almacenar valor potenciometro
int valorPotenciometro = 0;

// duracion del sonido
int duracion = 100;

// canal MIDI del instrumento
// este valor esta en rango [1, 16]
const int canalMIDI = 1;

// para hacer un mensaje noteOn en MIDI
// el primer byte esta en rango [144, 159]
// porque es 143 + canalMIDI
const int noteOnMIDI = 143;

// escala mayor (do re mi fa sol la si)
int escala[] = {0, 2, 4, 5, 7, 9, 11};

// escala menor (do re miB fa sol laB siB)
//int escala[] = {0, 2, 3, 5, 7, 8, 10};

// escala pentatonica (do re mi sol la)
//int escala[] = {0, 2, 4, 7, 9};

// largo de la escala
int escalaLargo = 0;

// nota base de la escala
int notaBase = 40;

// nota actual a ser tocada
int notaActual = 0;

void setup() {

  // abrir comunicacion serial
  Serial.begin(31250);

  // calcular largo escala
  // sizeof retorna el numero de bytes del arreglo
  // y lo dividimos por el numero de bytes del primer elemento
  // para asi tener el numero de elementos en el arreglo
  escalaLargo = sizeof(escala) / sizeof(escala[0]);

}

void loop() {

  // iterar en toda la escala
  for (int i = 0; i < escalaLargo; i++) {

    // actualizar valor potenciometro
    valorPotenciometro = analogRead(pinPotenciometro);

    // actualizar valor duracion
    duracion = map(valorPotenciometro, 0, 1023, 100, 1000);

    // calcular nota actual
    notaActual = notaBase + escala[i];

    // emitir mensaje noteOn con velocidad maxima
    noteOn(notaActual, 127);
    delay(duracion/2);

    // emitir mensaje noteOn con velocidad minima
    noteOn(notaActual, 0);
    delay(duracion/2);
  }

}

// funcion para emitir mensaje MIDI noteOn
void noteOn(int nota, int velocidad) {
  
  // escribir primer byte de noteOn
  Serial.write(noteOnMIDI + canalMIDI);
  
  // escribir siguiente byte con info de nota
  Serial.write(nota);
  
  // escribir siguiente byte con info de velocidad
  Serial.write(velocidad);

}
