#ifndef FUNCIONESCSV_H
#define FUNCIONESCSV_H


#include <fstream>
#include <vector>
#include "Estudiante.h"

void exportarEstudiantesCSV(const vector<Estudiante*>& estudiantes) {
    ofstream file("estudiantes.csv");
    file << "ID,Nombre,Edad,Grupo\n";
    for (auto& estudiante : estudiantes) {
        file << estudiante->getId() << "," << estudiante->getNombre() << "," << estudiante->getEdad() << "," << estudiante->getGrupo() << "\n";
    }
    file.close();
}

#endif // FUNCIONESCSV_H
