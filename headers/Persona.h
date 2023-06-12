/*
 * Proyecto AdministradorEscuela
 * Angel Mauricio Ramirez Herrera
 * A01710158
 * 24/05/2023
 */

/*
 * Clase Persona es una clase padre
 * que almacena los datos necesarios para
 * registrar a una persona
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include "Curso.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class Persona {
protected:
  // Variables iniciales
  std::string nombre;
  int edad;
  std::string telefono;
  std::string direccion;

public:
  // Constructor
  Persona();
  Persona(std::string, int, std::string, std::string);

  virtual ~Persona() {};

  // Getters
  std::string get_nombre();
  int get_edad();
  std::string get_telefono();
  std::string get_direccion();

  // Setters
  void set_nombre(std::string);
  void set_edad(int);
  void set_telefono(std::string);
  void set_direccion(std::string);

  // Metodos
  virtual std::string get_info() = 0;
};

// Constructor

Persona::Persona(){
  nombre = "";
  edad = 0;
  telefono = "";
  direccion = "";
}

Persona::Persona(std::string nombre, int edad, std::string telefono, std::string direccion) {
  this->nombre = nombre;
  this->edad = edad;
  this->telefono = telefono;
  this->direccion = direccion;
}

// Pesona Getters

/**
 * Retorna el nombre de
 * la persona registrada
 *
 *
 * @return nombre
 */

std::string Persona::get_nombre() { return nombre; }

/**
 * Retorna la edad de la
 * persona registrada
 *
 *
 * @return edad
 */

int Persona::get_edad() { return edad; }

/**
 * Retorna el numero de telefono de
 * la persona registrada
 *
 *
 * @return telefono
 */

std::string Persona::get_telefono() { return telefono; }

/**
 * Retorna la direccion de la
 * persona registrada
 *
 *
 * @return direccion
 */

std::string Persona::get_direccion() { return direccion; }

// Persona Setters

/**
 * Actualiza el nombre de
 * la persona registrada
 *
 * @param
 * @return
 */

void Persona::set_nombre(std::string nombre) { this->nombre = nombre; }

/**
 * Actualiza la edad de
 * la persona registrada
 *
 * @param
 * @return
 */

void Persona::set_edad(int edad) { this->edad = edad; }

/**
 * Actualiza el numero de telefono
 * de la persona registrada
 *
 * @param
 * @return
 */

void Persona::set_telefono(std::string telefono) { this->telefono = telefono; }

/**
 * Actualiza la direccion de
 * la persona registrada
 *
 * @param
 * @return
 */

void Persona::set_direccion(std::string direccion) { this->direccion = direccion; }

#endif // PERSONA_H_
