#include <stdio.h>
struct horario
{
    int horas;
    int minutos;
    int segundos;
    float teste;
    char letra;
};

int main() {

    struct horario teste(struct horario x); //função retornando uma estrutura

    struct horario2{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario2 teste2[5]; //vetor que contém cinco structs

    teste2[0].hora = 10;
    teste2[0].minuto = 20;
    teste2[0].segundo = 30;

    printf("%i : %i : %i\n",teste2[0].hora,teste2[0].minuto, teste2[0].segundo);

    struct horario agora;
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    struct horario proxima;
    proxima = teste(agora);

    printf("%i : %i : %i\n",proxima.horas,proxima.minutos,proxima.segundos);

    //printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);
/**
    struct horario depois;
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 50.55 / 123;
    depois.letra = 'a';

    printf("%i\n", depois.horas);
    printf("%i\n", depois.minutos);
    printf("%f\n", depois.teste);
    printf("%c\n", depois.letra);
**/
    return 0;
}

struct horario teste(struct horario x){

    printf("%i : %i : %i\n",x.horas,x.minutos,x.segundos);
    x.horas = 100;
    x.minutos = 100;
    x.segundos = 100;

    return x;
}
