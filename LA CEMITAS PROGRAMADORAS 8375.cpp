#include <iostream>
using namespace std;

int main() {
    int A, B;

    cout << "Ingresa las ganancias (A): ";
    cin >> A;
    cout << "Ingresa las perdidas (B): ";
    cin >> B;

    if (A > B) {
        cout << "El negocio si va a jalar " << (A - B) << endl;
    } else {
        cout << "Dejalo ya esta muerto " << (B - A) << endl;
    }

    return 0;
}