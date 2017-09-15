#include <iostream>
#include <climits> // Definicion para INT_MIN, ...
using namespace std;
int main()
{
cout << "Rango para los tipos int y unsigned int" << endl << endl;
cout << "Tipo \t Minimo\t Maximo" << endl;
cout << "--------------------------------------------" << endl;
cout << "int " << INT_MIN << "\t"<< INT_MAX << endl;
cout << "unsigned int " << "\t 0\t "<< UINT_MAX << endl;
cin.get();
return 0;
}
