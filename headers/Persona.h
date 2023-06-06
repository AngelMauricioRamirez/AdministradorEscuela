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
#include <string>
#include <vector>
using namespace std;

class Persona {
private:
  // Variables iniciales
  string nombre;
  int edad;
  string telefono;
  string direccion;

public:
  // Constructor
  Persona() {}
  Persona(string nombre, int edad, string telefono, string direccion);

  virtual ~Persona() {};

  // Getters
  string get_nombre();
  int get_edad();
  string get_telefono();
  string get_direccion();

  // Setters
  void set_nombre(string);
  void set_edad(int);
  void set_telefono(string);
  void set_direccion(string);
};

// Constructor

Persona::Persona(string nombre, int edad, string telefono, string direccion) {
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

string Persona::get_nombre() { return nombre; }

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

string Persona::get_telefono() { return telefono; }

/**
 * Retorna la direccion de la
 * persona registrada
 *
 *
 * @return direccion
 */

string Persona::get_direccion() { return direccion; }

// Persona Setters

/**
 * Actualiza el nombre de
 * la persona registrada
 *
 * @param
 * @return
 */

void Persona::set_nombre(string nombre) { this->nombre = nombre; }

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

void Persona::set_telefono(string telefono) { this->telefono = telefono; }

/**
 * Actualiza la direccion de
 * la persona registrada
 *
 * @param
 * @return
 */

void Persona::set_direccion(string direccion) { this->direccion = direccion; }

#endif // PERSONA_H_
