int minDado = 1;
int maxDado = 6;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("dado: ");
  Serial.println(random(minDado, maxDado + 1));
  delay(1000);
}
