int incomingByte = 0;   // for incoming serial data

void setup() {
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
  // read the incoming byte:
    incomingByte = Serial.read();
  // print it out in many formats:
  Serial.println(incomingByte);       // print as an ASCII-encoded decimal
  Serial.println(incomingByte, DEC);  // print as an ASCII-encoded decimal
  Serial.println(incomingByte, HEX);  // print as an ASCII-encoded hexadecimal
  Serial.println(incomingByte, OCT);  // print as an ASCII-encoded octal
  Serial.println(incomingByte, BIN);  // print as an ASCII-encoded binary

  // delay 10 milliseconds before the next reading:
  delay(10);
        }
}
