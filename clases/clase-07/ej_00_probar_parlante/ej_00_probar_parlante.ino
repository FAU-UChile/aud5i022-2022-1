// ej_00_probar_parlante
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// pin de conexion del parlante
const int pinParlante = 8;

// frecuencia del sonido
const int frecuencia = 440;

// duracion del sonido
const int duracion = 100;

// pausa entre sonidos
const int pausa = 200;

// setup() ocurre una vez, al principio
void setup() {

  // tone(pin, frecuencia, tiempo)
  tone(pinParlante, frecuencia, duracion);

  // pausa para mantener sonido
  delay(pausa);

  // silenciar sonido
  noTone(pinParlante);
}

// loop() ocurre después de setup(), en bucle
void loop() {

  // nada

}
