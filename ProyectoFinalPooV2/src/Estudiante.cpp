#include "Estudiante.h"
#include <iostream>
using namespace std;

void Estudiante::asignarGrupo() {
    if (edad >= 0 && edad <= 1)
        grupo = "Párvulos";
    else if (edad >= 2 && edad <= 3)
        grupo = "Pre-jardín";
    else if (edad >= 4 && edad <= 5)
        grupo = "Jardín";
    else
        grupo = "Sin grupo";
}

void Estudiante::mostrarInfo() { // Sin const
    cout << "ID: " << id << ", Nombre: " << nombre << ", Teléfono: " << telefono
         << ", Edad: " << edad << ", Grupo: " << grupo << endl;
}
