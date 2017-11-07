//Programa que nos dice como será evaluado un alumno dependiendo de lo que haya hecho en el semestre.
//Athziri Zúñiga Méndez
//07-Noviembre-2017
#include <iostream>
using namespace std;
int main()
{
  int=N;
  cout<<"Dame un valor entre 1,2"<<endl;
  cin>>N;
  if(N<8)
    cout<<" examenes=70%, tareas=15%, participaciones=15%"<<endl;
    if(N>=8){
      switch (N){
      case  0: cout<<"examen"<<endl;
      break;
      case  8:  cout<< "examenes=70%, tareas=15%, participaciones=15%"<<endl;
      break;
      case 1 : cout<< "examenes=85%, participaciones=15%"<<endl;
	break;
      case 3 : cout<<"examenes=85%, tareas=15%"<<endl;
	break;
      default: cout<<"Opción no Válida"<<endl;
    }
  return 0;
}
