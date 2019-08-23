#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[10];
    float larg;
    float comp;
    float area;
} REGISTRO;

int main()
{
    REGISTRO comodo[10];
    char resp[3];
    int i = 0, c;
    float area_total = 0;

    while(1){

        printf("INFORME O NOME DO COMODO: ");
        scanf("%s", comodo[i].nome);

        printf("LARGURA: ");
        scanf("%f", &comodo[i].larg);

        printf("COMPRIMENTO: ");
        scanf("%f", &comodo[i].comp);

        comodo[i].area = comodo[i].larg * comodo[i].comp;
        printf("AREA: %.2f\n", comodo[i].area);

        printf("QUER CONTINUAR? [SIM/NAO] ");
        scanf("%s", resp);
        if(strncmp(resp, "NAO", 3) == 0) break;

        i++;
    }

    fflush(stdin);

    for(c = 0; c <= i; c++){

        printf("COMODO: %s \nLARG: %.2f \nCOMP: %.2f\n", comodo[c].nome, comodo[c].larg, comodo[c].comp);
        area_total += (comodo[c].larg * comodo[c].comp);
    }

    printf("\nAREA TOTAL: %.2f", area_total);

    return 0;
}
