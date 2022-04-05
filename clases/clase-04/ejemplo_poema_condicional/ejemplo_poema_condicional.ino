int byteEntrada;

int numeroMin = 48;
int numeroMax = 57;

char *poema[] = {"verso0", "verso1", "verso2",
                 "verso3", "verso4", "verso5",
                 "verso6", "verso7", "verso8",
                 "verso9"
                };

void setup() {
  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {
    //  leer el byte
    byteEntrada = Serial.read();

    if (byteEntrada <= numeroMax && byteEntrada >= numeroMin) {
      Serial.println(poema[byteEntrada-numeroMin]);
    }
  }
}
