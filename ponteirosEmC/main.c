#include <stdio.h>

int main() {
    // introdução

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX; //int *pX = &x;
    pX = &x;
    double *pY = &y;
    char *pZ = &z;

    double soma = *pX + *pY ;

    //px = endereço | *px = valor
    printf("Valor da soma de x e y %f\n",soma);
    printf("Endereço x = %d - Valor x = %d\n",pX,*pX);
    printf("Endereço y = %d - Valor y = %lf\n",pY,*pY);
    printf("Endereço z = %d - Valor z = %c\n",pZ,*pZ);

    //se eu colocar sem asterisco, acesso o endereço de memória
    //com asterico acesso o valor da memória

    return 0;
}
