#include <iostream>

using namespace std;

int main()
{
    int mat[20][20];
    int dim;
    cout<< "Ingrese la dimension ";
    cin >> dim;
    for(int col=0;col<=dim-1;col++){
        for(int fil=0;fil<=dim-1;fil++){
            if(col==fil)
                mat[fil][col]=1;
            else
                mat[fil][col]=0;
        }
    }
    for(int col=0;col<=dim-1;col++){
        for(int fil=0;fil<=dim-1;fil++)
            cout << mat[fil][col] << "\t";
        cout << "\n";
    }
    return 0;
}
