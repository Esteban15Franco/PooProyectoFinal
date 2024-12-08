#ifndef ADMIN_H
#define ADMIN_H

#include "Estudiante.h"
#include "Docente.h"
#include "Padre.h"
#include "Grupo.h"
#include <vector>
#include <map>

class Admin {
private:
    vector<Estudiante*> estudiantes;
    vector<Docente*> docentes;
    vector<Padre*> padres;
    map<string, Grupo> grupos;

public:
    Admin();
    void agregarEstudiante(int id, string nombre, string telefono, int edad);
    void agregarDocente(int id, string nombre, string telefono, string area);
    void agregarPadre(int id, string nombre, string telefono);
    void mostrarEstudiantes();
    void registrarAsistencia(int id, const string& fecha);
    void mostrarHistorialAsistencia(int id);
};

#endif // ADMIN_H
