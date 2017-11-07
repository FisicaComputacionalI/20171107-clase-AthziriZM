//Programa que nos muestra casos dependiendo de la variable.
//Athziri Zúñiga Méndez
//07-Noviembre-2017
#include <iostream>
using namespace std;
int main()
{
  char variable;
  cout<<"Dame un valor entre A, B, C, D, F "<<endl;
  cin>>variable;
  switch (variable){
  case 'A' : cout<<"Excelente"<<endl;
    break;
  case 'B' : cout<<"Muy Bien"<<endl;
    break;
  case 'C' : cout<<"Bien"<<endl;
    break;
  case 'D' : cout<<"Pasaste"<<endl;
    break;
  case 'F' : cout<<"Intenta De Nuevo"<<endl;
    break;
  default: cout<<"Opción No Válida"<<endl;
  }
return 0;
}
