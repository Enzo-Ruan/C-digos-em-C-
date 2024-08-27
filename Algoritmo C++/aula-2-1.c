#include<stdio.h>

main(){

int num1,num2,resto;
int tentativas;

    for (tentativas = 0; resto != 0; tentativas++){

        printf("Digite um numero:\n");
        scanf("%d", &num1);

        printf("Insira outo numero:\n");
        scanf("%d", &num2);

        resto = num1%num2;
    }
 return 0;
}