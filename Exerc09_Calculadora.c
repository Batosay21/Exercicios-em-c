#include <stdio.h>

int main (){
    float n1,n2,soma,subtracao,multiplicacao,divisao;
    printf("Digite o primeiro numero: ");
    scanf("%f",&n1);
    printf("Digite o segundo numero: ");    
    scanf("%f",&n2);
    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    if (n2 != 0) {
        divisao = n1 / n2;
    } else {
        printf("Divisão por zero não é permitida.\n");
    }
    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subtracao);
    printf("Multiplicação: %.2f\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);
    return 0;

}