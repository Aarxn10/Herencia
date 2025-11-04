#include "ProfeTiempoC.h"



void ProfeTiempoC::darConferencia(string titulo){
  cout<<"\nConferencia "<<titulo<<endl;
  cout<<"Mis atributos son:\n ";
  cout<<"HORAS: "<<horas<<" - NIVEL "<<nivel<<" con "<<experiencia<<" años de experiencia."<<endl;
}

ProfeTiempoC::ProfeTiempoC(){
  cout<<"\nConstruye Profe de TC" <<endl;
}
