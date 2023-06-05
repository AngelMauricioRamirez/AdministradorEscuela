#include <iostream>
#include "menu.cpp"

int main() {

  Escuela escuela("Tec", "Qro", "442");

  /*
   Para la revision de proyecto, aun no está listo el menú
   por lo que se puede observar la implementación del polimorfismo
   en el main.
  */
  //display_menu(escuela);

  Curso *c1 = new Curso("f101", "Mates", 2, "Momox", 0.0, "Ingenierias", 3, 40); 
  c1->set_materia("Quimica", 4, "Martha", 0.0, "Biologia", 4, 30);
  Curso *c2 = new Curso("f102", "Bio", 4, "Eloina", 0.0, "Alimentos", 4, 30); 
  Curso *c3 = new Curso("f103", "Progra", 6, "Agustin", 0.0, "Arquitectura", 2, 2);

  escuela.agregar_alumno("Angel", 18, "427", "Qro", "A01710158");
  escuela.agregar_profesor("Momox", 50, "442", "Qro", "Fisica, Matematicas");
  escuela.agregar_administrativo("Pedro", 43, "442", "Qro", "Admisiones");

  escuela.show_personas();

  std::cout << escuela.get_alumno("A01710158")->get_nombre() << "\n";
  escuela.get_alumno("A01710158")->add_curso(c1);
  escuela.get_alumno("A01710158")->add_curso(c2);
  c1->remove_materia("Mates");
  std::cout << escuela.get_profesor("Momox", "Fisica, Matematicas")->get_especialidad() << "\n";
  escuela.get_alumno("A01710158")->show_cursos();
  std::cout << "-------------\n";
  c1->show_materias();

  delete c1;
  delete c2;
  delete c3;

  return 0;
}