//https://create.arduino.cc/projecthub/javier-munoz-saez/simple-arduino-chronometer-7f9106?ref=platform&ref_id=424_trending__beginner_&offset=21
//coded by Javier Muñoz 23/10/2017
//questions and singed telegrams to javimusama@gmail.com
#include <EEPROM.h>

#define interruptPin 2

#define eeAddress 0 //ADDRESS FOR THE ARDUINO´S EEPROM (internal non volatile memory)


  float starttime = 0;  //Variables to do the math
  float endtime=0;
  float resulttime=0, oldresulttime=0;

  
void setup() {
  Serial.begin(9600);
    while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  Serial.println("Serial comms are ready sir!:.. bip bip");
  attachInterrupt(digitalPinToInterrupt(interruptPin), refreshTime, CHANGE);//activates the function when the logic level of interruptPin changes so: (__-HERE------------------_HERE____)this way it stores the time our finger was pressing the button
}

void loop() {
//your stuff here
//(eeprom stored) last time measured in miliseconds "float resulttime"
}


void refreshTime(){
  if(digitalRead(interruptPin)){
  starttime=millis(); 
  Serial.print("Start time: ");   Serial.println(starttime); 
  }else 
  if(digitalRead(interruptPin)==LOW){
  endtime=millis();
  resulttime=endtime-starttime;
  Serial.print("End time: ");  Serial.println(endtime);
  Serial.print("Result time: ");  Serial.println(resulttime);
WhatsNewEeprom();
  }
}
void WhatsNewEeprom(){
  Serial.println("-----------checking eeprom");
  EEPROM.get( eeAddress, oldresulttime );
  Serial.print("oldresulttime");Serial.println(oldresulttime);
  Serial.print("resulttime");Serial.println(resulttime);
  if(resulttime!=oldresulttime){
  EEPROM.put( eeAddress, resulttime); 
  Serial.print("-----Ding!New time recorded in eeprom: ");Serial.println(resulttime);
  }else{
    Serial.println("No new time found, eeprom was not disturbed");
  }

}
