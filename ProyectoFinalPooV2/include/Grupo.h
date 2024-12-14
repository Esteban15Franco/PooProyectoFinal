#ifndef GRUPO_H
#define GRUPO_H

#include "Estudiante.h"
#include <vector>
#include <string>
using namespace std;

class Grupo {
private:
    string nombre;
    vector<Estudiante*> estudiantes;
    static const int MAX_ESTUDIANTES = 100;
    int contadorEstudiantes = 0;

public:
    Grupo(string nombre) : nombre(nombre) {}

    bool agregarEstudiante(Estudiante* estudiante) {
        if (contadorEstudiantes < MAX_ESTUDIANTES) {
            estudiantes.push_back(estudiante);
            contadorEstudiantes++;
            return true;
        }
        return false;
    }

    void mostrarEstudiantes();

    string getNombre() { return nombre; }
};

#endif // GRUPO_H
