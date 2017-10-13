#include <bits/stdc++.h>

#define FOR(i,x,y) for(int i=(int)x; i<(int)y; i++)
#define RFOR(i,x,y) for(int i=(int)x; i>(int)y; i--)
#define SORT(a) sort(a.begin(), a.end())
#define RSORT(a) sort(a.rbegin(), a.rend())

using namespace std;

int main(){
  vector <int> v;
  int i,d,m,c,a;
  cin >> d;
  FOR(i,0,d){
    cin >> m;
    v.push_back(m);
  }
  cin >> m;
  RSORT(v);
  c=0;
  FOR(i,0,d){
  a=v[i];
    while(m >= v[i]){
      c++;
      m = m-v[i];
    }
  }
  if(m==0)
    cout << c << endl;
  else
    cout << "-1" << endl;
  return 0;
}
