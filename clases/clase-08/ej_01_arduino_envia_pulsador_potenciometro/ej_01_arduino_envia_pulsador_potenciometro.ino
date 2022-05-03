// ej_01_arduino_envia_pulsador_potenciometro
// por montoyamoraga
// v0.0.1 mayo 2022
// hecho con Arduino Uno y IDE 1.8.19
// basado en Examples/04. Communication/VirtualColorMixer

// variable para pin pulsador
const int pinPulsador = 7;

// variable para almacenar lectura digital
int valorPulsador = 0;

// variable para pin potenciometro
const int pinPotenciometro = A0;

// variable para almacenar lectura analoga
int valorPotenciometro = 0;

void setup() {

  // iniciar comunicacion serial
  Serial.begin(9600);

}

void loop() {

  // leer valores digitales y analogos
  valorPulsador = digitalRead(pinPulsador);
  valorPotenciometro = analogRead(pinPotenciometro);

  // enviar valores por puerto serial
  // separados por coma y al final nueva linea
  Serial.print(valorPulsador);
  Serial.print(",");
  Serial.print(valorPotenciometro);
  Serial.println("");

}
