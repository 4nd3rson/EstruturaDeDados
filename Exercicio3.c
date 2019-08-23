#include <stdio.h>
#include <stdlib.h>

//TERCEIRO EXERCICIO
int main()
{
    int n2 = 0, n1 = 1, n = 1, c;

    for(c = 0; c < 15; c++){
        printf("%d ", n);
        n = n2 + n1;
        n2 = n1;
        n1 = n;
    }

    return 0;
}
