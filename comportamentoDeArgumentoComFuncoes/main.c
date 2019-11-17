#include <stdio.h>

int main() {
    void funcaoPrint(int x, int vetor[]);
    int x = 10;
    int vetor[3] = {10};

    funcaoPrint(x, vetor);

    printf("Variavel int na funcao principal = %i \n", x);
    printf("Vetor na funcao principal = %i \n", vetor[1]);
    return 0;
}

void funcaoPrint(int x, int vetor[]){ //x é uma cópia da variavel passada, por isso o valor dela é diferente do x da função principal, diferente do que acontece com o vetor
     x = x + 10;
     vetor[1] = 20;

     printf("Variavel int na funcao print = %i \n", x);
     printf("Vetor na funcao print = %i \n\n", vetor[1]);
}
