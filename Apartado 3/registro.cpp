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

