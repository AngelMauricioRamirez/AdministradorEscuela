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
  Profesor();
  Profesor(string, int, string, string, string);

  ~Profesor() {}

  // Getters
  string get_especialidad();

  // Setters
  void set_especialidad(string);

  // Metodos
  string get_info() override;
};

// Constructor

Profesor::Profesor() : Persona() {
  especialidad = "";
}

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

// Metodos

/**
 * Retorna un string con toda la información del
 * profesor
 *
 * @return
 */

string Profesor::get_info(){
  stringstream aux;
  aux << "\nNombre: " << nombre << " Edad: " << edad << 
  " Telefono: " << telefono << " Direccion: " << direccion << " Especialidad: " << especialidad << "\n";
  return aux.str();
}

#endif // PROFESOR_H_
