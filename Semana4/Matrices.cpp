#include <iostream>
using namespace std;
int main()
{
    int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,0,1,2},
    {3,4,5,6}};
    float prom=0;
    //mat[0][0]=1;
    //mat[0][1]=2;
    for(int col=0;col<=3;col++){
        for(int fil=0;fil<=3;fil++){
            cout<<mat[col][fil]<<"\t";
            prom += mat[col][fil];
        }
        cout<<"\n";
    }
    cout<<"El valor promedio es: "<<prom/16<<endl;
    return 0;
}
