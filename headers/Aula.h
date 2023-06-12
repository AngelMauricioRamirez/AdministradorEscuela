/*
 * Proyecto AdministradorEscuela
 * Angel Mauricio Ramirez Herrera
 * A01710158
 * 24/05/2023
 */

/*
 * Clase Aula contiene los datos
 * necesarios para registrar a una aula.
 */

#ifndef AULA_H_
#define AULA_H_

#include <iostream>
#include <string>
#include <vector>

class Aula {
private:
  // Variables iniciales
  std::string edificio;
  int numero;
  int capacidad;

public:
  // Constructor
  Aula();
  Aula(std::string, int, int);

  ~Aula() {}

  // Getters
  std::string get_edificio();
  int get_numero();
  int get_capacidad();

  // Setters
  void set_edificio(std::string);
  void set_numero(int);
  void set_capacidad(int);
};

// Constructor

Aula::Aula(){
  edificio = "";
  numero = 0;
  capacidad = 0;
}

Aula::Aula(std::string edificio, int numero, int capacidad) {
  this->edificio = edificio;
  this->numero = numero;
  this->capacidad = capacidad;
}

// Getters

/**
 * Retorna el nombre del edificio
 *
 *
 * @return edificio
 */

std::string Aula::get_edificio() { return edificio; }

/**
 * Retorna el numero de salon en
 * el que se encuentra el aula
 *
 *
 * @return numero
 */

int Aula::get_numero() { return numero; }

/**
 * Retorna la capacidad que tiene
 * el aula
 *
 *
 * @return capacidad
 */

int Aula::get_capacidad() { return capacidad; }

// Setters

/**
 * Actualiza el edificio en donde
 * se encuentra el aula
 *
 * @param
 * @return
 */

void Aula::set_edificio(std::string edificio) { this->edificio = edificio; }

/**
 * Actualiza el numero de salon en donde
 * se encuentra el aula
 *
 * @param
 * @return
 */

void Aula::set_numero(int numero) { this->numero = numero; }

/**
 * Actualiza la capacidad del aula
 *
 * @param
 * @return
 */

void Aula::set_capacidad(int capacidad) { this->capacidad = capacidad; }

#endif // AULA_H_
