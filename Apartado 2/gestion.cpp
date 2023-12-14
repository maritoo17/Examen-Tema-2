#include <iostream>
#include <vector>

using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
    vector <string> materias;
};

void agregarMateria(Estudiante *estudiante, string materia) {
    estudiante->materias.push_back(materia);
}
