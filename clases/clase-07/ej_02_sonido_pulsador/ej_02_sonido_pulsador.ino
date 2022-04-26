// ej_02_sonido_pulsador
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// pin de conexion del parlante
const int pinParlante = 8;

// pin de conexion del pulsador
const int pinPulsador = 7;

// variable para almacenar estado pulsador
int estadoPulsador = 0;

// frecuencia del sonido
const int frecuencia = 440;

// duracion del sonido
const int duracion = 100;

// pausa entre sonidos
const int pausa = 200;

// setup() ocurre una vez, al principio
void setup() {

  // configurar pin pulsador como entrada digital
  pinMode(pinPulsador, INPUT);

}

// loop() ocurre después de setup(), en bucle
void loop() {

  // leer pulsador y actualizar variable
  estadoPulsador = digitalRead(pinPulsador);

  // si el pulsador está presionado
  if (estadoPulsador == HIGH) {

    // emitir sonido
    tone(pinParlante, frecuencia);

  }

  // si el pulsador no está presionado
  else {

    // silenciar sonido
    noTone(pinParlante);

  }

}
