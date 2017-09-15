#include <iostream>
#include <climits> // Definicion para INT_MIN, ...
using namespace std;
int main( ){
	cout<<"PROGRAMA QUE MUESTRA LOS VALORES MAXIMOS Y "\
	"MINIMOS \n DE ALGUNOS DE LOS TIPOS DE DATOS "\
	"ATOMICOS"<<endl;
	cout<<"\n int maximo: "<<INT_MAX<<" int minimo: "\
	<<INT_MIN<<endl;
	cout<<"\n char maximo: "<<CHAR_MAX<<" char minimo: "\
	<<CHAR_MIN<<" tamano en bits: "<<CHAR_BIT<<endl;
	cout<<"\n long maximo: "<<LONG_MAX<<" long minimo: "\
	<<LONG_MIN<<endl;
	cout<<"\n short maximo: "<<SHRT_MAX<<" short minimo: "\
	<<SHRT_MIN<<endl;
	return 0;
}
