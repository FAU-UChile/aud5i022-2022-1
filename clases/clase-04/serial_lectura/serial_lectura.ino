int byteEntrada;

void setup() {
  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {
    //  leer el byte
    byteEntrada = Serial.read();

    // imprimir el resultado recibido en sistema decimal
    Serial.print("recibido: ");
    // DEC para asegurarnos que se imprime en decimal
    Serial.println(byteEntrada, DEC);
  }
}
