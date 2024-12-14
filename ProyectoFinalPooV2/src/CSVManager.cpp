#include "CSVManager.h"
#include <fstream>
#include <iostream>
using namespace std;

void CSVManager::exportarEstudiantes(vector<Estudiante*> estudiantes, string filename) {
    ofstream file(filename);
    if (file.is_open()) {
        file << "ID,Nombre,Teléfono,Edad,Grupo\n";
        for (auto& estudiante : estudiantes) {
            file << estudiante->getId() << "," << estudiante->getNombre() << ","
                 << estudiante->getTelefono() << "," << estudiante->getEdad() << ","
                 << estudiante->getGrupo() << "\n";
        }
        file.close();
        cout << "Archivo " << filename << " exportado correctamente." << endl;
    } else {
        cout << "Error al abrir el archivo " << filename << "." << endl;
    }
}
