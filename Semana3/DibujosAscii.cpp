#include <iostream>
using namespace std;

void espacios(int e){
	for(int i=1;i<=e;i++)
		cout<<" ";
}

void asteriscos(int a){
	for(int i=1;i<=a;i++)
		cout<<"*";
	cout<<endl;
}

void triangulo(int b){
	unsigned int esp, ast=1;
		if(b%2) 
			esp=(b-1)/2;
		else{
			esp=(b-2)/2+1;
			ast=0;
		}
		while(ast<=b){
			espacios(esp);
			asteriscos(ast);
			ast=ast+2;
			esp--;
		}
}

void rectangulo(int b, int a){
	for(int i=1;i<=a;i++)
		asteriscos(b);
}

void paralelogramo(int b, int a){
	unsigned esp=a;
	while(a>0){
		espacios(--esp);
		asteriscos(b);
		a--;
	}	
}

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
