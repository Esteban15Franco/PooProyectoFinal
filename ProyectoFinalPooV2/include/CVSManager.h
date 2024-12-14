#ifndef CSVMANAGER_H
#define CSVMANAGER_H

#include <vector>
#include <string>
#include <fstream>
#include "Estudiante.h"
using namespace std;

class CSVManager {
public:
    static void exportarEstudiantes(const vector<Estudiante*>& estudiantes, const string& filename);
};

#endif // CSVMANAGER_H
