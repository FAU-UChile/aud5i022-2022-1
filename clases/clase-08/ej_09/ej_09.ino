// ej_01_arduino_envia_boton_potenciometro
// por montoyamoraga
// v0.0.1 mayo 2022
// hecho con Arduino Uno y IDE 1.8.19
// basado en VirtualColorMixer

const int pinPotenciometro = A0;
int valorPotenciometro = 0;

const int pinFoto = A1;
int valorFoto = 0;

int minFoto = 1023;
int maxFoto = 0;

void setup() {

  // iniciar comunicacion serial
  Serial.begin(9600);

}

void loop() {

  // leer valores
  valorPotenciometro = analogRead(pinPotenciometro);
  valorFoto = analogRead(pinFoto);

  // acondicionar valor fotorresistor
  mapearFoto();

  // imprimir valores por puerto serial
  Serial.print(valorPotenciometro);
  Serial.print(",");
  Serial.print(valorFoto);
  Serial.println("");

}

void mapearFoto() {
  
  if (valorFoto < minFoto) {
    minFoto = valorFoto;
  }

  if (valorFoto > maxFoto) {
    maxFoto = valorFoto;
  }

  valorFoto = map(valorFoto, minFoto, maxFoto, 0, 1023);
  
}
