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
using namespace std;

class Administrativo : public Persona {
private:
  // Variables iniciales
  string departamento;

public:
  // Constructor
  Administrativo();
  Administrativo(string, int, string, string, string);

  ~Administrativo() {}

  // Getters
  string get_departamento();

  // Setters
  void set_departamento(string);

  // Metodos
  string get_info() override;
};

// Constructor

Administrativo::Administrativo() : Persona(){
  departamento = "";
}

Administrativo::Administrativo(string nombre, int edad, string telefono,
                               string direccion, string departamento)
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

string Administrativo::get_departamento() { return departamento; }

// Administrativo Setters

/**
 * Actualiza el departamento asignado al
 * administrativo
 *
 * @param
 * @return
 */

void Administrativo::set_departamento(string departamento) {
  this->departamento = departamento;
}

// Metodos

/**
 * Retorna un string con toda la información del
 * administrativo
 *
 * @return
 */

string Administrativo::get_info(){
  stringstream aux;
  aux << "\nNombre: " << nombre << " Edad: " << edad << 
  " Telefono: " << telefono << " Direccion: " << direccion << " Departamento: " << departamento << "\n";
  return aux.str();
}


#endif // ADMINISTRATIVO_H_