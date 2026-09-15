#include <iostream>
#include <string>
using namespace std;

int main() 
{
string p1, p2, p3;

cout << "Ingresa la palabra 1: ";
cin >> p1;
cout << "Ingresa la palabra 2: ";
cin >> p2;
cout << "Ingresa la palabra 3: ";
cin >> p3;

if (p1 == "vertebrado") {
if (p2 == "ave") {
if (p3 == "carnivoro") {
cout << "aguila" << endl;
} else if (p3 == "onivoro") {
cout << "pomba" << endl;
}
} else if (p2 == "mamifero") {
if (p3 == "onivoro") {
cout << "homem" << endl;
} else if (p3 == "herbivoro") {
cout << "vaca" << endl;
}
}
} else if (p1 == "invertebrado") {
if (p2 == "inseto") {
if (p3 == "hematofago") {
cout << "pulga" << endl;
} else if (p3 == "herbivoro") {
cout << "lagarta" << endl;
}
} else if (p2 == "anelideo") {
if (p3 == "hematofago") {
cout << "sanguessuga" << endl;
} else if (p3 == "onivoro") {
cout << "minhoca" << endl;
}
}

}

return 0;
}