//
// Solución al problema 
// http://www.titancod.net/problema/ROTMAT
//

#include <iostream>

#define DIM 30
using namespace std;

int main()
{
    int a[DIM][DIM]={0};
    int i,j,d,g;
    cin >> d >> g;
    for(i=0;i<d;i++)
      for(j=0;j<d;j++)
        cin >> a[i][j];
    switch (g){
    case 90:
      for(i=0;i<d;i++){
        for(j=d-1;j>=0;j--)
          cout<<a[j][i]<<" ";
        cout << endl;
      }
      break;
    case 180:
      for(i=d-1;i>=0;i--){
        for(j=d-1;j>=0;j--)
          cout<<a[i][j]<<" ";
        cout << endl;
      }
      break;
    case 270:
      for(i=d-1;i>=0;i--){
        for(j=0;j<d;j++)
          cout<<a[j][i]<<" ";
        cout << endl;
      }
      break;
    default:
      break;
    }
    return 0;
}
