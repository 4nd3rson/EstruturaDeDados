#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N_ALUNOS 60
#define N_DISCIPLINAS 3

typedef struct{
    char nome_disciplina[16];
    float nota;

}dados_2;


typedef struct{
    int matricula;
    dados_2 disciplinas[N_DISCIPLINAS];

}dados_1;


typedef struct{
    dados_1 alunos[N_ALUNOS];
    int n;

}cadastro;


void exibirHistorico(cadastro * serie){

    int _matricula, i, c;

    printf("\n\tINFORME A MATRICULA: ");
    scanf("%d", &_matricula);

    putchar('\n');

    for(i = 0; i < serie->n; i++){
        if(_matricula == serie->alunos[i].matricula){
            for(c = 0; c < N_DISCIPLINAS; c++){
                printf("\tDISCIPLINA[%d]: %s\n", c, serie->alunos[i].disciplinas[c].nome_disciplina);
                printf("\tNOTA: %.2f\n\n", serie->alunos[i].disciplinas[c].nota);
            }
        }
        else{
            printf("\tDADOS NAO ENCONTRADOS!!");
        }
    }
}


void cadastrando(cadastro * serie){

    int i;

    printf("\n\tINFORME SUA MATRICULA: ");
    scanf("%d", &serie->alunos[serie->n].matricula);

    putchar('\n');

    for(i = 0; i < N_DISCIPLINAS; i++){

        printf("\tDISCIPLINA[%d]: ", i);
        scanf("%s", serie->alunos[serie->n].disciplinas[i].nome_disciplina);

        printf("\tNOTA: ");
        scanf("%f", &serie->alunos[serie->n].disciplinas[i].nota);

        putchar('\n');
    }

    serie->n++;

}

cadastro * criarLista(){

    cadastro * lista;

    lista = (cadastro *) malloc(sizeof(cadastro));

    lista->n = 0;

    return lista;
}


int menu(){

    int opcao = 0;

    printf("\t\tHISTORICO ESCOLAR\n\n");

    printf("\t1 - INSERIR MATRICULAS, DISCIPLINAS E NOTAS\n");
    printf("\t2 - EXIBIR HISTORICOS\n");
    printf("\t0 - SAIR\n\n");

    printf("\tDIGITE SUA OPCAO: ");
    scanf("%d", &opcao);

    return opcao;
}


void cabecalho(){
    printf("ALUNO: ANDERSON DA COSTA SANTOS\n");
    printf("DISCIPLINA: ESTRUTURA DE DADOS I\n");
    printf("PROFESSOR: WALACE BONFIM\n\n");
}


int main()
{
    int opcao;
    cadastro * serie;

    serie = criarLista();

    while(1){

        cabecalho();
        opcao = menu();

        switch(opcao){
        case 0:
            exit(0);
            free(serie);
        case 1:
            cadastrando(serie);
            break;
        case 2:
            exibirHistorico(serie);
            system("pause");
            break;
        }

        system("cls");
    }

    return 0;
}
