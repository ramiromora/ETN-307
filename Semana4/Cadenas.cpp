#include <iostream>
using namespace std;
int main()
{
    //int numeros[10]={56,45,89,50,15,46,51,99,90,30};
    int numeros[100];
    int maximo=0;
    float prom=0;
    //numeros[0]=23;
    cout << "Cuantos numeros? ";
    cin>>maximo;
    cout << "Ingrese " << maximo << " numeros" << endl;
    for(int dir=0;dir<=maximo-1;dir++)
        cin>>numeros[dir];
    for(int dir=0;dir<=maximo-1;dir++)
        prom=prom+numeros[dir];
    cout << "El valor promedio es: "<< prom/maximo<<endl;
    return 0;
}
