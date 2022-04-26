// ej_05_sonido_pulsador_fotorresistor
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// pin de conexion del parlante
const int pinParlante = 8;

// pin de conexion del pulsador
const int pinPulsador = 7;

// pin de conexion del fotorrresistor
const int pinFoto = A1;

// variables para almacenar estados del pulsador
int estadoPulsador = 0;
int estadoPulsadorAnterior = 0;

// variables para almacenar valores fotorresistor
int valorFoto = 0;
int valorFotoMin = 1023;
int valorFotoMax = 0;

// frecuencia del sonido
int frecuencia = 440;

// duracion del sonido
const int duracion = 100;

// pausa entre sonidos
const int pausa = 200;

// setup() ocurre una vez, al principio
void setup() {

  Serial.begin(9600);

  // configurar pin pulsador como entrada digital
  pinMode(pinPulsador, INPUT);

}

// loop() ocurre después de setup(), en bucle
void loop() {

  // actualizar valores de pulsador
  estadoPulsadorAnterior = estadoPulsador;
  estadoPulsador = digitalRead(pinPulsador);

  // actualizar valor fotorresistor
  valorFoto = analogRead(pinFoto);

  // actualizar valor minimo fotorresistor
  if (valorFoto < valorFotoMin) {
    valorFotoMin = valorFoto;
  }

  // actualizar valor maximo fotorresistor
  if (valorFoto > valorFotoMax) {
    valorFotoMax = valorFoto;
  }

  // imprimir valor fotorresistor
  Serial.println(valorFoto);

  // actualizar valor frecuencia
  // map(valor, actualMin, actualMax, nuevoMin, nuevoMax);
  frecuencia = map(valorFoto, valorFotoMin, valorFotoMax, 300, 1300);

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
