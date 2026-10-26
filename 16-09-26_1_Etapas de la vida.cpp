#include<iostream>
using namespace std;
int main()
{
    int edad;
    cin>>edad;
    if(edad<=3)
    {
      cout <<"Bebe"<<endl;
    }
    else
    {
      if(edad<=14)
      {
        cout << "Nino"<<endl;
      }
      else
      {
        if (edad<=18)
        {
          cout<<"Joven"<< endl;
        }
        else
        {
          if(edad<= 65)
          {
            cout<<"Adulto"<< endl;
          }
          else
          {
            cout<<"Adulto Mayor" << endl;
          }
        }
      }
    }
    return 0;
}
