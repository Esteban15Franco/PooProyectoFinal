#ifndef GRUPO_H
#define GRUPO_H

#include "Estudiante.h"
#include <vector>
#include <memory>
#include <string>
using namespace std;

class Grupo {
private:
    string nombre;
    vector<shared_ptr<Estudiante>> estudiantes;
    static const int MAX_ESTUDIANTES = 100;
    int contadorEstudiantes = 0;

public:
    Grupo(string nombre) : nombre(nombre) {}

    bool agregarEstudiante(shared_ptr<Estudiante>& estudiante);

    void mostrarEstudiantes();

    string getNombre() { return nombre; }
};

#endif // GRUPO_H
