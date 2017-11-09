/*
PROBLEMA:
Control de sentido de desplazamiento de un led de izquierda a derecha con un pulsador y Arduino.
DESCRIPCIÓN:
Para el laboratorio se desea realizar un programa que sea capaz de desplazar un led encendido, el sentido de desplazamiento dependerá del estado en el que se encuentre el pulsador, si el pulsador no se encuentre pulsado, el led encendido recorrerá de izquierda a derecha, para el otro caso si el pulsador se encuentra pulsado, el led encendido cambiara de sentido de desplazamiento de derecha a izquierda, para el desplazamiento considere un retardo de 50 milisegundos. 
MATERIAL:
Los materiales que se usaran para este laboratorio son los siguientes:
•	6 resistencias de 220 [ohm]
•	1 resistencia de 10k [ohm] 
•	1 Placa de Arduino (UNO, MEGA o nano)
•	1 ProtoBoard
•	6 Leds
•	1 pulsador

*/

#define c 6   // define la cantidad de leds a usar
int leds[c]={8,9,10,11,12,13}; // define los puertos digitales para los leds
int pulsador=3; // puerto digital para el pulsador

void setup() {
  pinMode(pulsador,INPUT);    // definimos para el pulsador como entrada
  for(int j=0;j<c;j++){
    pinMode(leds[j],OUTPUT);  // definimos para los leds como salidas
    }
}

void loop() {
  if(digitalRead(pulsador)==1){ // si se encunetra pulsado
    // realiza el desplazamiento de derecha a izquierda
    digitalWrite(leds[c-1],LOW);
    digitalWrite(leds[0],HIGH);
    delay(50);
    for(int j=1;j<c;j++){
      digitalWrite(leds[j-1],LOW);
      digitalWrite(leds[j],HIGH);
      delay(50);
      }
    }
  else{
    // si no se encunetra pulsado realiza el desplazamiento de izquierda a derecha
    digitalWrite(leds[5],HIGH);
    delay(50);
    for(int j=(c-1);j>=0;j--){
      digitalWrite(leds[j],LOW);
      digitalWrite(leds[j-1],HIGH);
      delay(50);
      }
    }
}
