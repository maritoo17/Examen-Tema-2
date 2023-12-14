#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[30];
    int edad;
    float promedio;
    char materia[30];
};

void agregarMateria(struct Estudiante *estudiante, const char *materia) {
    strcpy(estudiante->materia, materia);
}