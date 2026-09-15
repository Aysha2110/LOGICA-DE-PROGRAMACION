#include <iostream>
using namespace std;
int main()
{
int edad, ingreso;
bool vip;
cin >> edad >> vip;
ingreso = (edad>=18)&&vip;
cout << ingreso;


    return 0;
}