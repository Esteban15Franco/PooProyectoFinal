#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
using namespace std;

class Persona {
protected:
    int id;
    string nombre;
    string telefono;

public:
    Persona(int id, string nombre, string telefono)
        : id(id), nombre(nombre), telefono(telefono) {}

    virtual void mostrarInfo() const = 0;

    int getId() const { return id; }
    string getNombre() const { return nombre; }
    string getTelefono() const { return telefono; }
};

#endif // PERSONA_H

