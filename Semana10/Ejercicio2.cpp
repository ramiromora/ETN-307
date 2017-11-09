/*
PROBLEMA:
Detección de números primos utilizando Arduino.
DESCRIPCIÓN:
Para el laboratorio se pide realizar un programa que sea capaz de detectar un número primo enviada a la placa de Arduino (comunicación serial), si el número enviado es un número primo, deberá desplegarlo de forma binaria a través de leds, caso contario si el número enviado no es un numero primo, deberá encender y apagar todos los leds cada 100 milisegundos.
Para el caso, se considerara una cantidad de 5 leds conectadas al Arduino, por lo tanto el valor mínimo a enviar deberá de ser 1 (un led encendido) y el valor máximo deberá de ser 31(todos los leds encendidos).
MATERIAL:
Los materiales que se usaran para este laboratorio son los siguientes:
•	5 resistencias de 220[ohm]
•	1 Placa Arduino (UNO, MEGA o nano)
•	1 ProtoBoard
•	5 Leds

*/

#define c 5 // cantidad de SALIDAS
int a=0;    // para el dato a introducir 
int b[c];   // para el resultado binarios
int led[c]={8,9,10,11,12}; // pines a utilizar como salida
int cont=0; // para el contador
int n_p=0;  // determina si es primo o no

void setup() {
  Serial.begin(9600); // iniciamos la comunicacion serial
  for(int j=0;j<c;j++){ 
    pinMode(led[j],OUTPUT);  // definimos los pines como salida
    digitalWrite(led[j],LOW); // inicializamos la salida en 0
    }
}

void loop() {
  if(Serial.available()>1){
        a=Serial.parseInt();  // recibimos un dato numerico entero
        if (a>0){
            primo(a);
            if (cont<=2){
              n_p=0;
              binario(a);   // convertimos de decimal a binario
              for(int j=c-1;j>=0;j--){
                Serial.print(b[j]);   // imprimimos el valor binario
                if(b[j]==1) digitalWrite(led[j],HIGH);  // encendemos el led 
                else digitalWrite(led[j],LOW);  // apagamos el led
                b[j]=0; // borramos el dato anterior
              }
            }
            else n_p=1;
            Serial.println(); // salto de linea
        }
  }
  if (n_p==1){
    for(int j=0;j<c;j++){
        digitalWrite(led[j],HIGH);
      }
    delay(100);
    for(int j=0;j<c;j++){
        digitalWrite(led[j],LOW);
      }
    delay(100);
    }
}

void primo(int x){ // función para verificar si es primo o no
    cont=0;
    for(int j=1;j<=x;j++){
      if((x%j)==0) cont++;
      }
  }

void binario(int z){ // funcion para convertir un numerio decimal a binario
    int i=0;  // inicalizamos la posicion
    while(z!=0){  
        b[i]=z%2;     // encontramos el resto
        z=(z-b[i])/2; // realizamos la division
        i++;          // incrementamos la posicion
      }
  }
