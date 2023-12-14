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

void eliminarMateria(Estudiante& estudiante, const string& materia) {
    estudiante.materias.erase(remove(estudiante.materias.begin(), estudiante.materias.end(), materia), estudiante.materias.end());
}

void mostrarMaterias(const Estudiante& estudiante) {
    cout << "Materias inscritas por " << estudiante.nombre << " tras la eliminación de materias:" << endl;
    for (const auto& materia : estudiante.materias) {
        cout << "- " << materia << endl;
    }
}

void mostrarEstudiante(const Estudiante& estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}

