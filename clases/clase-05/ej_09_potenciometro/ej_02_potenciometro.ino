// ej_02_potenciometro

// potenciometro
// orientacion texto hacia derecha
// orientacion perilla hacia arriba
// conectar en columna e con pins:
// pin1 conectado a e5
// pin2 conectado a e6
// pin3 conectado a e7 

// arduino uno
// 5V conectado a pin1 potenciometro (fila 5)
// A0 conectado a pin2 potenciometro (fila 6)
// GND conectado a pin3 potenciometro (fila 7)

int pinEntrada = A0;

int pinSalida = 13;

int valorSensor = 0;

void setup() {
  pinMode(pinSalida, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  // actualizar valor sensor
  valorSensor = analogRead(pinEntrada);

  // imprimir valor sensor
  Serial.println(valorSensor);

  // prender LED
//  digitalWrite(pinSalida, HIGH);

  // detener el programa
//  delay(valorSensor);

  // apagar LED
//  digitalWrite(pinSalida, LOW);

  // detener el programa
//  delay(valorSensor);
  
}
