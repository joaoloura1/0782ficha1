#include <stdio.h>

int main() {
    char nome [300];
    int nota1;
    int nota2;
    int nota3;
    int media;

    printf("Nome do aluno:\n");
    scanf("%s", nome);
    printf("Nota do primeiro teste: \n");
    scanf("%d", &nota1);
    printf("Nota do segundo teste: \n");
    scanf("%d", &nota2);
    printf("Nota do terceiro teste: \n");
    scanf("%d", &nota3);

    media = ((nota1 * 0.25) + (nota2 * 0.35) + (nota3 * 0.40));

    printf("Média é: %d\n", media);
    }