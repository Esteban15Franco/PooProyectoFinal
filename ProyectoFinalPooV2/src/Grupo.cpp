#include "Grupo.h"
#include <iostream>
using namespace std;

void Grupo::mostrarEstudiantes() {
    cout << "Grupo: " << nombre << endl;
    for (auto& estudiante : estudiantes) {
        estudiante->mostrarInfo();
    }
}
