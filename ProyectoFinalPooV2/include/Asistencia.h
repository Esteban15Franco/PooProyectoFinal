#ifndef ASISTENCIA_H
#define ASISTENCIA_H

#include <map>
#include <string>
#include <vector>
using namespace std;

class Asistencia {
private:
    map<int, vector<string>> registro;

public:
    void registrarAsistencia(int id, string fecha);
    void mostrarAsistencia(int id);
};

#endif // ASISTENCIA_H
