#include <iostream>
using namespace std;
int main()
{
    int num, dig1, dig2;
    cout << "Digite un numero entero: ";
    cin >> num;
    if (num < 0)
    {
        num = num * -1;
    }
    if (num >= 10 && num <= 99)
    {
        dig1 = num / 10;
        dig2 = num % 10;
        if (dig1 > dig2)
        {
            cout << "El 1er digito es mayor que el 2do" << endl;
        } else if (dig2 > dig1)
        {
            cout << "El 2do digito es mayor que el 1ro" << endl;
        } else
        {
            cout << "Los dos digitos son iguales" << endl;
        }
    }
  
    return 0;
}
