#include <stdio.h>
#include <stdlib.h>

//QUARTO EXERCICIO
int main()
{
    unsigned long int n = 1, soma = 1;
    int c;

    for(c = 0; c < 64; c++){
        n = n * 2;
        soma =+ n;
    }

    printf("%lu", soma);

    return 0;
}
