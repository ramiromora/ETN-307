//Ejemplo de manejo de clases
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string saludo("Cual es tu nombre? "),
        nombre, line(60, '*'), salida = "Hola ";
    cout << saludo;
    getline(cin, nombre);
    salida = salida + nombre + "!!!"; // Hola Luis Enrrique
    cout << line << endl;
    cout << salida << endl;
    cout << "\nTu nombre es: " << nombre;
    cout << " y tiene " << nombre.length() << " caracteres";
    cout << "\n" << line << endl;
    return 0;
}
