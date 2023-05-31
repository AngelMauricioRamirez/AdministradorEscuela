#include "Alumno.h"
#include "Curso.h"
#include "Escuela.h"
#include <iostream>
using namespace std;

void display_menu(){
    int option = 0;
    while(option != 10){
        cout << "proporciona la opcion: \n";
        cin >> option;

        switch (option)
        {
        case 1:
            /* code */
            break;
        
        default:
            cout << "Proporciona una opcion valida\n";
            break;
        }
    }
}