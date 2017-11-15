/*
PROBLEMA:
Controlar la velocidad de desplazamiento y la intensidad de brillo de los leds, a través de dos potenciómetros con la placa Arduino.
DESCRIPCIÓN:
Para el laboratorio se pide realizar un programa que sea capaz de cambiar la velocidad de desplazamiento de un led encendido mediante un potenciómetro, de 10 milisegundos como mínimo a 1 segundo como máximo, el cual se desplaza primero de izquierda a derecha y luego de derecha a izquierda.
Adicionalmente también se pide poder controlar la intensidad de brillo de los mismos, esto a través de otro potenciómetro.
Para poder controlar la intensidad de brillo se utilizara las salidas PWM (modulación por ancho de pulso) que contiene el Arduino, por lo cual se utilizara la instrucción de analogWrite() que realiza la escritura por un puerto digital, adicionalmente estos puertos contienen una resolución de 8 bits, por lo tanto el valor máximo proporcionado será de 255 (led totalmente encendido) y como valor mínimo de 0 (led totalmente apagado), de esta manera se podrá controlar totalmente la intensidad del brillo.
También se utilizara la instrucción map() descrita anteriormente.   
MATERIAL:
Los materiales que se usaran para este laboratorio son los siguientes:
6 resistencias de 220[ohm]
1 Placa Arduino (UNO, MEGA o nano)
1 ProtoBoard
6 Leds
2 Potenciómetros lineales de 100k[ohm]
DIAGRAMA:

CODIGO:
*/
#define c 6   // define la cantidadPROBLEMA:
Controlar la velocidad de desplazamiento y la intensidad de brillo de los leds, a través de dos potenciómetros con la placa Arduino.
DESCRIPCIÓN:
Para el laboratorio se pide realizar un programa que sea capaz de cambiar la velocidad de desplazamiento de un led encendido mediante un potenciómetro, de 10 milisegundos como mínimo a 1 segundo como máximo, el cual se desplaza primero de izquierda a derecha y luego de derecha a izquierda.
Adicionalmente también se pide poder controlar la intensidad de brillo de los mismos, esto a través de otro potenciómetro.
Para poder controlar la intensidad de brillo se utilizara las salidas PWM (modulación por ancho de pulso) que contiene el Arduino, por lo cual se utilizara la instrucción de analogWrite() que realiza la escritura por un puerto digital, adicionalmente estos puertos contienen una resolución de 8 bits, por lo tanto el valor máximo proporcionado será de 255 (led totalmente encendido) y como valor mínimo de 0 (led totalmente apagado), de esta manera se podrá controlar totalmente la intensidad del brillo.
También se utilizara la instrucción map() descrita anteriormente.   
MATERIAL:
Los materiales que se usaran para este laboratorio son los siguientes:
6 resistencias de 220[ohm]
1 Placa Arduino (UNO, MEGA o nano)
1 ProtoBoard
6 Leds
2 Potenciómetros lineales de 100k[ohm]
DIAGRAMA:

CODIGO:
#define c 6   // define la cantidad de leds a usar
int leds[c]={3,5,6,9,10,11}; // define los puertos digitales con salidas PWM para los leds
int velocidad; // para la velocidad de desplazamiento
int brillo=0;  // para el brillo del led
int sentido=0;  // para el sentido de desplazamiento

void setup() {
  for(int j=0;j<c;j++){
    pinMode(leds[j],OUTPUT);  // definimos para los leds como salidas
    }
}

void loop() {
  retardo();    // definimos la velocidad
  intencidad(); // definimos el brillo
  if(sentido==0){ // realiza el desplazamiento de derecha a izquierda
    for(int j=1;j<c;j++){
      digitalWrite(leds[j-1],LOW);  // apaga el led
      analogWrite(leds[j],brillo);  // para definir el brillo
      delay(velocidad);          
      }
      sentido=1;                    // cambiamos el sentido de desplazamiento
    }
  else {
    // realiza el desplazamiento de izquierda a derecha
    for(int j=(c-1);j>=1;j--){
      digitalWrite(leds[j],LOW);     // apagamos el led
      analogWrite(leds[j-1],brillo);  // definimos el brillo
      delay(velocidad);              
      }
      sentido=0;      // cambiamos el sentido
    }
}  

void retardo(){
  int valor1 = analogRead(A5); // leemos el valor del puerto analogico 5 para la velocidad
  velocidad = map(valor1,0,1023,10,1000); //escalamos los valores del delay 
  }

void intencidad(){
  int valor1 = analogRead(A4); // leemos el valor del puerto analogico 4 para el brillo
  brillo = map(valor1,0,1023,0,255); // escalamos los valores 
  }


 de leds a usar
int leds[c]={3,5,6,9,10,11}; // define los puertos digitales con salidas PWM para los leds
int velocidad; // para la velocidad de desplazamiento
int brillo=0;  // para el brillo del led
int sentido=0;  // para el sentido de desplazamiento

void setup() {
  for(int j=0;j<c;j++){
    pinMode(leds[j],OUTPUT);  // definimos para los leds como salidas
    }
}

void loop() {
  retardo();    // definimos la velocidad
  intencidad(); // definimos el brillo
  if(sentido==0){ // realiza el desplazamiento de derecha a izquierda
    for(int j=1;j<c;j++){
      digitalWrite(leds[j-1],LOW);  // apaga el led
      analogWrite(leds[j],brillo);  // para definir el brillo
      delay(velocidad);          
      }
      sentido=1;                    // cambiamos el sentido de desplazamiento
    }
  else {
    // realiza el desplazamiento de izquierda a derecha
    for(int j=(c-1);j>=1;j--){
      digitalWrite(leds[j],LOW);     // apagamos el led
      analogWrite(leds[j-1],brillo);  // definimos el brillo
      delay(velocidad);              
      }
      sentido=0;      // cambiamos el sentido
    }
}  

void retardo(){
  int valor1 = analogRead(A5); // leemos el valor del puerto analogico 5 para la velocidad
  velocidad = map(valor1,0,1023,10,1000); //escalamos los valores del delay 
  }

void intencidad(){
  int valor1 = analogRead(A4); // leemos el valor del puerto analogico 4 para el brillo
  brillo = map(valor1,0,1023,0,255); // escalamos los valores 
  }
