#ifndef DOCENTE_H
#define DOCENTE_H

#include "Persona.h"

class Docente : public Persona {
private:
    string especialidad;

public:
    Docente(int id, string nombre, string telefono, string especialidad) // Sin const ni &
        : Persona(id, nombre, telefono), especialidad(especialidad) {}

    string getEspecialidad() { return especialidad; } // Sin const

    void mostrarInfo(); // Sin const
};

#endif // DOCENTE_H
