#include <iostream>

using namespace std;

int factorial(int m){
    int f=1,i=0;
    while(i < m){
        i++;
        f=f*i;
    }
    return f;
}

int main()
{
    // n!=n*(n-1)*(n-2)*...*2*1
    // n!=1*2*3*....*(n-2)*(n-1)*n
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
