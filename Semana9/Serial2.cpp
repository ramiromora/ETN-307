
int incomingByte = 0;    // variable to hold the analog value
int ledPin = 13; 

void setup() {
  // open the serial port at 9600 bps:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
// read the analog input on pin 0:
  if (Serial.available() > 0) {
      // read the incoming byte:
    incomingByte = Serial.read();
    incomingByte-=48;
    Serial.println(incomingByte);
    if(incomingByte%2){
      digitalWrite(ledPin, HIGH);  // Enciende el LED 
      delay(1000);      // Pause de 1 segundo 
      digitalWrite(ledPin, LOW);  // Apaga el LED 
      delay(1000);
    }
  }
  // delay 10 milliseconds before the next reading:
  delay(10);
}
