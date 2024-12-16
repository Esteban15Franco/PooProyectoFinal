#ifndef CSVMANAGER_H
#define CSVMANAGER_H

#include <vector>
#include <string>
#include <fstream>
#include <memory>
#include "Estudiante.h"
#include "Docente.h"
#include "Padre.h"

using namespace std;

class CSVManager {
public:
    static void exportarEstudiantes(vector<std::shared_ptr<Estudiante>> estudiantes, string filename);

    static void exportarDocentes(vector<std::shared_ptr<Docente>> Docentes, string filename);

    static void exportarPadres(vector<std::shared_ptr<Padre>> Padres, string filename);
};

#endif // CSVMANAGER_H
