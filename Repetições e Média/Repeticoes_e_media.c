#include <stdio.h>

int main()
{
    float nota = 0, media = 0, soma = 0;
    int contador = 0, escolha;
     
    printf("Calculo de media de notas\n");
    
    do{
      
       printf("\nInsira uma nota: ");
       scanf("%f", &nota);
       
       contador++;
       soma += nota;
       
       printf("\nAdicionar notas[1] | Calcular medias[0]: ");
       scanf("%d", &escolha);
      
    }   while (escolha == 1);
    
    media = soma / contador;
    printf("No total houveram %d notas e a media foi de %.2f", contador, media);
  
    return 0;
}
