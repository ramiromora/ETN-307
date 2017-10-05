//
// Resolución del problema Pares de Uno de titancod.net
// http://www.titancod.net/problema/PARESUNOS
//

#include <iostream>

using namespace std;

int main(){
  int num,r,TC;
  int c1,c2;
  cin >> TC;
  while(TC--){
    cin>>num;
    c1=0;
    c2=0;
    while(num!=0){
      r = num%2;
      if(r) c1++;
      else c1=0;
      if(c1==2){ c2++; c1=0; }
      num /= 2;
    }
    cout << c2 << endl;
  }
}
