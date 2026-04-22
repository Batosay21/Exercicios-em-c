#include <stdio.h>

// Este programa calcula a quantidade de combustível (em litros) que pode ser colocado no 
//tanque de um veículo com base no valor pago pelo usuário e no preço por litro do 
//combustível.

int main()
{
    float valorPago,precoLitro,quantLitro;
    printf("Digite o valor pago: ");
    scanf("%f",&valorPago);
    printf("Digite o preço d o litro: ");
    scanf("%f",&precoLitro);
  while(precoLitro == 0){
   printf("Digite um valor diferente de zero: ");
      scanf("%f",&precoLitro);
  }
    quantLitro=valorPago/precoLitro;
    printf("Quantidade colocada no tanque: %05.2f",quantLitro);


    return 0;
}