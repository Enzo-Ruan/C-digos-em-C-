#include<stdio.h>

main(){

    int alvo = 1234;
    int chute;

    printf("Chute um numero:");
    scanf("%d", &chute);

    if (chute == alvo){

        printf("\n Voce acertou");
    } 
    else if (chute > alvo){

        printf("Voce errou! O numero certo e menor");
    } 
    else{

        printf("Voce errou! O numero certo e maior");
    }

    return 0;

}

//Operadores lógicos relacionais

// && - o resultado é verdadeiro se ambas as condições forem verdadeiras
// || - o resultado é verdadeiro se alguma condição for verdadeira
// ! - o resultaado se a condição for falsa, e vice versa.