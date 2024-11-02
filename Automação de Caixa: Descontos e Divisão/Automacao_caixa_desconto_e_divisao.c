#include <stdio.h>

int main()
{
    float valorBruto, valorLiquido, totDesconto, porPessoa;
    int desconto, numPessoas;
    
    printf("Digite o valor bruto: R$");
    scanf("%f", &valorBruto);
    printf("Digite o percentual de desconto: ");
    scanf("%d", &desconto);
    printf("Digite o total de pessoas: ");
    scanf("%d", &numPessoas);
    
    totDesconto = valorBruto * (desconto / 100.0);
    valorLiquido = valorBruto - totDesconto;
    porPessoa = (valorLiquido / numPessoas);
    
    printf("Valor Bruto: R$%.2f\nPercentual de desconto: %d\nValor Líquido: R$%.2f\nValor por pessoa: R$%.2f", valorBruto, desconto, valorLiquido, porPessoa);
    
    return 0;
}
