#include <stdio.h>

int main() {
    void testeVariavel(int x);
    void testePonteiro(int *pX);
    int teste = 1;
    int *pTeste = &teste;

    //testeVariavel(teste);
    testePonteiro(pTeste);

    printf("%i \n",teste);

    return 0;
}

void testeVariavel (int x){ //c贸pia da variavel teste l谩 em cima
    ++x;
}

void testePonteiro(int *pX){
    ++*pX;
}
