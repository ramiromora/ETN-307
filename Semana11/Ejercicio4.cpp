/*
PROBLEMA:
Controlar a través de un potenciómetro el sentido de desplazamiento de un led encendido con Arduino.
DESCRIPCIÓN:
Para este laboratorio se desea controlar el sentido de desplazamiento de un led encendido, el sentido dependerá del valor de un potenciómetro, si el valor del potenciómetro se encuentra del 0% al 33%, el desplazamiento se realizara de derecha a izquierda, si el valor del potenciómetro se encuentra del 34% al 66%, el desplazamiento se realizara del centro a los extremos y por ultimo si el valor del potenciómetro se encuentra del 67% al 100%, el desplazamiento será de izquierda a derecha.       
Para el mismo se deberá de usar la lectura de un puerto analógico a través del comando analogRead(), adicionalmente este puerto tiene una resolución de 10 bits, eso quiere decir que el valor máximo leído es de 1023 y el valor mínimo es 0, para el escalamiento se deberá de usar el comando map(), el cual realiza la conversión de rangos o valores.
MATERIAL:
Los materiales que se usaran para este laboratorio son los siguientes:
6 Resistencias de 220[ohm]
1 Placa Arduino (UNO, MEGA o nano)
1 ProtoBoard
6 Leds
1 Potenciómetro lineal de 100k[ohm] 
DIAGRAMA:

CODIGO:
*/
#define c 6   // define la cantidad de leds a usar
int leds[c]={8,9,10,11,12,13}; // define los puertos digitales para los leds
void setup() {
  Serial.begin(9600);
  for(int j=0;j<c;j++){
    pinMode(leds[j],OUTPUT);  // definimos para los leds como salidas
    }
}

void loop() {
  int valor1 = analogRead(A5); // leemos el valor del puerto analógico 5
  Serial.print("valor1: ");
  Serial.println(valor1); // vemos los valores del puerto
  int valor2 = map(valor1,0,1023,0,100); //escalamos los valores
  Serial.print("valor2: "); 
  Serial.println(valor2); // vemos los valores escalados
  if(valor2<=33){ // si esta en el rango de 0% a 33%
    // realiza el desplazamiento de derecha a izquierda
    digitalWrite(leds[5],LOW);
    digitalWrite(leds[0],HIGH);
    delay(100);
    for(int j=1;j<c;j++){
      digitalWrite(leds[j-1],LOW);
      digitalWrite(leds[j],HIGH);
      delay(100);
      }
    }
  else if(valor2>=67){
    // si no se encunetra pulsado realiza el desplazamiento de
    // izquierda a derecha
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[5],HIGH);
    delay(100);
    for(int j=(c-1);j>=0;j--){
      digitalWrite(leds[j],LOW);
      digitalWrite(leds[j-1],HIGH);
      delay(100);
      }
    }
  else{
    // si el valor se encuentra de 34% a 66% realiza el desplazamiento
    // del centro a los extremos 
    digitalWrite(leds[5],LOW);
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    delay(100);
    int k=2;
    for(int j=2;j>0;j--){
      digitalWrite(leds[j],LOW);
      digitalWrite(leds[k+1],LOW);
      digitalWrite(leds[j-1],HIGH);
      digitalWrite(leds[k+2],HIGH);
      delay(100);
      k++;
      }
    }
}           
