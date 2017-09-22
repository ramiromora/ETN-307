#include <iostream>

using namespace std;

int main()
{
    int x,y=0;
    cin >> x;
    for(int i=1;i<=x;i++){
        if(!(x%i))
            y++;
    }
    if(y>2)
        cout<<"No es primo";
    else
        cout<<"Es primo";
    cout << endl;
    return 0;
}
