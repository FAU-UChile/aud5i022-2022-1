int pinLED = 13;

int estadoLED = 0;

unsigned long tiempoAnterior = 0;
unsigned long tiempoActual = 0;

const long intervalo = 1000;

void setup() {

  pinMode(pinLED, OUTPUT);
}

void loop() {

  // actualizar tiempo actual
  tiempoActual = millis();

  // revisar si el tiempo transcurrido es mayor que intervalo
  if (tiempoActual - tiempoAnterior >= intervalo) {

    // actualizar el tiempo previo
    tiempoAnterior = tiempoActual;


    if (estadoLED == 0) {
      estadoLED = 1;
    } else {
      estadoLED = 0;
    }

    digitalWrite(pinLED, estadoLED);

  }

}
