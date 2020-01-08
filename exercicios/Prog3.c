#include <stdio.h>

int main () {
int consumo;
int valor_sem_iva;
int valor_a_pagar;
int const IVA = 18;
int const potencia = 5.42;
int const preco = 0.16;

printf("Qual foi o consumo?\n");
scanf("%d",&consumo);

valor_sem_iva = potencia + consumo * preco;
valor_a_pagar = (valor_sem_iva * IVA) + valor_sem_iva;

printf("valor a pagar é: %d \n", valor_a_pagar);
}