
//Calcula a quantidade de cobre e zinco necessária para produzir uma determinada massa de latão, respeitando a proporção de 7 partes de cobre para 3 partes de zinco.

#include <stdio.h>

int main()
{ 
    
    float cobre,zinco,peso;    
    
    printf("Digite o peso em gramas:");
        scanf("%f",&peso);
    
    cobre=(peso/10)*7;
    zinco=(peso/10)*3;
    
    printf("quantidade de cobre %.2f e zinco %.2f ", cobre,zinco);
    return 0;
}
