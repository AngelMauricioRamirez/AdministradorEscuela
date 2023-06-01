#include "Alumno.h"
#include "Curso.h"
#include "Escuela.h"
#include <iostream>
using namespace std;

void display_menu(Escuela &escuela){
    int option = 0;
    string nombre;
    int edad;
    string telefono;
    string direccion;
    string argumento;
    while(option < 4){
        cout << "1) Agregar alumno: \n";
        cout << "2) Agregar profesor: \n";
        cout << "3) Agregar administrativo: \n";
        cout << "4) Administrar alumnos: \n";
        cout << "Proporciona la opcion: \n";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Proporciona el nombre: \n";
            cin >> nombre;
            cout << "Proporciona la edad: \n";
            cin >> edad;
            cout << "Proporciona el numero de telefono: \n";
            cin >> telefono;
            cout << "Proporciona la direccion: \n";
            cin >> direccion;
            cout << "Proporciona la matricula: \n";
            cin >> argumento;

            escuela.agregar_alumno(nombre, edad, telefono, direccion, argumento);
            break;
        
        case 2:
            cout << "Proporciona el nombre: \n";
            cin >> nombre;
            cout << "Proporciona la edad: \n";
            cin >> edad;
            cout << "Proporciona el numero de telefono: \n";
            cin >> telefono;
            cout << "Proporciona la direccion: \n";
            cin >> direccion;
            cout << "Proporciona la especialidad: \n";
            cin >> argumento;

            escuela.agregar_profesor(nombre, edad, telefono, direccion, argumento);
            break;

        case 3:
            cout << "Proporciona el nombre: \n";
            cin >> nombre;
            cout << "Proporciona la edad: \n";
            cin >> edad;
            cout << "Proporciona el numero de telefono: \n";
            cin >> telefono;
            cout << "Proporciona la direccion: \n";
            cin >> direccion;
            cout << "Proporciona el departamento: \n";
            cin >> argumento;

            escuela.agregar_administrativo(nombre, edad, telefono, direccion, argumento);

            break;

        case 4:
            cout << "Proporciona la matricula del alumno: \n";
            cin >> argumento;
            if(escuela.get_alumno(argumento) != nullptr){
                int op = 0;
                cout << escuela.get_alumno(argumento)->get_nombre() << "\n";
                cout << "------------------------------";
                cout << "1) Agregar curso \n";
                cout << "2) Asignar calificacion \n";
                cin >> op;
                switch(op)
                {
                    case 1:

                        break;

                    case 2:

                        break;

                    default:
                        break;
                }

            }
            break;
        
        default:
            cout << "Proporciona una opcion valida\n";
            break;
        }
    }
}