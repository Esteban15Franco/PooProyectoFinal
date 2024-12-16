#include "Grupo.h"
#include <iostream>
using namespace std;

void Grupo::mostrarEstudiantes() {
    cout << "Grupo: " << nombre << endl;
    for (auto& estudiante : estudiantes) {
        estudiante->mostrarInfo();
    }
}

bool Grupo::agregarEstudiante(shared_ptr<Estudiante>& estudiante) {
    if (contadorEstudiantes < MAX_ESTUDIANTES) {
        estudiantes.push_back(estudiante);
        contadorEstudiantes++;
        return true;
    }
    return false;
}
