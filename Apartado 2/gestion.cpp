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
    cout << "Materias inscritas por " << estudiante.nombre << ":" << endl;
    for (const auto& materia : estudiante.materias) {
        cout << "- " << materia << endl;
    }
}

void mostrarEstudiante(const Estudiante& estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}

int main() {
    Estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    agregarMateria(&estudiante1, "Matemáticas");
    agregarMateria(&estudiante1, "Física");
    agregarMateria(&estudiante1, "Química");

    mostrarEstudiante(estudiante1);

    mostrarMaterias(estudiante1);

    eliminarMateria(estudiante1, "Física");

    mostrarMaterias(estudiante1);


    return 0;
}