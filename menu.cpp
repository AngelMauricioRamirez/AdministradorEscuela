/*
 * Proyecto AdministradorEscuela
 * Angel Mauricio Ramirez Herrera
 * A01710158
 * 05/06/2023
 */

/*
 * Menú.cpp contiene un menú para
 * administrar los datos de personas
 * que se encuentran en una escuela.
 */

#include "headers/Curso.h"
#include "headers/Escuela.h"
#include <iostream>
#include <string>
#include <vector>

/**
 * Recibe una escuela y permite administrar
 * a las personas que se encuentran
 * registradas en ella mediante un
 * menú.
 *
 *
 * @param
 * @return
 */

// Obtiene la variable por referencia para que modifique
// directamente a la variable y no cree copias
void display_menu(Escuela &escuela) {
  // Variables iniciales
  int option = 0;
  std::string nombre;
  int edad;
  std::string telefono;
  std::string direccion;
  std::string argumento;

  // Se declara un vector de cursos, esto para que los alumnos puedan agregar
  // distintos cursos
  std::vector<Curso *> cursos;

  Curso *c1 = new Curso("F200", "Calculo Diferencial", 2, "Luis Miguel", 0.0,
                        "4", 301, 40);
  Curso *c2 = new Curso("F201", "Diferenciales", 2, "Momox", 0.0, "4", 302, 40);
  Curso *c3 = new Curso("TC1030", "Programacion (POO)", 2, "Benjamin ", 0.0,
                        "6", 102, 30);
  Curso *c4 =
      new Curso("F203", "Algebra Lineal", 2, "Maria Luisa", 0.0, "2", 001, 40);

  c1->set_materia("Calculo Integral", 2, "Luis Miguel", 0.0, "4", 301, 40);
  c4->set_materia("Logica", 2, "Ramona", 0.0, "2", 001, 40);

  // Se integran los cursos a la lista
  cursos.push_back(c1);
  cursos.push_back(c2);
  cursos.push_back(c3);
  cursos.push_back(c4);

  // Mientras la opción se mantenga en el rango de selección, el menú sigue
  // corriendo
  while (option < 6) {
    // Se despliega el menú
    std::cout << "1) Agregar alumno: \n";
    std::cout << "2) Agregar profesor: \n";
    std::cout << "3) Agregar administrativo: \n";
    std::cout << "4) Administrar alumnos: \n";
    std::cout << "5) Ver personas en la escuela \n";
    std::cout << "Proporciona la opcion: \n";
    std::cin >> option;

    // Se hace un switch a la opción seleccionada
    // Solo acepta datos de tipo int, de lo contrario el programa crashea
    switch (option) {
    // Agregar alumno
    case 1: {
      // Se despliega un menú para ingresar un alumno
      std::cout << "Proporciona el nombre: \n";
      std::cin.ignore();
      std::getline(std::cin, nombre);
      std::cout << "Proporciona la edad: \n";
      std::cin >> edad;
      std::cin.ignore();
      std::cout << "Proporciona el numero de telefono: \n";
      std::getline(std::cin, telefono);
      std::cout << "Proporciona la direccion: \n";
      std::getline(std::cin, direccion);
      std::cout << "Proporciona la matricula: \n";
      std::getline(std::cin, argumento);

      // Se agrega el alumno a la escuela
      escuela.agregar_alumno(nombre, edad, telefono, direccion, argumento);
      break;
    }
    // Agregar Profesor
    case 2: {
      // Se despliega un menú para ingresar un profesor
      std::cout << "Proporciona el nombre: \n";
      std::cin.ignore();
      std::getline(std::cin, nombre);
      std::cout << "Proporciona la edad: \n";
      std::cin >> edad;
      std::cin.ignore();
      std::cout << "Proporciona el numero de telefono: \n";
      std::getline(std::cin, telefono);
      std::cout << "Proporciona la direccion: \n";
      std::getline(std::cin, direccion);
      std::cout << "Proporciona la especialidad: \n";
      std::getline(std::cin, argumento);

      // Se agrega el profesor a la escuela
      escuela.agregar_profesor(nombre, edad, telefono, direccion, argumento);
      break;
    }
    // Agregar Administrativo
    case 3: {
      // Se despliega un menú para ingresar un administrativo
      std::cout << "Proporciona el nombre: \n";
      std::cin.ignore();
      std::getline(std::cin, nombre);
      std::cout << "Proporciona la edad: \n";
      std::cin >> edad;
      std::cin.ignore();
      std::cout << "Proporciona el numero de telefono: \n";
      std::getline(std::cin, telefono);
      std::cout << "Proporciona la direccion: \n";
      std::getline(std::cin, direccion);
      std::cout << "Proporciona el departamento: \n";
      std::getline(std::cin, argumento);

      // Se agrega el administrativo a la escuela
      escuela.agregar_administrativo(nombre, edad, telefono, direccion,
                                     argumento);
      break;
    }
    // Administrar Alumnos
    case 4: {
      // Pide la matricula del alumno
      std::cout << "Proporciona la matricula del alumno: \n";
      std::cin.ignore();
      std::getline(std::cin, argumento);

      // Si existe un alumno con la misma matricula
      // se despliega un menú para administrar a un alumno
      if (escuela.get_alumno(argumento) != nullptr) {
        int op = 0;
        std::string nombreCurso;
        // Muestra el nombre del alumno encontrado
        std::cout << escuela.get_alumno(argumento)->get_nombre() << "\n";
        // Se despliega un menú para administrar a un alumno
        std::cout << "------------------------------ \n";
        std::cout << "1) Agregar curso \n";
        std::cout << "2) Asignar calificacion \n";
        std::cout << "3) Remover curso \n";
        std::cin >> op;

        // Se hace un switch a la opción seleccionada
        // Solo acepta datos de tipo int, de lo contrario el programa crashea
        switch (op) {
        // Agregar curso
        case 1: {
          std::cout << "Cursos: \n";
          // Recorre a los cursos que se tienen registrados y
          // muestra su nombre y las materias registradas, esto
          // sirve para que quien use el programa pueda ver las 
          // caracteristicas del curso que quiere agregar.
          for (Curso *curso : cursos) {
            std::cout << "Nombre del curso: " << curso->get_nombre() << "\n";
            std::cout << "Materias: \n";
            curso->show_materias();
          }

          // Pide el nombre del curso para agregarlo
          std::cout << "Proporciona el nombre del curso: \n";
          std::cin.ignore();
          std::getline(std::cin, nombreCurso);

          // encontrado sirve para saber si se encontró el curso
          bool encontrado = false;
          // Recorre los cursos que se tienen registrados y
          // si el nombre coincide con el curso que se quiere agregar
          // entonces lo agrega al alumno, si no
          // se va a indicar que el curso no se encontró
          // pero si el curso ya se tiene registrado, entonces 
          // va a indicar que el curso ya se tiene registrado
          for (Curso *curso : cursos) {
            if (curso->get_nombre() == nombreCurso) {
              if (escuela.get_alumno(argumento)->get_curso(nombreCurso) ==
                  nullptr) {
                escuela.get_alumno(argumento)->add_curso(curso);
                std::cout << "Curso agregado! \n";
                encontrado = true;
                break;
              } else {
                std::cout << "El curso ya se tiene registrado! \n";
                encontrado = true;
              }
            }
          }
          if (!encontrado) {
            std::cout << "No se encontro el curso! \n";
          }

          break;
        }
        // Asignar calificacion
        case 2: {
          // Mustra todos los cursos que el alumno tiene registrados
          escuela.get_alumno(argumento)->show_cursos();
          // Pide el nombre del curso para modificar la calificacion de las materias
          std::cout << "Proporciona el nombre del curso: \n";
          std::cin.ignore();
          std::getline(std::cin, nombreCurso);

          // Crea un puntero que va a almacenar al curso que tenga el nombre 
          // proporcionado por quien use el programa, esto sirve para
          // que el código no quede tan extenso
          Curso *curso = escuela.get_alumno(argumento)->get_curso(nombreCurso);
          // Si se encontró al curso, entonces pide el nombre de la materia
          // a la que se le va a asignar la nueva calificación
          if (curso != nullptr) {
            std::string nombreMateria;
            std::cout << "Proporciona el nombre de la materia: \n";
            std::getline(std::cin, nombreMateria);

            // Crea un puntero de la materia seleccionada
            Materia *materia = curso->get_materia(nombreMateria);
            // Si se encontró la materia, entonces va a pedir
            // la nueva calificacion a asignar
            if (materia != nullptr) {
              double calificacion;
              std::cout << "Proporciona la calificacion de la materia: \n";
              std::cin >> calificacion;
              materia->set_calificacion(calificacion);
            } else {
              std::cout << "No se encontro la materia! \n";
            }
          } else {
            std::cout << "No se encontro el curso! \n";
          }

          break;
        }

        case 3: {
          // Mustra todos los cursos que el alumno tiene registrados
          escuela.get_alumno(argumento)->show_cursos();
          // Pide el nombre del curso para borrarlo
          std::cout << "Proporciona el nombre del curso: \n";
          std::cin.ignore();
          std::getline(std::cin, nombreCurso);

          // Crea un objeto de tipo curso que va a almacenar los datos del curso
          Curso *curso = escuela.get_alumno(argumento)->get_curso(nombreCurso);
          // Si se encontró al curso, entonces e elimina
          if (curso != nullptr) {
            escuela.get_alumno(argumento)->remove_curso(nombreCurso);
            std::cout << "Se ha removido el curso! \n";
          } else {
            std::cout << "No se encontro el curso! \n";
          }

          break;
        }

        default:
          break;
        }
      } else {
        std::cout << "No se encuentra al alumno! \n";
      }
      break;
    }
    // Ver personas en la escuela
    case 5:
      escuela.show_personas();
      break;
    default:
      std::cout << "Proporciona una opcion valida\n";
      break;
    } // END SWITCH
  }   // END WHILE

  // Se borran los cursos
  delete c1, c2, c3, c4;
}
