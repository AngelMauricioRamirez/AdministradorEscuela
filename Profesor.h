/*
 * Proyecto AdministradorEscuela
 * Angel Mauricio Ramirez Herrera
 * A01710158
 * 24/05/2023
 */

/*
 * Clase Administrativo contiene los datos
 * necesarios para registrar a un administrativo.
 */

#ifndef PROFESOR_H_
#define PROFESOR_H_

#include "Persona.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Profesor : public Persona {
private:
  // Variables iniciales
  string especialidad;

public:
  // Constructor
  Profesor() {}
  Profesor(string nombre, int edad, string telefono, string direccion,
           string especialidad);

  // Getters
  string get_especialidad();

  // Setters
  void set_especialidad(string);
};

// Constructor

Profesor::Profesor(string nombre, int edad, string telefono, string direccion,
                   string especialidad)
    : Persona(nombre, edad, telefono, direccion) {
  this->especialidad = especialidad;
}

// Profesor Getters

/**
 * Retorna la especialidad que imparte
 * el profesor
 *
 *
 * @return especialidad
 */

string Profesor::get_especialidad() { return especialidad; }

// Profesor Setters

/**
 * Actualiza la especialidad impartida
 * por el profesor
 *
 * @param
 * @return
 */

void Profesor::set_especialidad(string especialidad) {
  this->especialidad = especialidad;
}

#endif // PROFESOR_H_
