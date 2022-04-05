// ej_01_imprimir_string
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// setup() ocurre una vez al principio
void setup() {
  
  // abrir puerto serial
  Serial.begin(9600);

}

// loop() ocurre despues de setup(), en bucle
void loop() {
  
  // imprimir mensaje entre comillas y nueva linea
  Serial.println("hola :)");

}
