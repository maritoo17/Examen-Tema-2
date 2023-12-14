#include <iostream>

using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

void mostrarEstudiante(Estudiante estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}

int main() {
    Estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    mostrarEstudiante(estudiante1);

    return 0;
}