#include <iostream>
using namespace std;
int main()
{
    int n1, n2, d11, d12, d21, d22;
    cout << "Digite dos numeros enteros: ";
    cin >> n1 >> n2;
    if (n1 < 0)
    {
        n1 = n1 * -1;
    }
    if (n2 < 0)
    {
        n2 = n2 * -1;
    }
    d11 = n1 / 10;
    d12 = n1 % 10;
    d21 = n2 / 10;
    d22 = n2 % 10;
    if (d11 == d21 || d11 == d22 ||
        d12 == d21 || d12 == d22)
    {
        cout << "Los dos numeros tienen digitos comunes" << endl;
    } else
    {
        cout << "Los dos numeros no tienen digitos comunes" << endl;
    }
    return 0;
}
