#include <iostream>
using namespace std;
int main ()
{
    int n, M, C, D, U, suma;
    cout << "Ingrese un numero de 4 digitos:";
    cin >> n;
    if (n >= 1000 && n <= 9999)
    {
        M = n / 1000;
        C = n / 100 % 10;
        D = n / 10 % 10;
        U = n % 10;
        suma = M*M*M*M + C*C*C*C + D*D*D*D +*U*U*U;
        if (suma == n)
        {
            cout << n << " es un numero Armstrong" << endl;
        }
        else
        {
            cout << n << " no es un numero Armstrong" << endl;
        }
    }
    else
    {
        cout << "No tiene 4 digitos"
    }
    return 0;
}
