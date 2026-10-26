#include <iostream>
using namespace std;
int main()
{
    int num, dig1, dig2, sumaD;
    cout << "Digite un número entero: ";
    cin >> num;
    if (num < 0) 
    {
        num = num * -1;
    }
    if (num >= 10 && num <= 99) {
        dig1 = num / 10;
        dig2 = num % 10;
        sumaD = dig1 + dig2;
        cout << "La suma de los dígitos es "
             << sumaD << endl;
    }
    else
    {
        cout << "El número no es de dos dígitos" << endl;
    }
    return 0;
}
