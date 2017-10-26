//En este ejemplo el LED conectado al pin 13 
//parpadea en un intervalo de tiempo variable 
//que depende del número de veces que se ejecuta 
//el programa (función loop)

 // LED que se encuentra en el pin 13
int ledPin = 13;
// Variable que contará el paso por la función loop
int n = 0;  	

// Inicia variables
void setup(){ 
// El p1n 13 será una salida digital
   pinMode(ledPin, OUTPUT);	 
} 

// Ciclo principal
void loop(){ 
// Enciende el LED
   digitalWrite(ledPin, HIGH);
// Pausa de 1 segundo
   delay(1000); 				 
// Apaga el LED
   digitalWrite(ledPin, LOW);
//Incrementamos n
   n++;					
//Pausa de un tiempo variable
   delay(delayVal(n));			
}
 
//Función que devuelve un valor tipo 
//entero según el parámetro pasado
 
int delayVal(int f){
   return f*100;
}
