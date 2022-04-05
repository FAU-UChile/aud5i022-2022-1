// ejemplo_led_interno
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// variable para pin con LED interno
int pinLED = 13;

// setup() ocurre una vez, al principio
void setup() {
  
  // hacer el pin digital sea salida (OUTPUT)
  pinMode(pinLED, OUTPUT);
  
}

// loop() ocurre despues de setup(), en bucle
void loop() {
  
  // escribir en el pin 1 o voltaje lógico alto (HIGH)
  digitalWrite(pinLED, HIGH);

  // esperar 1 segundo
  delay(1000);
  
  // escribir en el pin 0 o voltaje lógico bajo (LOW)
  digitalWrite(pinLED, LOW);

  // esperar 1 segundo
  delay(1000);
  
}
