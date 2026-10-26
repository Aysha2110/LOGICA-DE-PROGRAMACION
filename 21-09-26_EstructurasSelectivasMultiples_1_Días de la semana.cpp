#include<iostream>
using namespace std;
int main()
{
   int dia;
   cin>>dia;
   switch(dia)
   {
     case 1:
     cout<<"Lunes"; break;
     case 2:
     cout<<"Martes"; break;
     case 3:
     cout<< "Miercoles"; break;
     case 4:
     cout<< "Jueves"; break;
     case 5:
     cout<< "Viernes"; break;
     case 6:
     cout<< "Sabado"; break;
     case 7:
     cout<< "Domingo"; break;
     default:
     cout<< "ERROR: numero fuera del rango"; break;
   } 
    return 0;
}
