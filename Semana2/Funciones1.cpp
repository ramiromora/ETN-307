//Manejo de funciones
//Programa para el calculo de potencias

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //double x=6, y;
    //y= pow(x, 3); // x*x*x
    double x,y;
    cout << "Ingrese el numero y la potencia" << endl;
    cin >> x >> y;
    //cout << "el doble de 6 elevado a 3 es: " << 2*y
    cout << x << " elevado a " << y << " es " << pow(x,y)
    << endl;
    return 0;
}
