//Funcion para la generacion de numeros aleatorios

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    unsigned int seed;
    int z1, z2, z3;
    cout << "------ Numeros aleatorios -----" << endl;
    cout << "Para inicial la generacion de numeros \n";
    cout << "requiere de un valor entero" << endl;
    cin >> seed;
    srand(seed);
    z1 = rand();
    z2 = rand();
    z3 = rand();
    cout << "\nLos tres numeros aleatorios son:\n";
    cout << z1 << "\t" << z2 << "\t" << z3 << endl;
    return 0;
}
