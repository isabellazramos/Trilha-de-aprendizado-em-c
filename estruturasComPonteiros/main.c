#include <stdio.h>

int main() {

    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    depois = &agora; // alterando o valor da estrutura 'agora'

    depois->hora = 20; // (*depois).hora = 20;
    depois->minuto = 80; // (*depois).minuto = 20;
    depois->segundo = 50; // (*depois).segundo = 20;

    int somatorio = 100;

    struct horario antes;

    antes.hora = somatorio + depois->segundo;
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo = depois->minuto + depois->segundo;

    printf("Horario agora = %i : %i : %i\n",agora.hora,agora.minuto,agora.segundo);
    printf("Horario antes = %i : %i : %i\n",antes.hora,antes.minuto,antes.segundo);

    return 0;
}
