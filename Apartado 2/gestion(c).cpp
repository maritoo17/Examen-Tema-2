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

void eliminarMateria(struct Estudiante *estudiante) {
    strcpy(estudiante->materia, "");
}

void mostrarMateria(struct Estudiante estudiante) {
    printf("Materias: %s\n", estudiante.materia);
}

void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
    mostrarMateria(estudiante);
}