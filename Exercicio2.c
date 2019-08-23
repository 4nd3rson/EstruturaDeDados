#include <stdio.h>
#include <stdlib.h>

//SEGUNDO EXERCICIO
int main()
{
    int b, e, result = 1, c;

    printf("BASE: ");
    scanf("%d", &b);
    printf("EXPOENTE: ")/
    scanf("%d", &e);

    for(c = 0; c < e; c++){
        result = result * b;
    }

    printf("RESULTADO: %d", result);

    return 0;
}
