#include "Admin.h"
#include <iostream>
using namespace std;

int main() {
    Admin admin;
    int opcion;

    do {
        cout << "Menú de Administración\n";
        cout << "1. Agregar Estudiante\n";
        cout << "2. Registrar Asistencia\n";
        cout << "3. Mostrar Estudiantes\n";
        cout << "4. Mostrar Historial de Asistencia\n";
        cout << "5. Exportar a CSV\n";
        cout << "6. Salir\n";
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Llamar a la función para agregar estudiantes
                break;
            case 2:
                // Llamar a la función para registrar asistencia
                break;
            case 3:
                admin.mostrarEstudiantes();
                break;
            case 4:
                // Llamar a la función para mostrar historial de asistencia
                break;
            case 5:
                // Exportar a CSV
                break;
            case 6:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
        }
    } while (opcion != 6);

    return 0;
}
