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
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Curso{
private:
  // Variables iniciales
  string nombre;
  vector<Materia*> materias;
public:
  // Constructor
  Curso(string nombre, string nombreMat, int nivelMat, string profesorMat, double calificacionMat, string edificio, int numero, int capacidad){
    this->nombre = nombre;
    Materia* materiaInicial = new Materia(nombreMat, nivelMat, profesorMat, calificacionMat, edificio, numero, capacidad);
    materias.push_back(materiaInicial);
  }
  // Getters
  string get_nombre();
  Materia* get_materia(string);
  // Setters
  void set_nombre(string);
  void set_materia(string, int, string, double, string, int, int);
  // Metodos
  void show_materias();
  //void remove_materia(string);
  
};

// Getters

/**
 * Retorna el nombre del curso
 *
 *
 * @return nombre
*/

string Curso::get_nombre(){
  return nombre;
}

/**
 * Busca una materia por su nombre y retorna
 * el objeto que coincida con el nombre.
 *
 *
 * @param
 * @return materia
 * @return nullptr
*/

Materia* Curso::get_materia(string nombre){
  for(Materia* materia : materias){
    if(materia->get_nombre() == nombre){
      return materia;
    }
  }
  return nullptr; // La materia no se encontró
}

// Setters

/**
 * Actualiza el nombre que se tiene 
 * en el curso
 *
 * @param
 * @return
*/

void Curso::set_nombre(string nombre){
  this->nombre = nombre;
}

/**
 * Agrega una nueva materia al curso, obtiene
 * el nombre de la materia, nivel, profesor, calificacion
 * edificio, numero y capacidad
 *
 * @param
 * @return
*/

void Curso::set_materia(string nombre, int nivel, string profesor, double calificacion, string edificio, int numero, int capacidad){
  Materia* materia = new Materia(nombre, nivel, profesor, calificacion, edificio, numero, capacidad);
  materias.push_back(materia);
}

// Metodos

/**
 * Muestra las materias que se tienen registradas en el curso,
 * muestra el nombre de la materia, nivel, calificacion y profesor
 *
 * 
 * @return
*/

void Curso::show_materias(){
  // Se imprimen todas las materias que el objeto tiene registradas
  for (Materia* materia : materias) {
    cout << "- " << materia->get_nombre() << " nivel: " << materia->get_nivel() << " calificacion: " << materia->get_calificacion() << " profesor: " << materia->get_profesor() << "\n";
    cout << "- " << materia->get_aula().get_edificio() << "\n";
  }
}

//void Curso::remove_materia(string nombre){
  // Elimina la materia buscada por el nombre
//}

#endif // CURSO_H_
