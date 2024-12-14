#ifndef CSVMANAGER_H
#define CSVMANAGER_H

#include <vector>
#include <string>
#include <fstream>
#include "Estudiante.h"
using namespace std;

class CSVManager {
public:
    static void exportarEstudiantes(vector<Estudiante*> estudiantes, string filename);
};

#endif // CSVMANAGER_H
