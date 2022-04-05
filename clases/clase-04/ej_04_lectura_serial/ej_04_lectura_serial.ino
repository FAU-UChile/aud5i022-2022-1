// ej_04_lectura_serial
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// variable para almacenar entrada
int byteEntrada;

// setup() ocurre una vez, al principio
void setup() {

  // iniciar comunicacion serial
  Serial.begin(9600);

}

// loop() ocurre en bucle, despues de setup()
void loop() {

  // si es que existen bytes disponibles en el puerto serial
  if (Serial.available() > 0) {
    
    //  leer un byte
    byteEntrada = Serial.read();

    // imprimir mensaje de recibido
    Serial.print("recibido: ");
    
    // imprimir bit de entrada en decimal
    // imprimir nueva linea
    Serial.println(byteEntrada, DEC);
  }
  
}
