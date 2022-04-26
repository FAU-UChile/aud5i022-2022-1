
// este codigo no requiere hardware extra
// solamente Arduino Uno

// es para aprender for loop
// y arreglos

int maximo = 8;

int misNumeros[] = {
  2020, 2021, 2022, 2023
};

// arreglo de Strings
// a su vez un String es un arreglo de chars
// asterisco * es tema avanzado, pointers
// agregar poema de javiera mena
char *javiera[] = {"sol de invierno",
                   "dejé de mentirte",
                   "y justo te vas",
                   "yo sigo en el mismo lugar",
                   "te espero en la plaza",
                   "si quieres venir",
                   "yo creo que no es bueno tan luego",
                   "me acuerdo de ti",
                   "con las canciones en la radio",
                   "tantas canciones buenas"
                  };

void setup() {

  // abrir puerto serial
  Serial.begin(9600);



}

void loop() {

  // for es una construccion de codigo
  // que esta presente en todos los lenguajes de programacion
  // sirve para contar, iterar, recorrer elementos en un arreglo
  // el paréntesis de for()
  // incluye 3 líneas de código cortas
  // separadas por punto y coma ;
  // la 1a es para declarar una variable a iterar
  // e inicializar su valor
  // la 2a es la condicion de finalizacion
  // la 3a es para actualizar valor
  for (int i = 0; i < maximo; i++) {
    Serial.println(i);
  }

}
