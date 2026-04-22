#include <stdio.h>
//Este programa calcula a quantidade aproximada de dias transcorridos desde o início do ano, com base no dia e mês fornecidos pelo usuário.


int main()
{
    int dia,mes,totalDias;
     printf("Somente numeros !!!");
    printf("Digite dia:");
        scanf("%d",&dia);
    
    printf("Digite o mes: ");
        scanf("%d",&mes);
   
   totalDias=dia+(mes*30);
   printf("Quantidade de dias desde o inicio do ano: %d",totalDias);

    return 0;
}