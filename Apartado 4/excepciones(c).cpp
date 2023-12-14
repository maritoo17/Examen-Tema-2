#include <stdio.h>
#include <string.h>

#define MAX_ASISTENCIAS 10

struct ExcepcionRegistro {
    const char* mensaje;
};

void registrarAsistencia(int asistenciasRegistradas) {
    if (asistenciasRegistradas >= MAX_ASISTENCIAS) {
        struct ExcepcionRegistro error = {"No se pueden registrar más asistencias para este estudiante."};
        longjmp(buffer, (int)&error);
    }
    printf("Asistencia registrada exitosamente.\n");
}

int main() {
    jmp_buf buffer;
    int retorno;

    if ((retorno = setjmp(buffer)) != 0) {
        struct ExcepcionRegistro *error = (struct ExcepcionRegistro *)retorno;
        printf("Excepción atrapada: %s\n", error->mensaje);
    } else {
        int asistenciasRegistradas = MAX_ASISTENCIAS;
        registrarAsistencia(asistenciasRegistradas);
    }

    return 0;
}