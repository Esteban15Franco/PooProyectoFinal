#include "Asistencia.h"
#include <iostream>
using namespace std;

void Asistencia::registrarAsistencia(int id, string fecha) {
    registro[id].push_back(fecha);
}

void Asistencia::mostrarAsistencia(int id) {
    auto it = registro.find(id);
    if (it != registro.end()) {
        cout << "Asistencias para ID " << id << ": ";
        for (auto& fecha : it->second) {
            cout << fecha << " ";
        }
        cout << endl;
    } else {
        cout << "No hay asistencias registradas para este ID." << endl;
    }
}
