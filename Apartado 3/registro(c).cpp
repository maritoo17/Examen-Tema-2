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

void registrarAsistencia(struct Estudiante *estudiante, const char *fecha, const char *materia, EstadoAsistencia estado) {
    struct Asistencia nuevaAsistencia;
    strcpy(nuevaAsistencia.fecha, fecha);
    strcpy(nuevaAsistencia.materia, materia);
    nuevaAsistencia.estado = estado;
    estudiante->asistencias[estudiante->cantidadAsistencias] = nuevaAsistencia;
    estudiante->cantidadAsistencias++;
}