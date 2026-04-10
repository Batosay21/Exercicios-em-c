#include <stdio.h>

int main(){
    float polegada, centimetro;
    printf("Digite o valor em polegadas: ");
    scanf("%f", &polegada);
    centimetro = polegada * 2.54;
    printf("%.2f polegadas equivalem a %.2f centimetros", polegada, centimetro);
    return 0;
}