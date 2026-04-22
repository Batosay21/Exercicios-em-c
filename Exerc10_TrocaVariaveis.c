#include <stdio.h>
//Troca os valores entre as variaveis
int main()
{ 
    
    int a,b;
    
    printf("Variavel a: ");
        scanf("%d",&a);
     printf("Variavel b: ");
        scanf("%d",&b);
    a=(a+b);
    b=(a-b);
    a=(a-b);
    
    printf("valor a: %d\n valor b: %d\n",a,b);
    
    return 0;
}
