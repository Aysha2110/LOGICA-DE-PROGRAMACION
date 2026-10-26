#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Digite un número entero: ";
    cin >> num;
    if (num < 0) {
        cout << "El número es negativo" << endl;
    } else {
        cout << "El número no es negativo" << endl;
    }
    return 0;
}
