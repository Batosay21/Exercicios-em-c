#include <stdio.h>

int main(){
    int idade, diasVivo;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    diasVivo = idade * 365;
    printf("Voce viveu aproximadamente %d dias.\n", diasVivo);
    return 0;   
}