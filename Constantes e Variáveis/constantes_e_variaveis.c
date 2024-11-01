#include <stdio.h>

int main()
{
    float precoVenda, totImposto, totDesconto, precoFinal;
    const float taxaImposto = 0.1;
    const float descontoPadrao = 0.05;
    
    printf("Preço do produto: ");
    scanf("%f", &precoVenda);
    
    totImposto = precoVenda * taxaImposto;
    totDesconto = precoVenda * descontoPadrao;
    precoFinal = precoVenda + totImposto - totDesconto;
    
    printf("Valor total é de R$ %.2f. Total de impostos R$ %.2f, e o desconto de R$ %.2f, preço final de R$ %.2f", 
    precoVenda, totImposto, totDesconto, precoFinal);

    return 0;
}
