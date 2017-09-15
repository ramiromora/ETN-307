// Demonstración del uso del if-else
#include <iostream>
using namespace std;
int main(){
	float x, y, min;
	cout << "Ingrese dos numeros diferentes:\n";
	if( cin >> x && cin >> y) { // Si los valores son validos
		if( x < y )
			min = x;
		else
			min = y;
		cout << "\nEl numero menor es : " << min << endl;
	}
	else
		cout << "\nIngreso invalido!" << endl;
	return 0;
}
