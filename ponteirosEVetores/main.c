#include <stdio.h>

int main() {
    int vetor [3] = {1, 2, 3};
    int *ponteiro = vetor; //aponta pra primeira posicao do vetor

    ++ponteiro; //aponta para o proximo membro do vetor

    *(ponteiro + 1) = 10; //acessando a pr贸xima prosicao e alterando o valor dele para 10

    printf("%i", *(ponteiro + 1));
    return 0;
}
