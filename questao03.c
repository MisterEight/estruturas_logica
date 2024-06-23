#include <stdio.h>
//top

int main() {
    struct horario{
        int horas;
        int minutos;
        int segundos;
    };

    struct horario horario;

    horario.horas = 22;
    horario.minutos = 37;
    horario.segundos = 10;

    printf("O horário que fiz esse algoritmo é: '%d:%d:%d'", horario.horas, horario.minutos, horario.segundos);

}