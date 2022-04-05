// ejemplo_dado
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19
// valores minimos y maximos de dado

int minDado = 1;
int maxDado = 6;

// setup() ocurre una vez, al principio
void setup() {

  // iniciar comunicacion serial
  Serial.begin(9600);

}

// loop() ocurre en bucle, despues de setup
void loop() {

  // random() arroja valor aleatorio en [min, max[
  int resultado = random(minDado, maxDado + 1);

  // imprimir texto
  Serial.print("dado: ");

  // imprimir resultado y nueva linea
  Serial.println(resultado);

  // esperar 1 segundo
  delay(1000);
  
}
