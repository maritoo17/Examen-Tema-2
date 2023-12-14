#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[30];
    int edad;
    float promedio;
};

void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}

int main() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre,"Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    mostrarEstudiante (estudiante1);

    return 0;
}
