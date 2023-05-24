#include "Alumno.h"
#include "Curso.h"
#include <iostream>
using namespace std;

int main(){
  Alumno p1("Angel", 19, "427", "QRO", "A01710158");
  Curso* c1 = new Curso("f101", "Mates", 2, "Momox", 0.0, "Ingenierias", 3, 40);
  Curso* c2 = new Curso("f102", "Bio", 4, "Eloina", 0.0, "Alimentos", 4, 30);
  Curso* c3 = new Curso("f103", "Progra", 6, "Agustin", 0.0, "Arquitectura", 2,2);
  cout << p1.get_nombre() << "\n";
  cout << p1.get_edad() << "\n";
  cout << p1.get_telefono() << "\n";
  cout << p1.get_direccion() << "\n";
  cout << p1.get_matricula() << "\n";
  p1.add_curso(c1);
  p1.add_curso(c2);
  p1.add_curso(c3);
  p1.show_cursos();

  cout << p1.get_curso("f101")->get_materia("Mates")->get_calificacion() << "\n";

  p1.get_curso("f101")->set_materia("Fisica", 4, "LuisMi", 0.0, "Agronomia", 6, 30);

  p1.show_cursos();

  delete c1;
  delete c2;
  delete c3;
  
  return 0;
}