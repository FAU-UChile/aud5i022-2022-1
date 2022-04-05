// ej_02_imprimir_variable
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// declarar variable x
// y asignar valor inicial 1
int x = 1;

// setup() ocurre una vez al principio
void setup() {

  // abrir comunicacion serial
  Serial.begin(9600);

}


// loop() ocurre despues de setup(), en bucle
void loop() {

  // imprimir valor actual de variable x
  // imprimir nueva linea
  Serial.println(x);
  
  // aumentar valor de x
  x = x + 1;

}
