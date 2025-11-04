#include<iostream>
#include "Empleado.h"


void Empleado::capacitarse(){
  cout<<"\nCapacitando a "<<nombre<<endl;
}

Empleado::Empleado(string n){
  nombre=n;
  cout<<"\nConstruye Empleado"<< nombre<<endl;
}

string Empleado::getNombre(){
    return nombre;
}
