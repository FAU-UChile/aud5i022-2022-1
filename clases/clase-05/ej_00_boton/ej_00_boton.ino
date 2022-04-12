// ej_00_boton

int pinEntrada = 7;
int estadoBoton = 0;

void setup() {

  pinMode(pinEntrada, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  estadoBoton = digitalRead(pinEntrada);

  Serial.println(estadoBoton);

}
