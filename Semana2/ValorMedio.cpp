// Programa para el calculo del valor medio
#include <iostream>
using namespace std;
int main()
{
	int x, count = 0;
	float sum = 0.0;
	cout << "Ingrese algunos números enteros:\n"
	"(Para salir ingrese una letra)"
	<< endl;
	while( cin >> x ){
		sum += x; //sum = sum + x
		count++; // count = count + 1;
	}
	cout << "El valor promedio es: " << sum / count << endl;
	return 0;
}
