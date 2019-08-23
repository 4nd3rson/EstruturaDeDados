#include <stdio.h>
#include <stdlib.h>


//QUINTO EXERCICIO
int main()
{
    int vetor[5], i, maior;

    for(i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
        if(i == 0) maior = vetor[i];
        else if(vetor[i] > maior) maior = vetor[i];
    }

    printf("MAIOR: %d", maior);

    return 0;
}
