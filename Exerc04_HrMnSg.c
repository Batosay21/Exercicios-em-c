// Converter um determinado número de segundos (informado pelo usuário) no formato horas:minutos:segundos (h:m:s).
#include <stdio.h>


int main()
{
    int totalSegundos, horas, minutos, segundos;
    
    printf("Digite o número de segundos: ");
    scanf("%d", &totalSegundos);
    
    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;
    
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    
    return 0;
}