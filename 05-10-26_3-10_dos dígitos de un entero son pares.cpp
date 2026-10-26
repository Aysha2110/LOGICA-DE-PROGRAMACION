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
        if (dig1 % 2 == 0 && dig2 % 2 == 0)
        {
            cout << "Los dos digitos son pares" << endl;
        }
        else
        {
            cout << "Los dos digitos no son pares" << endl;
        }
    }
    else
    {
        cout << "El numero no es de dos digitos" << endl;
    }
}
    return 0;
}
