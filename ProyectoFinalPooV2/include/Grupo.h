#ifndef GRUPO_H
#define GRUPO_H

#include "Estudiante.h"
#include <map>

class Grupo {
private:
    map<int, Estudiante*> estudiantes;

public:
    void agregarEstudiante(Estudiante* estudiante);
    void mostrarEstudiantes() const;
    void mostrarHistorialAsistencia(int id) const;
};

#endif // GRUPO_H
