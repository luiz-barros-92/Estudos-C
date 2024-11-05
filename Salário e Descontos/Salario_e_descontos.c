//maneira simplificada de desconto, de forma direta, aplicando a porcentagem no salário total
#include <stdio.h>

int main()
{
    float salarioBruto, descontoINSS, descontoIR, salarioLiquido;
    printf("Salário: R$");
    scanf("%f", &salarioBruto);
    
    if (salarioBruto <= 1320){
        descontoINSS = salarioBruto * 0.075;
    }else if (salarioBruto <= 2571.29){
        descontoINSS = salarioBruto * 0.09;
    }else if (salarioBruto <= 3856.94){
        descontoINSS = salarioBruto * 0.12;
    }else if (salarioBruto <= 7507.49){
        descontoINSS = salarioBruto * 0.14;
    }else {
        descontoINSS = 1051.04;
    }
    
    if (salarioBruto <= 1903.98){
        descontoIR = 0;
    }else if (salarioBruto <= 2826.65){
        descontoIR = salarioBruto * 0.075;
    }else if (salarioBruto <= 3751.05){
        descontoIR = salarioBruto * 0.15;
    }else if (salarioBruto <= 4664.68){
        descontoIR = salarioBruto * 0.225;
    }else if (salarioBruto > 4664.68){
        descontoIR = salarioBruto * 0.275;
    }
    
    salarioLiquido = salarioBruto - descontoINSS - descontoIR;
    
    printf("\nSalário bruto: R$%.2f \nDesconto INSS: R$%.2f \nDesconto IR: R$%.2f \nSalário Liquido: R$%.2f", 
    salarioBruto, descontoINSS, descontoIR, salarioLiquido);

    return 0;
}
