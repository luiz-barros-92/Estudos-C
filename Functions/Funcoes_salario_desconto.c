#include <stdio.h>

float calcular_salario_bruto();
float calcular_desconto(float bruto);
float calcular_salario_liquido(float bruto, float desconto);

int main() {
    float bruto;
    float desconto;
    float liquido;

    bruto = calcular_salario_bruto();
    printf("\nSalário bruto: R$%.2f", bruto);

    desconto = calcular_desconto(bruto);
    printf("\nDesconto: R$%.2f", desconto);

    liquido = calcular_salario_liquido(bruto, desconto);
    printf("\nLíquido: R$%.2f", liquido);

    return 0;
}

float calcular_salario_bruto(){
    float salario_bruto = 0;
    float valor_hora = 0;
    float quantidade_horas = 0;

    printf("\nValor da hora de trabalho: ");
    scanf("%f", &valor_hora);
    printf("\nQuantidade de horas trabalhadas: ");
    scanf("%f", &quantidade_horas);

    salario_bruto = valor_hora * quantidade_horas;
    return salario_bruto;
}

float calcular_desconto(float bruto){
    #define porcent_desconto 0.09
    float desconto = bruto * porcent_desconto;
    return desconto;
}

float calcular_salario_liquido(float bruto, float desconto){
    return bruto - desconto;
}
