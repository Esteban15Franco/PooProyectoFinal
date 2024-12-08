#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"
#include <vector>

class Estudiante : public Persona {
private:
    int edad;
    string grupo;
    vector<string> historialAsistencia;

public:
    Estudiante(int id, string nombre, string telefono, int edad)
        : Persona(id, nombre, telefono), edad(edad) {
        asignarGrupo();
    }

    void asignarGrupo();
    void registrarAsistencia(const string& fecha);
    void mostrarHistorialAsistencia() const;
    void mostrarInfo() const override;
};

#endif // ESTUDIANTE_H

