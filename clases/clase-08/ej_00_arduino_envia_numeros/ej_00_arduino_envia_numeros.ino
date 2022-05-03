// ej_00_arduino_enviar_numeros
// por montoyamoraga
// v0.0.1 mayo 2022
// hecho con Arduino Uno y IDE 1.8.19

// declarar variable para contador
int contador = 0;

// declarar variable para aleatoreidad
int aleatorio = 0;

void setup() {

  // iniciar comunicacion serial
  Serial.begin(9600);

}

void loop() {

  // enviar valores
  // enviar valores separados por coma
  // y al final enviar nueva linea
  Serial.print(contador);
  Serial.print(",");
  Serial.print(aleatorio);
  Serial.println("");

  // actualizar valor contador
  contador = contador + 1;

  // actualizar valor aleatorio
  aleatorio = random(0, 255);

  // pausa
  delay(100);

}
