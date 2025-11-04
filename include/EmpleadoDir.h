#ifndef EMPLEDIR_H
#define EMPLEDIR_H
#include <string>
#include "Empleado.h"
using namespace std;
class EmpleDir : public Empleado {
private:
   float bono;  // Atributo propio del empleado directivo
public:
   // Constructor
   EmpleDir(string n = "", float b = 0.0);
   // Métodos set y get
   void setBono(float b);
   float getBono() const;
};
#endif
