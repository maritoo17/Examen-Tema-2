#include <iostream>
#include <exception>

using namespace std;

struct ExcepcionAsistencia : public exception {
    const char* what() const throw() override {
        return "Error: Problema con la asistencia.";
    }
};
