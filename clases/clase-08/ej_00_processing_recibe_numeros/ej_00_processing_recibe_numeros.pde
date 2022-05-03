// ej_00_processing_recibe_numeros
// por montoyamoraga
// v0.0.1 mayo 2022
// hecho con Arduino Uno y IDE 1.8.19

// importar biblioteca para comunicacion serial
import processing.serial.*;

// declarar nueva variable puerto de clase Serial
Serial puerto;

// declarar variable para elegir puerto serial del Arduino
int numeroPuerto = 11;

// declarar variable para diametro de la elipse
float valorDiametro = 0;

// declarar variable para posicion x
float posX = 0;

// setup() ocurre una vez, al principio
void setup() {

  // crear lienzo de 400px ancho y 200px altura
  size(400, 200);

  // imprimir en consola todos los puertos seriales disponibles
  printArray(Serial.list());

  // abrir puerto serial correspondiente , a tasa de 9600 baud
  puerto = new Serial(this, Serial.list()[numeroPuerto], 9600);

  // generar un nuevo evento de lectura cuando se recibe caracter "nueva linea"
  puerto.bufferUntil('\n');
}

// draw() ocurre en bucle, despues de setup()
void draw() {

  // fondo negro
  background(0);

  // dibujar elipse en el medio de la pantalla
  // ellipse(posX, posY, diametroX, diametroY);
  ellipse(posX, height/2, valorDiametro, valorDiametro);
}

// evento
void serialEvent(Serial puerto) {

  // leer String ASCII hasta caracter nueva linea
  String entrada = puerto.readStringUntil('\n');

  // si entrada no esta vacia
  if (entrada != null) {

    // borrar caracteres blancos
    entrada = trim(entrada);

    // separar por comas y crear un arreglo de numeros float
    float[] datos = float(split(entrada, ","));

    // si el arreglo tiene al menos dos elementos, llego bien

    if (datos.length >= 2) {
      
      // asignar elemento 0 de la entrada al diametro
      valorDiametro = datos[0];
      
      // asignar elemento 1 de la entrada a posicion X
      posX = datos[1];
      
    }
  }
}
