#include "CSVManager.h"
#include <fstream>
#include <iostream>
using namespace std;

void CSVManager::exportarEstudiantes(vector<std::shared_ptr<Estudiante>> estudiantes, string filename) {
    ofstream file(filename);
    if (file.is_open()) {
        file << "ID | Nombre | Teléfono | Edad | Grupo\n";
        for (auto& estudiante : estudiantes) {
            file << estudiante->getId() << "," << estudiante->getNombre() << ","
                 << estudiante->getTelefono() << "," << estudiante->getEdad() << ","
                 << estudiante->getGrupo() << "\n";
        }
        file.close();
        cout << "Archivo " << filename << " exportado correctamente." << endl;
    } else {
        cout << "Error al abrir el archivo " << filename << "." << endl;
    }
}

void CSVManager::exportarDocentes(vector<std::shared_ptr<Docente>> Docentes, string filename){
    ofstream file(filename);
    if (file.is_open()){
        file <<"ID | Nombre | Telefono | Especialidad\n";
        for (auto& Docente : Docentes){
            file <<Docente->getId()<<" | "<<Docente->getNombre()<<" | "
            <<Docente->getTelefono()<<" | "<<Docente->getEspecialidad()<<"\n";
        }
        file.close();
        cout<<"Archivo "<<filename<< " exportado correctamente."<<endl;
    }else {
        cout <<"Error al abrir el archivo "<<filename<<"."<<endl;
    }
}

void CSVManager::exportarPadres(vector<std::shared_ptr<Padre>> Padres, string filename) {
    ofstream file(filename);
    if (file.is_open()){
        file<<"ID | Nombre | Telefono\n";
        for (auto& Padre : Padres) {
            file <<Padre->getId()<<" | "<<Padre->getNombre()<<" | "<<Padre->getTelefono()<<"\n";
        }
        file.close();
        cout<<"Archivo "<<filename<<" exportado correctamente."<<endl;
    }else {
        cout<<"Error al abrir el archivo "<<filename<<"."<<endl;
    }
}
