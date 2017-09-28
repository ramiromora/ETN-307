//
//Números Felices
//http://www.titancod.net/problema/NUMFELIZ
//Se aprecia un error en el enunciado, ya que 338 debería ser un número TRISTE
//

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){
  long n,r,p=0;
  int TC;
  scanf("%d", &TC); // Numero de casos de prueba
  while (TC--) { // Repite hasta que sea 0
    scanf("%ld",&n);
    n=pow(static_cast<double>(n),2);
    do{
      p=0;
      do{
        r=n%10;
        n=(n-r)/10;
        p=p+pow(static_cast<double>(r),2);
      }while(n!=0);
      n=p;
    }while(p>9);
    if(p==1) cout << "Feliz";
    else cout << "Triste";
    cout << endl;
  }
  return 0;
}
