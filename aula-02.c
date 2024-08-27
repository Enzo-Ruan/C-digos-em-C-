#include<stdio.h>

//% calcula o resto da divisao
//++ increnmenta um i = i + 1 ou i++

main(){

    int num1,num2;
    int resultado_racional;

    printf("Digite um numero:\n");
    scanf("%d", &num1);

    printf("Insira outo numero:\n");
    scanf("%d", &num2);

    if ((num1%num2) == 0) {

        printf("\n %d e %d sao multiplos", num1,num2);
    } else{
        printf("\n %d e %d nao sao multiplos", num1, num2);
    }

    printf("Fim\n");

    return 0;
}
