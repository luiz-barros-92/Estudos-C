#include <stdio.h>

int main()
{   
    int x, y;
    
    printf("Tabuada: ");
    scanf("%d", &x);
    
    for (int c = 1; c <= 10; c++){
        y = x * c;
        printf("%d x %d = %d \n", x, c, y);
    }

    return 0;
}
