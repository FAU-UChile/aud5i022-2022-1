// ej_02_potenciometro

// potenciometro
// pin central conectado a entrada analoga 0
// pin arriba conectado a 5V
// pin abajo conectado a tierra

int pinEntrada = A0;

int pinSalida = 13;

int valorSensor = 0;

void setup() {
  pinMode(pinSalida, OUTPUT);
}

void loop() {
  
  // actualizar valor sensor
  valorSensor = analogRead(pinEntrada);

  // prender LED
  digitalWrite(pinSalida, HIGH);

  // detener el programa
  delay(valorSensor);

  // apagar LED
  digitalWrite(pinSalida, LOW);

  // detener el programa
  delay(valorSensor);
  
}
