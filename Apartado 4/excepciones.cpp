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