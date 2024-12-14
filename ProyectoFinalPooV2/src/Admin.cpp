#include "Admin.h"
#include <iostream>
using namespace std;

Admin::Admin() {
    grupos["Párvulos"] = Grupo("Párvulos");
    grupos["Pre-jardín"] = Grupo("Pre-jardín");
    grupos["Jardín"] = Grupo("Jardín");
}

void Admin::agregarEstudiante(int id, string nombre, string telefono, int edad) {
    // Crear un nuevo estudiante
    unique_ptr<Estudiante> estudiante = make_unique<Estudiante>(id, nombre, telefono, edad);

    // Obtener el grupo del estudiante
    string grupo = estudiante->getGrupo();

    // Verificar si el grupo existe
    if (grupos.find(grupo) != grupos.end()) {
        // Agregar el estudiante al grupo
        grupos[grupo].agregarEstudiante(estudiante.get());
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
    CSVManager::exportarEstudiantes(estudiantes, "estudiantes.csv");
}
