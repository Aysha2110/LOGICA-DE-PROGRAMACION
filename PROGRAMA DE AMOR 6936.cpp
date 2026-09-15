#include <iostream>
using namespace std;

int main() {
    int N, M, A;

    cout << "Ingresa N: ";
    cin >> N;
    cout << "Ingresa M: ";
    cin >> M;
    cout << "Ingresa A: ";
    cin >> A;

    if (N != M && M != A && N != A) {
        cout << "ELLA NO TE AMA" << endl;
    } else {
        cout << "ELLA TE AMA" << endl;
    }

    return 0;
}