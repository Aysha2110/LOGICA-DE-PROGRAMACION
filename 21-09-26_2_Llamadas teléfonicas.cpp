#include <iostream>
using namespace std;
int main()
{
    cout << "Ingrese la clave de la zona:" << endl;
    int clave, costo, minutos;
    cin >> clave;
    cout << "Ingrese el numero de minutos:" << endl;
    cin >> minutos;
    switch (clave)
    {
        case 12:
            costo = minutos * 2;
            cout << "El costo total es: " << costo;
            break;
        case 15:
            costo = minutos * 2.5;
            cout << "El costo total es: " << costo;
            break;
        case 18:
            costo = minutos * 4.5;
            cout << "El costo total es: " << costo;
            break;
        case 19:
            costo = minutos * 3.5;
            cout << "El costo total es: " << costo;
            break;
        case 23:
            costo = minutos * 6;
            cout << "El costo total es: " << costo;
            break;
        case 25:
            costo = minutos * 6;
            cout << "El costo total es: " << costo;
            break;
        case 29:
            costo = minutos * 5;
            cout << "El costo total es: " << costo;
            break;
        default:
            cout << "Error: clave de zona no valida";
            break;
    }
    return 0;
}
