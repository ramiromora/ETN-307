//
// Solución al problema Factores Primos
// http://www.titancod.net/problema/FACPRIM
//

#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int FactoresPrimos(long n){
  int cnt=0,f=0;
  while (n%2 == 0){
    if(f!=2){
      cnt++;
      f=2;
    }
    n = n/2;
  }
  for (int i = 3; i <= sqrt(n); i = i+2){
    while (n%i == 0){
      if(f!=i){
        cnt++;
        f=i;
      }
      n = n/i;
    }
  }
  if (n > 2){
    cnt++;
  }
  return cnt;
}


int main(){

  long n,m,i,j;
  int mx,nx;
  while (scanf("%ld %ld",&n,&m) == 2){
    mx=0;
    nx=0;
    for(i=n;i<=m;i++){
      j=FactoresPrimos(i);
      if(j>=mx){
        mx=j;
        nx=i;
      }
    }
    printf("%d tiene %d factores\n",nx,mx);
  }
  return 0;
}
