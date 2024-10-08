#include <stdio.h>
#include <stdbool.h>

#define TAMANHO_MAXIMO (10)

int main() {
    char nome[TAMANHO_MAXIMO];
    int pos = 0;
    bool valido = false;

    do {
        printf("\n Insira seu nome: ");
        scanf("%s", nome);

        if ((nome[0] >= 'A') && (nome[0] <= 'Z')) 
        {
            valido = true;
            for (pos = 1; (pos < TAMANHO_MAXIMO) ; pos++) {
                if (nome[pos] == '\0') {
                    break;
                }

                if ((nome[pos] < 'a') || (nome[pos] > 'z')) {
                    valido = false;
                    break;
                }
            }
        }

        if (!valido) 
        {
            printf("\n Nome nao e valido");
        }

    } while(!valido); 
    
    printf("\n Nome validado");
}