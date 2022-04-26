// ej_03_sonido_pulsador_aleatorio
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// pin de conexion del parlante
const int pinParlante = 8;

// pin de conexion del pulsador
const int pinPulsador = 7;

// variables para almacenar estados del pulsador
int estadoPulsador = 0;
int estadoPulsadorAnterior = 0;

// frecuencia del sonido
int frecuencia = 440;

// duracion del sonido
const int duracion = 100;

// pausa entre sonidos
const int pausa = 200;

// setup() ocurre una vez, al principio
void setup() {

  // configurar pin boton como entrada digital
  pinMode(pinPulsador, INPUT);

}

// loop() ocurre después de setup(), en bucle
void loop() {

  // almacenar valor actual en valor anterior
  estadoPulsadorAnterior = estadoPulsador;

  // actualizar valor actual
  estadoPulsador = digitalRead(pinPulsador);

  // si el pulsador está presionado
  if (estadoPulsador == HIGH) {

    // si el pulsador no estaba presionado antes
    if (estadoPulsadorAnterior == LOW) {
      
      // elegir frecuencia aleatoria
      frecuencia = random(300, 1300);
    }

    // emitir sonido
    tone(pinParlante, frecuencia);

  }

  // si el pulsador no está presionado
  else {

    // silenciar sonido
    noTone(pinParlante);

  }

}
