#include <stdio.h>

int main() {
    char stringUm[20], stringDois[20];
    _Bool stringsIguais(char s1[], char s2[]);

    printf("Insira duas Strings:\n");
    scanf("%s%s\n",&stringUm, &stringDois);

    if(stringsIguais(stringUm, stringDois)){
        printf("Sao iguais.\n");
    }else{
        printf("Nao sao iguais.\n");
    }

    return 0;
}

_Bool stringsIguais(char s1[], char s2[]){

    int i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
        i++;
    }

    if(s1[i] == '\0' && s2[i] == '\0'){
        return 1;
    }else{
        return 0;
    }

}

