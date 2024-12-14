#include "Docente.h"
#include <iostream>
using namespace std;

void Docente::mostrarInfo() {
    cout << "ID: " << id << ", Nombre: " << nombre << ", Teléfono: " << telefono
         << ", Especialidad: " << especialidad << endl;
}
