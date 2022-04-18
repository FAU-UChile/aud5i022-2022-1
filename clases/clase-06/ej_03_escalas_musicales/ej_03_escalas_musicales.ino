
#include "notas.h"

// elegir una nota del archivo notas.hint notaBase = NOTA_SOLS1;

// escala mayor
// partiendo en do
// do re mi fa sol la si
int escala[] = {0, 2, 4, 5, 7, 9, 11};

// escala menor
// do re mib fa sol lab sib
//int escalaMenor[] = {0, 2, 3, 5, 7, 8, 10};

// escala pentatonica
// do re mi sol la
//int escalaPentatonica[] = {0, 2, 4, 7, 9};

int escalaLargo = 0;

int notaActual = 0;

boolean enOrden = true;

void setup() {

  // calcular largo escala
  // sizeof retorna el numero de bytes del arreglo
  // y lo dividimos por el numero de bytes del primer elemento
  // para asi tener el numero de elementos en el arreglo
  escalaLargo = sizeof(escala) / sizeof(escala[0]);

}

void loop() {

  // actualizar nota
  if (enOrden) {
    nota = nota + 1;
    // % modulo para obtener resto
    // de dividir por largo de la escala
    // para no pasarse de largo
    nota = nota % escalaLargo;
  }

  else {

  }

}
