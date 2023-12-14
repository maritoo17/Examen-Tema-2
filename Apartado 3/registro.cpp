#include <iostream>
#include <vector>

using namespace std;

enum EstadoAsistencia {ASISTIO, FALTA, RETRASO};

struct Asistencia{
    string fecha;
    string materia;
    EstadoAsistencia estado;
};

struct Estudiante{
    string nombre;
    int edad;
    float promedio;
    vector<Asistencia> asistencias;
};

void registrarAsistencia(Estudiante& estudiante, const string& fecha, const string& materia, EstadoAsistencia estado) {
    Asistencia nuevaAsistencia;
    nuevaAsistencia.fecha = fecha;
    nuevaAsistencia.materia = materia;
    nuevaAsistencia.estado = estado;
    estudiante.asistencias.push_back(nuevaAsistencia);
}

void mostrarAsistencias(const Estudiante& estudiante) {
    cout << "Asistencias de " << estudiante.nombre << ":" << endl;
    for (const auto& asistencia : estudiante.asistencias) {
        cout << "Fecha: " << asistencia.fecha << ", Materia: " << asistencia.materia << ", Estado: ";
        switch (asistencia.estado) {
            case ASISTIO:
                cout << "Asistió";
                break;
            case FALTA:
                cout << "Falta";
                break;
            case RETRASO    :
                cout << "Tardanza";
                break;
        }
        cout << endl;
    }
}

int main() {
    Estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    registrarAsistencia(estudiante1, "2023-12-14", "Matemáticas", ASISTIO);
    registrarAsistencia(estudiante1, "2023-12-15", "Física", FALTA);
    registrarAsistencia(estudiante1, "2023-12-16", "Química", RETRASO);

    mostrarAsistencias(estudiante1);

    return 0;
}