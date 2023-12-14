#include <iostream>
#include <vector>

using namespace std;

enum EstadoAsistencia {ASISTIO, FALTA, RETRASO};

struct Asistencia{
    string fecha;
    string materia;
    EstadoAsistencia estado;
};

