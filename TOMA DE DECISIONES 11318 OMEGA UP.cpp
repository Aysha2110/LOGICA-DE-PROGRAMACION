#include <iostream>
using namespace std;

int main() {
    int A, B;
    int suma;
    int resultado;

    cout << "Ingresa el valor de A: ";
    cin >> A;
    cout << "Ingresa el valor de B: ";
    cin >> B;

    suma = A + B;

    if (suma == 5) {
        B = B + 3;
        resultado = 2 * A + B;
        cout << "Resultado: " << resultado << endl;
    } else {
        A = A - 1;

        int operacion = 7 * A + B;
        int residuo = operacion % 2;

        if (residuo == 0) {
            resultado = A - B;
            cout << "Resultado: " << resultado << endl;
        } else {
            resultado = A * B;
            cout << "Resultado: " << resultado << endl;
        }
    }

    return 0;
}