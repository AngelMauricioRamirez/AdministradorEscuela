#include "Alumno.h"
#include "Curso.h"
#include "Escuela.h"
#include <iostream>
using namespace std;

int main() {

  Escuela escuela("Tec", "Qro", "442");

  Curso *c1 = new Curso("f101", "Mates", 2, "Momox", 0.0, "Ingenierias", 3, 40); 
  Curso *c2 = new Curso("f102", "Bio", 4, "Eloina", 0.0, "Alimentos", 4, 30); 
  Curso *c3 = new Curso("f103", "Progra", 6, "Agustin", 0.0, "Arquitectura", 2, 2);

  escuela.agregar_alumno("Angel", 18, "427", "Qro", "A01710158");
  escuela.agregar_profesor("Momox", 50, "442", "Qro", "Fisica, Matematicas");
  escuela.agregar_administrativo("Pedro", 43, "442", "Qro", "Admisiones");

  escuela.show_personas();

  cout << escuela.get_alumno("A01710158")->get_nombre() << "\n";
  escuela.get_alumno("A01710158")->add_curso(c1);
  cout << escuela.get_profesor("Momox", "Fisica, Matematicas")->get_especialidad() << "\n";
  escuela.get_alumno("A01710158")->show_cursos();

  delete c1;
  delete c2;
  delete c3;

  return 0;
}