int numeroEstudiantes = 29;

void setup() {
  size(500, 500);
  background(0);
  textSize(width/10);
  textAlign(CENTER);
  text("hola", width/2, height/2);
 
}

void draw() {
}

void mouseClicked() {
  background(0);
  text(floor(random(numeroEstudiantes)), width/2, height/2);
}
