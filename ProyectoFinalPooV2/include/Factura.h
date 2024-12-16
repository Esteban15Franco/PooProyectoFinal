#ifndef FACTURA_H
#define FACTURA_H

#include "Estudiante.h"
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Factura {
public:

    string fecha;
    string grupo;
    double tarifa;

    void asignarGrupo(vector<shared_ptr<Estudiante>> estudiantes);

    void calcularTarifa();

    void mostrarFactura();
};

#endif // FACTURA_H
