// ej_00_processing_recibe_numeros
// por montoyamoraga
// v0.0.1 mayo 2022
// hecho con Arduino Uno y IDE 1.8.19
// basado en Examples/04. Communication/VirtualColorMixer

// importar biblioteca para comunicacion serial
import processing.serial.*;

// declarar nueva variable puerto de clase Serial
Serial puerto;

// declarar variable para elegir puerto serial del Arduino
int numeroPuerto = 11;

// declarar variable para color elipse
float colorElipse = 0;

// declara variable para diametro elipse
float valorDiametro = 0;

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

void draw() {

  // fondo negro
  background(0);

  // si el boton no esta presionado
  if (colorElipse == 0) {
    // color rojo
    fill(255, 0, 0);
  }
  // si el boton si esta presionado
  else {
    // color verde
    fill(0, 255, 0);
  }

  // dibujar elipse en el medio de la pantalla
  // ellipse(posX, posY, diametroX, diametroY);
  ellipse(width/2, height/2, valorDiametro, valorDiametro);
}

// evento serial
void serialEvent(Serial myPort) {
  
  // leer String ASCII hasta caracter nueva linea
  String entrada = myPort.readStringUntil('\n');

  // si entrada no esta vacia
  if (entrada != null) {

    // borrar caracteres blancos
    entrada = trim(entrada);

    // separar por comas y crear un arreglo de numeros float
    float[] datos = float(split(entrada, ","));

    // si el arreglo tiene al menos dos elementos, llego bien
    if (datos.length >= 2) {
      // map them to the range 0-255:

      // asignar elemento 0 de la entrada al color
      colorElipse = datos[0];

      // asignar elemento 1 de la entrada al diametro
      // y mapear desde rango [0,1023] a rango [0, width]
      valorDiametro = map(datos[1], 0, 1023, 0, width);
    }
  }
}
