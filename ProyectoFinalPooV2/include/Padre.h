#ifndef PADRE_H
#define PADRE_H

#include "Persona.h"

class Padre : public Persona {
public:
    Padre(int id, string nombre, string telefono)
        : Persona(id, nombre, telefono) {}

    void mostrarInfo() override;
};

#endif // PADRE_H
