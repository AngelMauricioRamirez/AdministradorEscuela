/*
 * Proyecto AdministradorEscuela
 * Angel Mauricio Ramirez Herrera
 * A01710158
 * 24/05/2023
 */

/*
 * Clase Curso contiene los datos
 * necesarios para registrar diversos cursos.
 */

#ifndef CURSO_H_
#define CURSO_H_

#include "Materia.h"
#include <sstream>
#include <string>
#include <vector>

class Curso {
private:
  // Variables iniciales
  std::string nombre;
  std::vector<Materia *> materias;

public:
  // Constructor
  Curso();
  Curso(std::string, std::string, int, std::string, double, std::string, int, int);

  ~Curso() {}

  // Getters
  std::string get_nombre();
  Materia* get_materia(std::string);
  std::vector<Materia *> get_materias();

  // Setters
  void set_nombre(std::string);
  void set_materia(std::string, int, std::string, double, std::string, int, int);

  // Metodos
  std::string show_materias();
  void remove_materia(std::string);
};

// Constructor

Curso::Curso() {
  nombre = "";
}

Curso::Curso(std::string nombre, std::string nombreMat, int nivelMat, std::string profesorMat,
             double calificacionMat, std::string edificio, int numero,
             int capacidad) {
  this->nombre = nombre;
  Materia *materiaInicial = new Materia(nombreMat, nivelMat, profesorMat, calificacionMat, edificio,
                  numero, capacidad);
  materias.push_back(materiaInicial);
}

// Getters

/**
 * Retorna el nombre del curso
 *
 *
 * @return nombre
 */

std::string Curso::get_nombre() { return nombre; }

/**
 * Busca una materia por su nombre y retorna
 * el objeto que coincida con el nombre.
 *
 *
 * @param
 * @return materia
 * @return nullptr
 */

Materia* Curso::get_materia(std::string nombre) {
  for (Materia *materia : materias) {
    if (materia->get_nombre() == nombre) {
      return materia;
    }
  }
  return nullptr; // La materia no se encontró
}

/**
 * Retorna el vector de las materias
 * que se tienen registradas en los cursos
 *
 *
 * @return materias
 */

std::vector<Materia *> Curso::get_materias() {
  return materias;
}

// Setters

/**
 * Actualiza el nombre que se tiene
 * en el curso
 *
 * @param
 * @return
 */

void Curso::set_nombre(std::string nombre) { this->nombre = nombre; }

/**
 * Agrega una nueva materia al curso, obtiene
 * el nombre de la materia, nivel, profesor, calificacion
 * edificio, numero y capacidad
 *
 * @param
 * @return
 */

void Curso::set_materia(std::string nombre, int nivel, std::string profesor,
                        double calificacion, std::string edificio, int numero,
                        int capacidad) {
  Materia *materia = new Materia(nombre, nivel, profesor, calificacion,
                                 edificio, numero, capacidad);
  materias.push_back(materia);
}

// Metodos

/**
 * Muestra las materias que se tienen registradas en el curso,
 * muestra el nombre de la materia, nivel, calificacion y profesor
 *
 *
 * @return aux
 */

std::string Curso::show_materias() {
  // Se imprimen todas las materias que el objeto tiene registradas
  std::stringstream aux;
  for (Materia *materia : materias) {
    aux << "Nombre de la materia: " << materia->get_nombre() << "\n";
    aux << "Nivel: " << materia->get_nivel() << "\n";
    aux << "Calificacion: " << materia->get_calificacion() << "\n";
    aux << "Profesor: " << materia->get_profesor() << "\n";
    aux << "Edificio: " << materia->get_aula().get_edificio() << "\n";
    aux << "Salon: " << materia->get_aula().get_numero() << "\n";
  }

  return aux.str();
}

/**
 * Elimina una materia que se tenga registrada en el curso,
 * se busca por el nombre de la materia y elimina la materia
 * del curso.
 *
 *
 * @return
 */

void Curso::remove_materia(std::string nombre){
//  Elimina la materia buscada por el nombre
  for(int i = 0; i < materias.size(); i++){
    if(materias[i]->get_nombre() == nombre){
      materias.erase(materias.begin() + i);
      break; // Termina el bucle después de encontrar y eliminar la materia
    }
  }
}

#endif // CURSO_H_
