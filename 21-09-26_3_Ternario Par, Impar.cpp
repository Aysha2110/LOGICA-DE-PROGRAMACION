#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num;
    string resultado;
    cout << "Ingrese un numero: ";
    resultado = (cin >> num)
        ? ((num % 2 == 0)
            ? "El numero es par"
            : "El numero es impar")
        : "ERROR: ingrese un numero valido";
    cout << resultado << endl;
    return 0;
}
