int perillaIzquierda = 0;
int perillaDerecha = 0;

int perillaMin = 0;
int perillaMax = 127;

int luzDiametroMax = 100;
int luzDiametro = 0;

int luzRojoMax = 255;
int luzRojo = 0;

void setup() {

  size(500, 500);

  background(0);
  noStroke();
}

void draw() {
  
  // actualizar valores de perilla
  perillaIzquierda = perillaMax * mouseX/width;
  perillaDerecha = perillaMax * mouseY/height;

  // actualizar diametroActual
  luzDiametro = luzDiametroMax * perillaIzquierda / perillaMax;
  
  // actualizar color
  luzRojo = luzRojoMax * perillaDerecha / perillaMax;

  // dibujar
  background(0);

  fill(luzRojo, 255 - luzRojo, 0);
  ellipse(width/2, height/2, luzDiametro, luzDiametro);
}
