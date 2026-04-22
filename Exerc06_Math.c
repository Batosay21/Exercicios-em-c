
//Calcula e exibe o volume de uma lata de óleo em centímetros cúbicos (cm³), utilizando a fórmula matemática V = π × R² × H.

#include <stdio.h>
#include <math.h>

int main()
{ 
    const float pi=3.14;
    float r,h,vol;    
    
    printf("Digite o raio da lata (em cm):");
        scanf("%f",&r);
    printf("Digite a altura (em cm): ");
        scanf("%f",&h);
    
    vol=pi*pow(r,2)*h;
    
    printf("O volume da lata é : %.2fcm cubicos",vol);
    return 0;
}
