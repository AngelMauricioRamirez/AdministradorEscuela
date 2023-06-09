/*
 * Proyecto AdministradorEscuela
 * Angel Mauricio Ramirez Herrera
 * A01710158
 * 24/05/2023
 */

/*
 * Clase Alumno contiene los datos
 * necesarios para registrar a un alumno.
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_

#include "Persona.h"
#include <string>
#include <vector>

class Alumno : public Persona {
private:
  std::string matricula;
  std::vector<Curso> cursos;

public:
  // Constructor
  Alumno();
  Alumno(std::string, int, std::string, std::string, std::string);

  ~Alumno() {}

  // Getters
  std::string get_matricula();
  Curso get_curso(std::string);

  // Setters
  void set_matricula(std::string);

  // Metodos
  void add_curso(Curso);
  void remove_curso(std::string);
  std::string show_cursos();
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

Curso Alumno::get_curso(std::string nombre) {
  for (Curso curso : cursos) {
    if (curso.get_nombre() == nombre) {
      return curso;
    }
  }
  return Curso(); // El curso no se encontró
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

void Alumno::add_curso(Curso curso) {
  // Se crea un nuevo curso para agregarlo a la lista de cursos
  Curso new_curso;
  new_curso.set_nombre(curso.get_nombre());
  std::vector<Materia *> materias = curso.get_materias();

  // Se recorre la lista de materias para obtener los datos necesarios
  // para crear el nuevo curso. Esto se debe a que no se puede pasar el
  // objeto completo a la lista de cursos, ya que también se pasarían los
  // punteros de las materias. Si se modifican los datos de la materia,
  // también se afectaría al curso que se pasó como parámetro.

  for(Materia *materia : materias){
    Materia new_materia;
    new_curso.set_materia(materia->get_nombre(), materia->get_nivel(), 
    materia->get_profesor(), materia->get_calificacion(), materia->get_aula().get_edificio(),
    materia->get_aula().get_numero(), materia->get_aula().get_capacidad());
  }

  cursos.push_back(new_curso);
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
    if(cursos[i].get_nombre() == nombreCurso){
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

std::string Alumno::show_cursos() {
  // Se tienen que mostrar todos los cursos que se tienen
  std::stringstream aux;
  for (Curso curso : cursos) {
    aux << "\nCurso: " << curso.get_nombre() << "\n";
    aux << curso.show_materias() << "\n";
  }

  return aux.str();
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
