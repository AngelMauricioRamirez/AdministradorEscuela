/*
 * Proyecto AdministradorEscuela
 * Angel Mauricio Ramirez Herrera
 * A01710158
 * 24/05/2023
 */

/*
 * Clase Persona contiene los datos
 * necesarios para registrar a un alumno.
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_

#include "Persona.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Alumno : public Persona {
private:
  string matricula;
  vector<Curso *> cursos;

public:
  // Constructor
  Alumno() : Persona() {}
  Alumno(string nombre, int edad, string telefono, string direccion,
         string matricula);

  // Getters
  string get_matricula();
  Curso *get_curso(string);

  // Setters
  void set_matricula(string);

  // Metodos
  void add_curso(Curso *);
  void remove_curso(string);
  void show_cursos();
};

// Constructor

Alumno::Alumno(string nombre, int edad, string telefono, string direccion,
               string matricula)
    : Persona(nombre, edad, telefono, direccion) {
  this->matricula = matricula;
}

// Alumno Getters

/**
 * Retorna la matricula del alumno
 *
 *
 * @return edificio
 */

string Alumno::get_matricula() { return matricula; }

/**
 * Busca el curso indicado en los parametros
 * por su nombre en el vector de cursos,
 * si encuentra el curso, regresa
 * el objeto curso
 *
 *
 * @param
 * @return curso
 */

Curso *Alumno::get_curso(string nombre) {
  for (Curso *curso : cursos) {
    if (curso->get_nombre() == nombre) {
      return curso;
    }
  }
  return nullptr; // El curso no se encontró
}

// Alumno Setters

/**
 * Actualiza la matricula del alumno
 *
 * @param
 * @return
 */

void Alumno::set_matricula(string matricula) { this->matricula = matricula; }

// Alumno Metodos

/**
 * Obtiene un objeto de tipo curso en los
 * parametros y lo agrega en el vector cursos
 *
 * @param
 * @return
 */

void Alumno::add_curso(Curso *curso) {
  // Se tiene que agregar un curso a la lista cursos
  cursos.push_back(curso);
}

/**
 * Obtiene el nombre del curso a eliminar,
 * si lo encuentra, borra el curso del vector
 * cursos
 *
 * @param
 * @return
 */

void Alumno::remove_curso(string nombreCurso) {
  // Se tiene que remover el curso buscandolo por su nombre
}

/**
 * Muestra el nombre de los cursos que el alumno
 * tiene registrados
 *
 * @return
 */

void Alumno::show_cursos() {
  // Se tienen que mostrar todos los cursos que se tienen
  for (Curso *curso : cursos) {
    cout << "- curso -" << curso->get_nombre() << "\n";
    curso->show_materias();
  }
}

#endif // ALUMNO_H_
