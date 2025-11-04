#ifndef EMPLEADO_H
#define EMPLEADO_H
#include<iostream>
 using namespace std;
class Empleado{
  private:
      string nombre;
  protected:
    float salario;

  public:
    void capacitarse();
    Empleado(string n);
    string getNombre();

};

#endif // EMPLEADO_H
