#include <iostream>

using namespace std;

int main(){

    char i;
	int a;
	
	cout << "Cual es la inicial de tu nombre y tu edad?\n" << endl;
	cin >> i >> a;
	
	if( a>0 && a <= 130)
		cout << "Hola " << i << "," << " tienes " << a << "!" << endl;
	else
		cout << "Hola " << i << "," << " hay un error con tu edad" << endl;
    return 0;
}
