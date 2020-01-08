#include <stdio.h>

int main() {
int salario;
int alimentacao;
int descontos;
int liquido;



printf("Introduzir salario: \n");
scanf("%d", &salario);
printf("Introduzir Subsidio de alimentaÇão: \n");
scanf("%d", &alimentacao);
printf("Introduzir descontos:\n");
scanf("%d", &descontos);

liquido = ((salario + alimentacao) - descontos);

printf("O seu saldo liquido é: %d \n", liquido);


}