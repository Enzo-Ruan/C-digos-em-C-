#include<stdio.h>

main(){

    int inferior = 1000 ;
    int superior = 2000;
    int chute;

    printf("Chute um numero:");
    scanf("%d",&chute);

    if ((chute >= inferior) && (chute <= superior)){

        printf("\n Voce acertou");
    } 
    else if (chute > superior){

        printf("Voce errou! O limite superior e menor");
    } 
    else{

        printf("Voce errou! O limite inferior e maior");
    }

    return 0;

}
