#include <stdio.h>

int main()
{
    float num1, num2, med;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    med = (num1 + num2) / 2;
    
    printf("A média entre %.2f e %.2f é %.2f", num1, num2, med);

    return 0;
}
