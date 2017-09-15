// Tasa de cambio Dólar a Bolivianos
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double rate = 6.96; // Tasa de cambio:
// Un Dolar por Bolivianos
cout << fixed << setprecision(2);
cout << "\tDolar \tBoliviano\n";
for( int dollar = 1; dollar <= 5; dollar++)
cout << "\t " << dollar
<< "\t " << dollar*rate << endl;
return 0;
}
