/*
 * Proyecto AdministradorEscuela
 * Angel Mauricio Ramirez Herrera
 * A01710158
 * 24/05/2023
 */

/*
 * Clase Materia contiene los datos
 * necesarios para registrar a una materia.
 */

#ifndef MATERIA_H_
#define MATERIA_H_

#include "Aula.h"
#include <string>
#include <vector>

class Materia {
private:
  // Variables iniciales
  std::string nombre;
  int nivel;
  std::string profesor;
  Aula aula;
  double calificacion;

public:
  // Constructor
  Materia();
  Materia(std::string, int, std::string, double, std::string, int, int);

  ~Materia() {}

  // Getters
  std::string get_nombre();
  int get_nivel();
  std::string get_profesor();
  Aula get_aula();
  double get_calificacion();

  // Setters
  void set_nombre(std::string);
  void set_nivel(int);
  void set_profesor(std::string);
  void set_aula(std::string, int, int);
  void set_calificacion(double);
};

// Constructor

Materia::Materia(){
  nombre = "";
  nivel = 0;
  profesor = "";
  calificacion = 0.0;
}

Materia::Materia(std::string nombre, int nivel, std::string profesor, double calificacion,
                 std::string edificio, int numero, int capacidad)
    : aula(edificio, numero, capacidad) {
  this->nombre = nombre;
  this->nivel = nivel;
  this->profesor = profesor;
  this->calificacion = calificacion;
}

// Getters

/**
 * Retorna el nombre de la materia, ejemplo:
 * Matematicas, Computacion, etc.
 *
 *
 * @return nombre
 */

std::string Materia::get_nombre() { return nombre; }

/**
 * Retorna el nivel de la materia
 *
 *
 * @return nivel
 */

int Materia::get_nivel() { return nivel; }

/**
 * Retorna el nombre del profesor que
 * dara la materia
 *
 *
 * @return profesor
 */

std::string Materia::get_profesor() { return profesor; }

/**
 * Retorna el Aula donde se va a tomar
 * la materia
 *
 *
 * @return aula
 */

Aula Materia::get_aula() { return aula; }

/**
 * Retorna la calificacion que se tiene
 * registrada en la materia
 *
 *
 * @return calificacion
 */

double Materia::get_calificacion() { return calificacion; }

// Setters

/**
 * Actualiza el nombre que se tiene
 * en el la materia
 *
 * @param
 * @return
 */

void Materia::set_nombre(std::string nombre) { this->nombre = nombre; }

/**
 * Actualiza el nivel que se tiene
 * en la materia
 *
 * @param
 * @return
 */

void Materia::set_nivel(int nivel) { this->nivel = nivel; }

/**
 * Actualiza el nombre del profesor
 * que da la materia
 *
 * @param
 * @return
 */

void Materia::set_profesor(std::string profesor) { this->profesor = profesor; }

/**
 * Actualiza el aula en donde se va a tomar
 * la materia, recibe el edificio, el numero y
 * la capacidad
 *
 * @param
 * @return
 */

void Materia::set_aula(std::string edificio, int numero, int capacidad) {
  aula.set_edificio(edificio);
  aula.set_numero(numero);
  aula.set_capacidad(capacidad);
}

/**
 * Actualiza la calificacion que se tiene
 * en la materia
 *
 * @param
 * @return
 */

void Materia::set_calificacion(double calificacion) {
  this->calificacion = calificacion;
}

#endif // MATERIA_H_
