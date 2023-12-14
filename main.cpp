#include <iostream>

using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

mostrarEstudiante(Estudiante estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}
