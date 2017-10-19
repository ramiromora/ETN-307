#include<bits/stdc++.h>

using namespace std;

int main(){
  long TC,c;
  unsigned long i,k;
  vector <long> j;
  while (scanf("%ld", &TC) != EOF) {
    while (TC--) {
      scanf("%ld",&c);
      j.push_back(c);
    }
    scanf("%ld",&c);
    for(i=j.size()-1;i>0;i--){
      for(k=i-1;k>=0;k--){
        if(j[i]+j[k]==c)
          break;
      }
      if(j[i]+j[k]==c){
        printf("%ld %ld\n",j[i],j[k]);
        c=0;
        break;
      }
    }
    if(c)
      printf("-1\n");
  }
  return 0;
}

