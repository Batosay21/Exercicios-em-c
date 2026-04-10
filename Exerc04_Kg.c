#include <stdio.h>

int main()
{ float kg;
    int quilograma;
    printf("Digite o peso em kg: ");
    scanf("%f", &kg);
   
    quilograma=1000*kg;
    printf("valor da quilograma: %d",quilograma);

    return 0;
}