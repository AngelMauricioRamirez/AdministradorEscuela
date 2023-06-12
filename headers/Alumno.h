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

class Alumno : public Persona {
private:
  std::string matricula;
  std::vector<Curso *> cursos;

public:
  // Constructor
  Alumno();
  Alumno(std::string, int, std::string, std::string, std::string);

  ~Alumno();

  // Getters
  std::string get_matricula();
  Curso *get_curso(std::string);

  // Setters
  void set_matricula(std::string);

  // Metodos
  void add_curso(Curso *);
  void remove_curso(std::string);
  void show_cursos();
  std::string get_info() override;
};

// Constructor

Alumno::Alumno() : Persona(){
  matricula = "";
}

Alumno::Alumno(std::string nombre, int edad, std::string telefono, std::string direccion,
               std::string matricula)
    : Persona(nombre, edad, telefono, direccion) {
  this->matricula = matricula;
}

Alumno::~Alumno(){
  for(Curso *curso : cursos){
    delete curso;
  }
}

// Alumno Getters

/**
 * Retorna la matricula del alumno
 *
 *
 * @return edificio
 */

std::string Alumno::get_matricula() { return matricula; }

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

Curso *Alumno::get_curso(std::string nombre) {
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

void Alumno::set_matricula(std::string matricula) { this->matricula = matricula; }

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

void Alumno::remove_curso(std::string nombreCurso) {
  // Se tiene que remover el curso buscandolo por su nombre
  for(int i = 0; i < cursos.size(); i++){
    if(cursos[i]->get_nombre() == nombreCurso){
      cursos.erase(cursos.begin() + i);
      break; // Termina el bucle después de encontrar y eliminar la materia
    }
  }
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
    std::cout << "\nCurso: " << curso->get_nombre() << "\n";
    curso->show_materias();
  }
}

/**
 * Retorna un string con toda la información del
 * alumno
 *
 * @return
 */

std::string Alumno::get_info(){
  std::stringstream aux;
  aux << "\nNombre: " << nombre << " Edad: " << edad << 
  " Telefono: " << telefono << " Direccion: " << direccion << " Matricula: " << matricula << "\n";
  return aux.str();
}

#endif // ALUMNO_H_
