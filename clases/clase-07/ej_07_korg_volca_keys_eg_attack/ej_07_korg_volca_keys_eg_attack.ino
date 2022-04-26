// ej_06_korg_volca_keys
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// pin de conexion del potenciometro
const int pinPotenciometro = A0;

// variable para almacenar valor potenciometro
int valorPotenciometro = 0;

// duracion del sonido
int duracion = 300;

// canal MIDI del instrumento
// este valor esta en rango [1, 16]
const int canalMIDI = 1;

// para hacer un mensaje noteOn en MIDI
// el primer byte esta en rango [144, 159]
// porque es 143 + canalMIDI
const int noteOnMIDI = 143;

const int controlChangeMIDI = 175;

// el numero de MIDI del EG attack es 49
const int ccEGAttack = 49;

int valorEGAttack = 0;

// escala mayor (do re mi fa sol la si)
int escala[] = {0, 2, 4, 5, 7, 9, 11};

// escala menor (do re miB fa sol laB siB)
//int escala[] = {0, 2, 3, 5, 7, 8, 10};

// escala pentatonica (do re mi sol la)
//int escala[] = {0, 2, 4, 7, 9};

int escalaLargo = 0;

int notaActual = 0;

int notaBase = 40;

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

    // actualizar valor mensaje CC
    valorEGAttack = map(valorPotenciometro, 0, 1023, 0, 127);

    // enviar mensaje CC
    controlChange(ccEGAttack ,valorEGAttack);

    // calcular nota actual
    notaActual = notaBase + escala[i];

    // emitir mensaje noteOn con velocidad maxima
    noteOn(notaActual, 127);
    delay(duracion / 2);

    // emitir mensaje noteOn con velocidad minima
    noteOn(notaActual, 0);
    delay(duracion / 2);
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

// funcion para emitir mensaje MIDI Control Change
void controlChange(int control, int valor) {

  // escribir primer byte de noteOn
  Serial.write(controlChangeMIDI + canalMIDI);

  // escribir siguiente byte con info de nota
  Serial.write(control);

  // escribir siguiente byte con info de velocidad
  Serial.write(valor);

}
