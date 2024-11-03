#include <stdio.h>

int main()
{
    int a, b, c, som, sub, mul;
    float divi;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);
    
    som = a + b + c;
    sub = a - b - c;
    mul = a * b * c;
    divi = (float) a / b / c;
    
    printf("\n------\nSoma : %d \nSubtração: %d \nMultiplicação: %d \nDivisão: %.2f \n", som, sub, mul, divi);
    
    if (a > b) {
        printf("O primeiro número é maior que o segundo.\n");
    }else if (a == b) {
        printf("O primeiro número é igual ao segundo.\n");
    }else if ( a < b) {
        printf("O primeiro número é menor que o segundo.\n");
    }
    
    if (b < c) {
        printf("O segundo é menor que o terceiro.\n");
    }else if (b == c) {
        printf("O segundo é igual ao terceiro.\n");
    }else if (b > c) {
        printf("O segundo é maior que o terceiro.\n");
    }
    
    if (a > 0 && (b % 2 == 0)){
        printf("O primeiro número é positivo e o segundo é par.");
    }
    return 0;
}
