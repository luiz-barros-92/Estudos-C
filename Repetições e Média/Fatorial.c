#include <stdio.h>

int main()
{
    int n;
    unsigned long long fatorial = 1;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){
    fatorial *= i;
    }
    
    for (int cont = n; cont >= 2; cont--){
        printf("%d x ", cont);
    }
    printf("1 = %llu", fatorial);
    
    return 0;
}
