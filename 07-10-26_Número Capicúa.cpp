# include <iostream>
using namespace std;
int main ()
{
    int n, M, C, D, U;
    cout << "Ingrese un numero de 4 digitos: ";
    cin>>n;
    if (n >= 1000 && n <= 9999)
    {
        M = n / 1000;
        C = n / 100 % 10;
        D = n / 10 % 10;
        U = n % 10;
        if (M == U && C == D)
        {
            cout << "Es capicua" <<endl;
        }
        else
        {
            cout << "No es capicua" << endl;
        }
    }
    else
    {
        cout << "No tiene 4 digitos" << endl;
    }
    return 0;
}
