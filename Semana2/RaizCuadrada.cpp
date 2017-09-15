//Calcula la raiz cuadra de cuatro numeros
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1 = 8.05, x2=12.25, x3= 0.0121, x4;
    cout << "\n Numero \t Raiz Cuadrada"<<endl;
    cout << "\n " << x1 << "    \t " << sqrt(x1);
    cout << "\n " << x2 << "    \t " << sqrt(x2);
    cout << "\n " << x3 << "    \t " << sqrt(x3);
    cout << "\n Ingrese un numero ";
    cin >> x4;
    cout << "\n Numero \t Raiz Cuadrada"<<endl;
    cout << "\n " << x4 << "    \t " << sqrt(x4)<<endl;
    return 0;
}
