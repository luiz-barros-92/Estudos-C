#include <stdio.h>
#include <stdbool.h>

int main()
{
    int valor, soma;
    
    while (true){
        
        printf("Insira um número inteiro para a soma (0 para somar): ");
        scanf("%d", &valor);
        
        soma += valor;
        
        if (valor == 0){
            break;
        }
    }
    printf("A soma dos valores é de %d.", soma);
    
    return 0;
}
