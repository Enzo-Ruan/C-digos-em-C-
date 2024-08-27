#include<stdio.h>

main(){

    char nome[124];
    int i = 0;
    int erradas = 0;

    printf("Insira um nome:");
    scanf("%s", nome);

    for (i=0; i < 124; i++) {

        printf("nome[%d] = %c \n", i, nome[i]);

    }

    printf("Quantidade de erradas: %d \n", erradas);

    return 0;
}