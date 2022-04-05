int x = 1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  x = x + 1;
  Serial.println(x);
}
