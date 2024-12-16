#ifndef ADMIN_H
#define ADMIN_H

#include "Estudiante.h"
#include "Docente.h"
#include "Padre.h"
#include "Grupo.h"
#include "Asistencia.h"
#include "CSVManager.h"
#include <map>
#include <memory>
#include <vector>
#include <iostream>

using namespace std;

class Admin {
private:
    vector<shared_ptr<Estudiante>> estudiantes;
    vector<shared_ptr<Docente>> docentes;
    vector<shared_ptr<Padre>> padres;
    map<string, Grupo> grupos;
    Asistencia asistencia;

public:
    Admin();

    void agregarEstudiante(int id, string nombre, string telefono, int edad);
    void agregarDocente(int id, string nombre, string telefono, string especialidad);
    void agregarPadre(int id, string nombre, string telefono);

    void mostrarEstudiantes();
    void registrarAsistencia(int id, string fecha);
    void mostrarHistorialAsistencia(int id);
    void mostrarGrupo(string nombreGrupo);

    void exportarDatosCSV();
    void exportarDatosCSV2();
    void exportarDatosCSV3();

};

#endif // ADMIN_H
