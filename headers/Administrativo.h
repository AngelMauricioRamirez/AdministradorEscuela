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

#ifndef ADMINISTRATIVO_H_
#define ADMINISTRATIVO_H_

#include "Persona.h"
#include <iostream>
#include <string>
#include <vector>

class Administrativo : public Persona {
private:
  // Variables iniciales
  std::string departamento;

public:
  // Constructor
  Administrativo();
  Administrativo(std::string, int, std::string, std::string, std::string);

  ~Administrativo() {}

  // Getters
  std::string get_departamento();

  // Setters
  void set_departamento(std::string);

  // Metodos
  std::string get_info() override;
};

// Constructor

Administrativo::Administrativo() : Persona(){
  departamento = "";
}

Administrativo::Administrativo(std::string nombre, int edad, std::string telefono,
                               std::string direccion, std::string departamento)
    : Persona(nombre, edad, telefono, direccion) {
  this->departamento = departamento;
}

// Administrativo Getters

/**
 * Retorna el departamento en el
 * que está asignado el administrativo
 *
 *
 * @return departamento
 */

std::string Administrativo::get_departamento() { return departamento; }

// Administrativo Setters

/**
 * Actualiza el departamento asignado al
 * administrativo
 *
 * @param
 * @return
 */

void Administrativo::set_departamento(std::string departamento) {
  this->departamento = departamento;
}

// Metodos

/**
 * Retorna un string con toda la información del
 * administrativo
 *
 * @return
 */

std::string Administrativo::get_info(){
  std::stringstream aux;
  aux << "\nNombre: " << nombre << " Edad: " << edad << 
  " Telefono: " << telefono << " Direccion: " << direccion << " Departamento: " << departamento << "\n";
  return aux.str();
}


#endif // ADMINISTRATIVO_H_
