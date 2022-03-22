// semaforo_processing
// por montoyamoraga
// Processing 4.0
// marzo 2022

// se mide en segundos
int tiempoRojo = 5;
int tiempoAmarillo = 2;
int tiempoVerde = 5;
int tiempoMaximo = tiempoRojo + tiempoAmarillo + tiempoVerde + tiempoAmarillo;

int luzDiametro = 100;

// colores Red Green Blue
color rojo = color(255, 0, 0);
color amarillo = color(255, 255, 0);
color verde = color(0, 255, 0);

int tiempoActual = 0;

void setup() {
  size(500, 500);
  background(0);
  noStroke();
}

void draw() {

  background(0);

  // actualizar tiempo en segundos
  tiempoActual =  (millis() / 1000) % tiempoMaximo;

  if (tiempoActual < tiempoRojo) {
    fill(rojo);
  } else if (tiempoActual < tiempoRojo + tiempoAmarillo) {
    fill(amarillo);
  } else if (tiempoActual < tiempoRojo + tiempoAmarillo + tiempoVerde) {
    fill(verde);
  } else if (tiempoActual < tiempoRojo + tiempoAmarillo + tiempoVerde + tiempoAmarillo) {
    fill(amarillo);
  }

  ellipse(width/2, height/2, luzDiametro, luzDiametro);
}
