#include <SoftwareSerial.h>

byte note = 0;

SoftwareSerial midiSerial(2, 3);

void setup() {

  Serial.begin(9600);

  // MIDI baud rate
  midiSerial.begin(31250);

}

void loop() {

  noteOn(144, random(128), random(128));
  delay(1000);
}

void noteOn(byte byte0, byte byte1, byte byte2) {

  midiSerial.write(byte0);
  midiSerial.write(byte1);
  midiSerial.write(byte2);
}
