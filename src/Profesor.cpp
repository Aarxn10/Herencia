#include <iostream>
#include "Profesor.h"
using namespace std;

Profesor::Profesor(string nombre){
  this->nombre=nombre;
  cout<<"\nConstruye Profesor "<<nombre<<endl;
}

void Profesor::prepararClase(){
  estudiar();
  cout<<"\nPrepara clase\n";
}

void Profesor::estudiar(){
  cout<<"\n"<<nombre<<" estudiando";
}
