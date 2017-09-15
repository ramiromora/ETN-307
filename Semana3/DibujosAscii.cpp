#include <iostream>
using namespace std;

//Funcion que imprime espacios
void espacios(int e){
	for(int i=1;i<=e;i++)
		cout<<" ";
}

//Funcion que imprime *
void asteriscos(int a){
	for(int i=1;i<=a;i++)
		cout<<"*";
	cout<<endl;
}

//Funcion que grafica triangulos
void triangulo(int b){
	unsigned int esp, ast=1;
	esp=b/2;
	if(!(b%2))
		ast=0; 							//En caso de que sea la base un numero par
	while(ast<=b){
		espacios(esp);
		asteriscos(ast);
		ast=ast+2;
		esp--;
	}
}

//Funcion que grafica rectangulos
void rectangulo(int b, int a){
	for(int i=1;i<=a;i++)
		asteriscos(b);
}

//Funcion que gradica paralelogramos
void paralelogramo(int b, int a){
	unsigned esp=a;
	while(a>0){
		espacios(--esp);
		asteriscos(b);
		a--;
	}	
}

//Funcion principal
int main(){
	unsigned int x,b,a;
	cin >> x;
	switch (x){
		case 1:
			cin >> b;
			triangulo(b);
			break;
		case 2:
			cin >> b >> a;
			rectangulo(b,a);
			break;
		case 3:
			cin >> b >> a;
			paralelogramo(b,a);
			break;
		default:
			break;
	}
	return 0;
}
