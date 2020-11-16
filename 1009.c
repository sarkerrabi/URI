#include <stdio.h>
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double porcentagem = 0.15;
    char nome[20];
    double salario, vendas, salarioComBonus;
    gets(nome);
    scanf("%lf",&salario);
    scanf("%lf",&vendas);
    salarioComBonus = (vendas * porcentagem) + salario;
    printf("TOTAL = R$ %.2lf\n",salarioComBonus);
    return 0;
}