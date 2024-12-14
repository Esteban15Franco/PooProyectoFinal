#include <iostream>
#include <vector>
#include "Admin.h"

using namespace std;

void mostrarMenu() {
    cout << "\n--- Menú Principal ---\n";
    cout << "1. Agregar estudiante\n";
    cout << "2. Agregar docente\n";
    cout << "3. Agregar padre\n";
    cout << "4. Mostrar todos los estudiantes\n";
    cout << "5. Mostrar estudiantes por grupo\n";
    cout << "6. Registrar asistencia\n";
    cout << "7. Mostrar historial de asistencia\n";
    cout << "8. Exportar datos a CSV\n";
    cout << "9. Salir\n";
    cout << "Seleccione una opción: ";
}

int main() {
    Admin admin;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore(); // Para limpiar el buffer

        switch (opcion) {
        case 1: {
            int id, edad;
            string nombre, telefono;
            cout << "Ingrese ID del estudiante: ";
            cin >> id;
            cin.ignore();
            cout << "Ingrese nombre del estudiante: ";
            getline(cin, nombre);
            cout << "Ingrese teléfono del estudiante: ";
            getline(cin, telefono);
            cout << "Ingrese edad del estudiante: ";
            cin >> edad;
            admin.agregarEstudiante(id, nombre, telefono, edad);
            cout << "Estudiante agregado correctamente.\n";
            break;
        }
        case 2: {
            int id;
            string nombre, telefono, especialidad;
            cout << "Ingrese ID del docente: ";
            cin >> id;
            cin.ignore();
            cout << "Ingrese nombre del docente: ";
            getline(cin, nombre);
            cout << "Ingrese teléfono del docente: ";
            getline(cin, telefono);
            cout << "Ingrese especialidad del docente: ";
            getline(cin, especialidad);
            admin.agregarDocente(id, nombre, telefono, especialidad);
            cout << "Docente agregado correctamente.\n";
            break;
        }
        case 3: {
            int id;
            string nombre, telefono;
            cout << "Ingrese ID del padre: ";
            cin >> id;
            cin.ignore();
            cout << "Ingrese nombre del padre: ";
            getline(cin, nombre);
            cout << "Ingrese teléfono del padre: ";
            getline(cin, telefono);
            admin.agregarPadre(id, nombre, telefono);
            cout << "Padre agregado correctamente.\n";
            break;
        }
        case 4: {
            cout << "--- Listado de Estudiantes ---\n";
            admin.mostrarEstudiantes();
            break;
        }
        case 5: {
            cout << "--- Listado por Grupo ---\n";
            vector<string> grupos = {"Párvulos", "Pre-jardín", "Jardín"};
            for (const string& grupo : grupos) {
                cout << "\nGrupo: " << grupo << endl;
                admin.mostrarGrupo(grupo);
            }
            break;
        }
        case 6: {
            int id;
            string fecha;
            cout << "Ingrese ID del estudiante: ";
            cin >> id;
            cin.ignore();
            cout << "Ingrese fecha de asistencia (YYYY-MM-DD): ";
            getline(cin, fecha);
            admin.registrarAsistencia(id, fecha);
            cout << "Asistencia registrada correctamente.\n";
            break;
        }
        case 7: {
            int id;
            cout << "Ingrese ID del estudiante: ";
            cin >> id;
            admin.mostrarHistorialAsistencia(id);
            break;
        }
        case 8: {
            admin.exportarDatosCSV();
            break;
        }
        case 9:
            cout << "Saliendo del sistema...\n";
            break;
        default:
            cout << "Opción no válida. Intente nuevamente.\n";
        }
    } while (opcion != 9);

    return 0;
}
