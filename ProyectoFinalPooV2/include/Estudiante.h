#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"

class Estudiante : public Persona {
private:
    int edad;
    string grupo;

public:
    Estudiante(int id, string nombre, string telefono, int edad)
        : Persona(id, nombre, telefono), edad(edad) {
        asignarGrupo();
    }

    void asignarGrupo();
    string getGrupo() { return grupo; }
    int getEdad() { return edad; }

    void mostrarInfo();
};

#endif // ESTUDIANTE_H
