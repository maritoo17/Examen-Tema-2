#include <stdio.h>
#include <string.h>

typedef enum { ASISTIO, FALTA, RETRASO } EstadoAsistencia;

struct Asistencia {
    char fecha[30];
    char materia[30];
    EstadoAsistencia estado;
};

struct Estudiante {
    char nombre[30];
    int edad;
    float promedio;
    struct Asistencia asistencias[100];
    int cantidadAsistencias;
};