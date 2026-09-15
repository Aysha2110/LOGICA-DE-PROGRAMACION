#include <iostream>
#include <string>
using namespace std;

int main() {
    string n1, n2;
    int p1, p2;

    cout << "Ingresa el nombre del programador 1: ";
    cin >> n1;
    cout << "Ingresa el puntaje del programador 1: ";
    cin >> p1;

    cout << "Ingresa el nombre del programador 2: ";
    cin >> n2;
    cout << "Ingresa el puntaje del programador 2: ";
    cin >> p2;

    if (p1 > p2) {
        cout << "El mejor programador es: " << n1 << endl;
    } else {
        cout << "El mejor programador es: " << n2 << endl;
    }

    return 0;
}