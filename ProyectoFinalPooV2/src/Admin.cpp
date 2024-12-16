#include "Admin.h"
#include <iostream>
#include <map>
using namespace std;

Admin::Admin() {
    grupos = {
    {"Párvulos", Grupo("Párvulos")},
    {"Pre-jardín", Grupo("Pre-jardín")},
    {"Jardín", Grupo("Jardín")}
    };

}

void Admin::agregarEstudiante(int id, string nombre, string telefono, int edad) {
    // Crear un nuevo estudiante
    shared_ptr<Estudiante> estudiante = make_shared<Estudiante>(id, nombre, telefono, edad);

    // Obtener el grupo del estudiante
    estudiante->asignarGrupo();
    string grupo = estudiante->getGrupo();

    map<string, Grupo>::iterator pos = grupos.find(grupo);
    // Verificar si el grupo existe
    if (pos != grupos.end()) {

        // Agregar el estudiante al grupo
        pos->second.agregarEstudiante(estudiante);
        // Mover el estudiante a la lista de estudiantes
        estudiantes.push_back(move(estudiante));
    } else {
        cerr << "Error: El grupo '" << grupo << "' no existe.\n";
    }
}

void Admin::agregarDocente(int id, string nombre, string telefono, string especialidad) {
    docentes.push_back(make_unique<Docente>(id, nombre, telefono, especialidad));
}

void Admin::agregarPadre(int id, string nombre, string telefono) {
    padres.push_back(make_unique<Padre>(id, nombre, telefono));
}

void Admin::mostrarEstudiantes() {
    cout << "--- Listado de Estudiantes ---\n";
    for (auto& estudiante : estudiantes) {
        estudiante->mostrarInfo();
    }
}

void Admin::mostrarGrupo(string nombreGrupo) {
    auto it = grupos.find(nombreGrupo);
    if (it != grupos.end()) {
        cout << "Estudiantes en el grupo " << nombreGrupo << ":\n";
        it->second.mostrarEstudiantes();
    } else {
        cout << "Grupo '" << nombreGrupo << "' no encontrado.\n";
    }
}

// Implementar el método para registrar asistencia
void Admin::registrarAsistencia(int id, string fecha) {
    asistencia.registrarAsistencia(id, fecha);
}

// Implementar el método para mostrar historial de asistencia
void Admin::mostrarHistorialAsistencia(int id) {
    asistencia.mostrarAsistencia(id);
}

// Implementar el método para exportar datos a CSV
void Admin::exportarDatosCSV() {
   CSVManager::exportarEstudiantes(estudiantes, "Estudiantes.csv");
}

void Admin::exportarDatosCSV2() {
    CSVManager::exportarDocentes(docentes, "Docentes.csv");
}

void Admin::exportarDatosCSV3() {
    CSVManager::exportarPadres(padres, "Padres.csv");
}
