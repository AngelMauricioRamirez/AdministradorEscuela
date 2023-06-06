/*
 * Proyecto AdministradorEscuela
 * Angel Mauricio Ramirez Herrera
 * A01710158
 * 24/05/2023
 */

/*
 * Clase Escuela es una clase
 * que permite administrar los datos
 * con respecto a las personas
 * que se encuentran registradas
 * en una escuela
 */

#ifndef ESCUELA_H_
#define ESCUELA_H_

#include "Administrativo.h"
#include "Alumno.h"
#include "Persona.h"
#include "Profesor.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Escuela {
private:
  // Variables iniciales
  string nombre;
  string direccion;
  string telefono;
  vector<Persona *> personas;

public:
  // Constructor
  Escuela() {}
  Escuela(string nombre, string direccion, string telefono);

  // Getters
  string get_nombre();
  string get_direccion();
  string get_telefono();

  // Setters
  void set_nombre(string);
  void set_direccion(string);
  void set_telefono(string);
  Alumno *get_alumno(string);
  Profesor *get_profesor(string, string);
  Administrativo *get_administrativo(string, string);

  // Metodos
  void show_personas();
  void agregar_alumno(string, int, string, string, string);
  void agregar_profesor(string, int, string, string, string);
  void agregar_administrativo(string, int, string, string, string);
};

// Constructor

Escuela::Escuela(string nombre, string direccion, string telefono) {
  this->nombre = nombre;
  this->telefono = telefono;
  this->direccion = direccion;
}

// Getters

/**
 * Retorna el nombre de
 * la escuela
 *
 * @return nombre
 */

string Escuela::get_nombre() { return nombre; };

/**
 * Retorna la direccion de
 * la escuela
 *
 * @return direccion
 */

string Escuela::get_direccion() { return direccion; };

/**
 * Retorna el telefono de
 * la escuela
 *
 * @return telefono
 */

string Escuela::get_telefono() { return telefono; };

/**
 * Busca un alumno por su matricula y retorna
 * el objeto que coincida con la matricula,
 * realizando polimorfismo de la clase padre
 * Persona.
 *
 *
 * @param
 * @return dynamic_cast<Alumno *>(persona)
 * @return nullptr
 */

Alumno *Escuela::get_alumno(string matricula) {
  for (Persona *persona : personas) {
    if (dynamic_cast<Alumno *>(persona)->get_matricula() == matricula) {
      return dynamic_cast<Alumno *>(persona);
    }
  }
  return nullptr; // El alumno no se encontró
}

/**
 * Busca un profesor por su nombre y especialidad 
 * y retorna el objeto que coincida con los datos,
 * realizando polimorfismo de la clase padre
 * Persona.
 *
 *
 * @param
 * @return dynamic_cast<Profesor *>(persona)
 * @return nullptr
 */

Profesor *Escuela::get_profesor(string nombre, string especialidad) {
  for (Persona *persona : personas) {
    if (persona->get_nombre() == nombre && dynamic_cast<Profesor *>(persona)->get_especialidad() == especialidad) {
      return dynamic_cast<Profesor *>(persona);
    }
  }
  return nullptr; // El profesor no se encontró
}

/**
 * Busca un administrativo por su nombre y departamento 
 * y retorna el objeto que coincida con los datos,
 * realizando polimorfismo de la clase padre
 * Persona.
 *
 *
 * @param
 * @return dynamic_cast<Administrativo *>(persona)
 * @return nullptr
 */

Administrativo *Escuela::get_administrativo(string nombre, string departamento){
  for (Persona *persona : personas) {
    if (persona->get_nombre() == nombre && dynamic_cast<Administrativo *>(persona)->get_departamento() == departamento) {
      return dynamic_cast<Administrativo *>(persona);
    }
  }
  return nullptr; // El administrativo no se encontró
}

// Setters

/**
 * Actualiza el nombre que se tiene
 * registrado de la escuela
 *
 * @param
 * @return
 */

void Escuela::set_nombre(string nombre) { this->nombre = nombre; }

/**
 * Actualiza la direccion que se tiene
 * registrada de la escuela
 *
 * @param
 * @return
 */

void Escuela::set_direccion(string direccion) { this->direccion = direccion; }

/**
 * Actualiza el telefono que se tiene
 * registrado de la escuela
 *
 * @param
 * @return
 */

void Escuela::set_telefono(string telefono) { this->telefono = telefono; }

// Metodos

/**
 * Mustra todas las personas que 
 * se tienen registradas en la
 * escuela
 *
 * @param
 * @return
 */

void Escuela::show_personas() {
  for (Persona *persona : personas) {
    cout << persona->get_nombre() << "\n";
  }
}

/**
 * Agrega un nuevo alumno a 
 * la escuela en el vector de 
 * personas
 *
 * @param
 * @return
 */

void Escuela::agregar_alumno(string nombre, int edad, string telefono,
                             string direccion, string matricula) {
  Persona *persona = new Alumno(nombre, edad, telefono, direccion, matricula);

  personas.push_back(persona);
}

/**
 * Agrega un nuevo profesor a 
 * la escuela en el vector de 
 * personas
 *
 * @param
 * @return
 */

void Escuela::agregar_profesor(string nombre, int edad, string telefono,
                             string direccion, string especialidad) {
  Persona *persona = new Profesor(nombre, edad, telefono, direccion, especialidad);

  personas.push_back(persona);
}

/**
 * Agrega un nuevo administrativo a 
 * la escuela en el vector de 
 * personas
 *
 * @param
 * @return
 */

void Escuela::agregar_administrativo(string nombre, int edad, string telefono,
                              string direccion, string departamento){
  Persona *persona = new Administrativo(nombre, edad, telefono, direccion, departamento);

  personas.push_back(persona);
}

#endif // Escuela_H_
