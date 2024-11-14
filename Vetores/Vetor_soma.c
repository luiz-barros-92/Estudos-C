#include <stdio.h>

int main()
{
    int n_vendas[5], total_vendas = 0;
    
    printf("#####################\nTOTALIZADOR DE VENDAS\n#####################\n\n");
    
    for (int c = 0; c < 5; c++){        
    printf("Número total de vendas do dia %d: ", c + 1);
    scanf("%d", &n_vendas[c]);
    
    total_vendas += n_vendas[c];
    }
    
    printf("\n------------------\n");
  
    for (int c = 0; c < 5; c++){
        printf("Vendas do dia %d: %d \n", c + 1, n_vendas[c]);
    }
  
    printf("------------------\n");
  
    printf("\nNúmero total de vendas: %d", total_vendas);

    return 0;
}
