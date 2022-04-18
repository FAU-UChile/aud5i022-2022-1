// theremin con fotoresistor
// basado en ejemplo p06_LightTheremin

// circuito:
// fotoresistor
// resistor 10kOhm
// parlante


// incluir duracion aleatoria?
// quitar delay y agregar logica para intervalos sin delay?

const int pinEntrada = A0;

int sensorValor = 0;

// empezar con los peores valores posibles
// de min y max para calibrarlos
int sensorMin = 1023;
int sensorMax = 0;

const int frecuenciaMin = 50;
const int frecuenciaMax = 4000;

const int pinSalida = 8;

int duracion = 20;

const int duracionMin = 10;
const int duracionMax = 1000;

unsigned long tiempoCalibracion = 5000;

void setup() {

  // rutina de calibracion inicial

  // prender LED interno
  digitalWrite(LED_BUILTIN, HIGH);

  while (millis() < 5000) {

    // actualizar valor sensor
    sensorValor = analogRead(pinEntrada);

    // actualizar min
    if (sensorValor < sensorMin) {
      sensorMin = sensorValor;
    }

    // actualizar max
    if (sensorValor > sensorMax) {
      sensorMax = sensorValor;
    }

  }
  // apagar LED interno
  digitalWrite(LED_BUILTIN, LOW);


}

void loop() {

  // actualizar valor entrada
  sensorValor = analogRead(pinEntrada);

  // mapear el valor a un rango
  int frecuencia = map(valorSensor, sensorMin, sensorMax, frecMin, frecMax);

  // duracionAleatoria

  // emitir el tono por una cantidad de tiempo
  tone(pinSalida, frecuencia, duracion);

}
