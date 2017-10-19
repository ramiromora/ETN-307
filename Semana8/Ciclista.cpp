#include<bits/stdc++.h>
using namespace std;

int main(){
  int TC,n,r;
  float s,b,p,t;
  while (scanf("%d", &TC) != EOF) {
    while (TC--) {
      t=0.0;
      scanf("%f %f %f %d", &s,&p,&b,&n);
      while(n--){
        scanf("%d", &r);
        switch (r){
          case -1:
            t+=(float)(5/s);
          break;
          case 0:
            t+=(float)(5/p);
          break;
          case 1:
            t+=(float)(5/b);
          break;
        }
      }
      printf("%.1f\n",t);
    }
  }
  return 0;
}
