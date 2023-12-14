#include <iostream>
#include <exception>

using namespace std;

struct ExcepcionAsistencia : public exception {
    const char* what() const throw() override {
        return "Error: Problema con la asistencia.";
    }
};

struct ExcepcionRegistro : public exception {
private:
    string mensaje;

public:
    ExcepcionRegistro(const string& msg) : mensaje(msg) {}

    const char* what() const throw() override {
        return mensaje.c_str();
    }
};

void registrarAsistencia(int asistenciasRegistradas) {
    if (asistenciasRegistradas >= 3) {
        throw ExcepcionRegistro("No se pueden registrar más asistencias para este estudiante.");
    }
    cout << "Asistencia registrada exitosamente." << endl;
}

int main() {
    try {
        int asistenciasRegistradas = 3;
        registrarAsistencia(asistenciasRegistradas);
    } catch (ExcepcionRegistro& e) {
        cout << "Excepción atrapada: " << e.what() << endl;
    } catch (exception& e) {
        cout << "Otra excepción atrapada: " << e.what() << endl;
    }

    return 0;
}