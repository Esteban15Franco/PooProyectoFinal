#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {
protected:
    int id;
    string nombre;
    string telefono;

public:
    Persona(int id, string nombre, string telefono)
        : id(id), nombre(nombre), telefono(telefono) {}

    virtual void mostrarInfo() = 0; // Hacemos que no sea const
    int getId() { return id; }
    string getNombre() { return nombre; }
    string getTelefono() { return telefono; }
};

#endif // PERSONA_H
