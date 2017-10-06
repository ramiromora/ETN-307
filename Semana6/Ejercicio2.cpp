//
// Solución al problema Hora Prima
// http://www.titancod.net/problema/HORAPRIMA
//

#include <iostream>

using namespace std;

bool esprimo(int h){
  bool primo=true;
  int i;
  for(i=2; i<=h/2;i++){
    if(h%i == 0){
      primo=false;
      break;
    }
  }
  if(primo) return primo;
  else return primo;
}

int main(){
  unsigned int TC, h1,m1,h2,m2,i,j,cnt,m;
  cin >> TC;
  while(TC--){
    cin >> h1 >> m1 >> h2 >> m2;
    if(h1>h2){ m=h2; h2=h1; h1=m;}
    if(h1==h2 && m1>m2) {m=m2; m2=m1; m1=m;}
    cnt=0;
    m=59;
    for(i=h1;i<=h2;i++){
      if(i==h1) j=m1;
      if(i==h2) m=m2;
      while(j<=m){
        if(esprimo(i+j)) cnt++;
        j++;
      }
      j=0;
    }
    cout << cnt << endl;
  }
  return 0;
}
