//
// https://create.arduino.cc/projecthub/adaline/lie-detector-0c5e6d?ref=platform&ref_id=424_trending__beginner_&offset=2
//
void setup(){
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  digitalWrite(2, HIGH);
  delay(500);
   digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(4, HIGH);
  delay(1500);
}

void loop()
{
  if (analogRead(A0) > 15){ //15
    digitalWrite(4, HIGH); //red
  }
  else{
    digitalWrite(4, LOW); //red
   }
   
  if (analogRead(A0) > 4) //4
  {
    digitalWrite(2, HIGH); //green
  }
  else{
    digitalWrite(2, LOW); //green
  }
  
  if (analogRead(A0) > 8) //8
  {
    digitalWrite(3, HIGH); //yellow
  }
  else{
    digitalWrite(3, LOW); //yellow
  }
 
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(20);
}
  
