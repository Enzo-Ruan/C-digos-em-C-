#include<stdio.h>

#define MAX_CHARS_NOMES (80)
#define NUM_DE_ALUNOS (4)

int main() {

    char aluno [NUM_DE_ALUNOS][MAX_CHARS_NOMES];
    int matricula[NUM_DE_ALUNOS];
    int i = 0;


   for(i = 0; i < NUM_DE_ALUNOS; i++){

        printf("\n Cadastro do aluno");

        printf("\n Nome:");
        scanf(" %[^\n]", &aluno[i]);

        printf(" Matricula:");
        scanf(" %i", &matricula[i]);

        for(int d = 0; d <= i; d++){

            printf("\n Matricula: %i Aluno: %s \n", matricula[d], aluno[d]);

        }

    }

    printf("\n A turma esta cheia!");
}