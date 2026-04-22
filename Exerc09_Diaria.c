#include <stdio.h>
//Calcula o salário líquido de um trabalhador que recebe R$ 150,00 por dia, aplicando um desconto de 8% de Imposto de Renda, com validação de entrada para garantir que o número de dias seja positivo.

int main()
{ 
    const float diaria=150.00;
    float iR,total;
    int dia;
    
    printf("Digite a quantidade de dias trabalhados: ");
        scanf("%d",&dia);
    while (dia <=0){
            printf("Valor invalido");
            printf("Digite a quantidade de dias trabalhados: ");
        scanf("%d",&dia);
    }    
    total=dia*diaria;
    iR=total*0.08;
    
    printf("Total: R$%.2f\n Imposto de renda: R$ -%.2f\n Valor à receber: R$%.2f\n",total,iR,(total-iR));
    
    return 0;
}
