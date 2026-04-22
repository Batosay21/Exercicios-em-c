#include <stdio.h>

//Calcula o volume total em litros de refrigerantes comprados por um comerciante, considerando três formatos diferentes de embalagens com capacidades distintas.

int main()
{ 
    float totalLitro;
    int lata,refriPeq,refriMed,totalMl;    
    
    printf("Digite a quantidade de latas 355ml:");
        scanf("%d",&lata);
    printf("Digite a quantidade de garrafa de 290ml:");
        scanf("%d",&refriPeq);
    printf("Digite a quantidade de garrafa de 2lt:");
        scanf("%d",&refriMed);    
    
    totalMl = (lata * 355) + (refriPeq * 290) + (refriMed * 2000)
    totalLitro = totalMl / 1000.0;
    
    
    printf("Total de litros comprados %.3f", totalLitro);
    return 0;
}
