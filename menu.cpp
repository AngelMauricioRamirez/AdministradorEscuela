#include "Alumno.h"
#include "Curso.h"
#include "Escuela.h"
#include <iostream>
#include <vector>
#include <string>

void display_menu(Escuela &escuela) {
    int option = 0;
    std::string nombre;
    int edad;
    std::string telefono;
    std::string direccion;
    std::string argumento;

    std::vector<Curso *> cursos;

    Curso *c1 = new Curso("F200", "Calculo Diferencial", 2, "Luis Miguel", 0.0, "4", 301, 40);
    Curso *c2 = new Curso("F201", "Diferenciales", 2, "Momox", 0.0, "4", 302, 40);
    Curso *c3 = new Curso("TC1030", "Programacion (POO)", 2, "Benjamin ", 0.0, "6", 102, 30);
    Curso *c4 = new Curso("F203", "Algebra Lineal", 2, "Maria Luisa", 0.0, "2", 001, 40);

    c1->set_materia("Calculo Integral", 2, "Luis Miguel", 0.0, "4", 301, 40);
    c4->set_materia("Logica", 2, "Ramona", 0.0, "2", 001, 40);

    cursos.push_back(c1);
    cursos.push_back(c2);
    cursos.push_back(c3);
    cursos.push_back(c4);

    while (option < 6) {
        std::cout << "1) Agregar alumno: \n";
        std::cout << "2) Agregar profesor: \n";
        std::cout << "3) Agregar administrativo: \n";
        std::cout << "4) Administrar alumnos: \n";
        std::cout << "5) Ver personas en la escuela \n";
        std::cout << "Proporciona la opcion: \n";
        std::cin >> option;

        switch (option) {
            case 1: {
                std::cout << "Proporciona el nombre: \n";
                std::cin.ignore();
                std::getline(std::cin, nombre);
                std::cout << "Proporciona la edad: \n";
                std::cin >> edad;
                std::cin.ignore();
                std::cout << "Proporciona el numero de telefono: \n";
                std::getline(std::cin, telefono);
                std::cout << "Proporciona la direccion: \n";
                std::getline(std::cin, direccion);
                std::cout << "Proporciona la matricula: \n";
                std::getline(std::cin, argumento);

                escuela.agregar_alumno(nombre, edad, telefono, direccion, argumento);
                break;
            }
            case 2: {
                std::cout << "Proporciona el nombre: \n";
                std::cin.ignore();
                std::getline(std::cin, nombre);
                std::cout << "Proporciona la edad: \n";
                std::cin >> edad;
                std::cin.ignore();
                std::cout << "Proporciona el numero de telefono: \n";
                std::getline(std::cin, telefono);
                std::cout << "Proporciona la direccion: \n";
                std::getline(std::cin, direccion);
                std::cout << "Proporciona la matricula: \n";
                std::getline(std::cin, argumento);

                escuela.agregar_profesor(nombre, edad, telefono, direccion, argumento);
                break;
            }
            case 3: {
                std::cout << "Proporciona el nombre: \n";
                std::cin.ignore();
                std::getline(std::cin, nombre);
                std::cout << "Proporciona la edad: \n";
                std::cin >> edad;
                std::cin.ignore();
                std::cout << "Proporciona el numero de telefono: \n";
                std::getline(std::cin, telefono);
                std::cout << "Proporciona la direccion: \n";
                std::getline(std::cin, direccion);
                std::cout << "Proporciona la matricula: \n";
                std::getline(std::cin, argumento);

                escuela.agregar_administrativo(nombre, edad, telefono, direccion, argumento);
                break;
            }
            case 4: {
                std::cout << "Proporciona la matricula del alumno: \n";
                std::cin.ignore();
                std::getline(std::cin, argumento);
                if (escuela.get_alumno(argumento) != nullptr) {
                    int op = 0;
                    std::string nombreCurso;

                    std::cout << escuela.get_alumno(argumento)->get_nombre() << "\n";
                    std::cout << "------------------------------ \n";
                    std::cout << "1) Agregar curso \n";
                    std::cout << "2) Asignar calificacion \n";
                    std::cout << "3) Remover curso \n";
                    std::cin >> op;

                    switch (op) {
                        case 1: {
                            std::cout << "Cursos: \n";
                            for (Curso *curso : cursos) {
                                std::cout << "Nombre del curso: " << curso->get_nombre() << "\n";
                                std::cout << "Materias: \n";
                                curso->show_materias();
                            }

                            std::cout << "Proporciona el nombre del curso: \n";
                            std::cin.ignore();
                            std::getline(std::cin, nombreCurso);

                            bool encontrado = false;
                            for (Curso *curso : cursos) {
                                if (curso->get_nombre() == nombreCurso) {
                                    escuela.get_alumno(argumento)->add_curso(curso);
                                    std::cout << "Curso agregado! \n";
                                    encontrado = true;
                                    break;
                                }
                            }

                            if (!encontrado) {
                                std::cout << "No se encontro el curso! \n";
                            }

                            break;
                        }
                        case 2: {
                            escuela.get_alumno(argumento)->show_cursos();
                            std::cout << "Proporciona el nombre del curso: \n";
                            std::cin.ignore();
                            std::getline(std::cin, nombreCurso);

                            Curso *curso = escuela.get_alumno(argumento)->get_curso(nombreCurso);
                            if (curso != nullptr) {
                                std::string nombreMateria;
                                std::cout << "Proporciona el nombre de la materia: \n";
                                std::getline(std::cin, nombreMateria);

                                Materia *materia = curso->get_materia(nombreMateria);
                                if (materia != nullptr) {
                                    double calificacion;
                                    std::cout << "Proporciona la calificacion de la materia: \n";
                                    std::cin >> calificacion;
                                    materia->set_calificacion(calificacion);
                                } else {
                                    std::cout << "No se encontro la materia! \n";
                                }
                            } else {
                                std::cout << "No se encontro el curso! \n";
                            }

                            break;
                        }

                        case 3: {
                            escuela.get_alumno(argumento)->show_cursos();
                            std::cout << "Proporciona el nombre del curso: \n";
                            std::cin.ignore();
                            std::getline(std::cin, nombreCurso);

                            Curso *curso = escuela.get_alumno(argumento)->get_curso(nombreCurso);
                            if (curso != nullptr) {
                                escuela.get_alumno(argumento)->remove_curso(nombreCurso);
                                std::cout << "Se ha removido el curso! \n";
                            } else {
                                std::cout << "No se encontro el curso! \n";
                            }
          
                            break;
                        }

                        default:
                            break;
                    }
                } else {
                    std::cout << "No se encuentra al alumno! \n";
                }
                break;
            }
            case 5:
                escuela.show_personas();
                break;
            default:
                std::cout << "Proporciona una opcion valida\n";
                break;
        }
    }

    delete c1, c2, c3, c4;
}
