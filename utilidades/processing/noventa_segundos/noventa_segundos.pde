boolean esPausa = true;

int segundosMin = 0;
int segundosMax = 90;
int segundosInicio = -1;
int segundosAhora = -1;
int segundosPantalla = segundosMax;

void setup() {
  size(500, 500);
  fill(255);
  textSize(200);
  textAlign(CENTER, BASELINE);
  background(0);
  text(segundosPantalla, width/2, height/2+textAscent()/4);
}

void draw() {
  if (!esPausa) {
    // actualizar segundosActuales
    segundosAhora = millis() / 1000;
    // calcular diferencia
    segundosPantalla = segundosMax - (segundosAhora - segundosInicio);
    if (segundosPantalla < segundosMax) {
      background(0);
    }
    if (segundosPantalla < segundosMin) {
      background(255, 0, 0);
    }
    text(segundosPantalla, width/2, height/2+textAscent()/4);
  }
 
}

void mouseClicked() {
  segundosInicio = millis() / 1000;
  esPausa = false;
  segundosPantalla = segundosMax;
  background(0);
  text(segundosPantalla, width/2, height/2+textAscent()/4);
}
