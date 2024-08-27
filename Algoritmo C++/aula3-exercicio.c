#include<stdio.h>

int main(){

    int lado1;
    int lado2;
    int lado3;

    printf("Digite o numero do lado 1:");
    scanf("%i", &lado1);

    printf("Digite o numero do lado 2:");
    scanf("%i", &lado2);

    printf("Digite o numero do lado 3:");
    scanf("%i", &lado3);

    if ((lado1 == lado2) && (lado2 == lado3))
    {
        printf("E um triangulo equilatero\n");
    }
    else if ((lado1 != lado2) && (lado2 != lado3) && (lado3 != lado1))
    { 
        printf("E um triangulo escaleno\n");
    }
    else {

        printf("E um triangulo isosceles");
    }

    
}