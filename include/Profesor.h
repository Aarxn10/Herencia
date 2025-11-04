#ifndef PROFESOR_H
#define PROFESOR_H

class Profesor{
  protected:
    int horas;
    char nivel;

  public:
    Profesor(string nombre);
    void prepararClase();

  private:
    string nombre;
    void estudiar();
};

#endif // PROFESOR_H
