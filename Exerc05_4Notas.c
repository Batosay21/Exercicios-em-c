#include <stdio.h>

// Calcular a média aritmética simples de 4 notas de um aluno e exibir o resultado.

int main()
{
    float media,nt,soma;
    int i=1;
    
    // não é certo fazer isso, mas para a situação.... pode ser mais facil
    while(i<=4){
    printf("Digite a nota %d: ",i);
    scanf("%f", &nt);
        i++;
        soma+=nt;
    }
    
    media=soma/4;
    
    printf("A media do aluno é %.2f",media);
    
    return 0;
}