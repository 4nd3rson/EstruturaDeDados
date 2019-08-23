#include <stdio.h>
#include <stdlib.h>

//PRIMEIRO EXERCICIO
int main()
{
    int elev, c, result = 1;

    printf("3 ELEVADO A: ");
    scanf("%d", &elev);

    for(c = 0; c < elev; c++){
        result = result * 3;
    }

    printf("RESULTADO: %d", result);

    return 0;
}
