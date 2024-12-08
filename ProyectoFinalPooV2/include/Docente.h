#ifndef DOCENTE_H
#define DOCENTE_H

#include "Persona.h"

class Docente : public Persona {
private:
    string area;

public:
    Docente(int id, string nombre, string telefono, string area)
        : Persona(id, nombre, telefono), area(area) {}

    void mostrarInfo() const override;
};

#endif // DOCENTE_H
