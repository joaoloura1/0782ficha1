#include <stdio.h>

int main(void) {
    int receitas;
    int despesas;
    int saldo;

printf("Valor do total de receitas\n");
scanf("%d", &receitas); 
printf("Valor das despesas\n");
scanf("%d", &despesas);

saldo = receitas - despesas; 

printf("O seu saldo é: %d\n", saldo);

}