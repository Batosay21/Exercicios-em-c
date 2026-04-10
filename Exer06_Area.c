#include <stdio.h>

int main(){
    float  lado,area;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);
    area=lado*lado;
    printf("A area do quadrado é %.2f", area);
    return 0;
}