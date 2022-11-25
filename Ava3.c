#include <stdio.h>
#include <stdlib.h>

#define QuantidadeAlun 15

float matriz[100][100];
char nome[100][15];

void insereValores();
void mostraValores();

void main()
{
    insereValores();
    system("cls");
    mostraValores();
}

void insereValores()
{
    for(int i=0;i<QuantidadeAlun;i++)
    {
        printf("\nNumero do aluno %d:",i+1);
        scanf("%f",&matriz[i][0]);
        fflush(stdin);
        printf("Insire o nome do aluno:");
        gets(nome[i]);
        printf("Insere a nota de avalia‡Æo intermedia:");
        scanf("%f",&matriz[i][1]);
        printf("Insere a nota de avalia‡Æo final:");
        scanf("%f",&matriz[i][2]);

        matriz[i][3]=(matriz[i][1]+matriz[i][2])/2;
    }
    system("pause");
}
void mostraValores()
{
    printf("Num do aluno\t|Nom do aluno\t|Med.Final\t|Resultado\n");

    for(int i=0;i<QuantidadeAlun;i++)
     {
        
        if(matriz[i][3]>=10)
        printf("%5.0f\t\t|%s\t\t|%5.2f\t\t|Aprovado\n",matriz[i][0],nome[i],matriz[i][3]);

        else if(matriz[i][3]<7)
        printf("%5.0f\t\t|%s\t\t|%5.2f\t\t|Reprovado\n",matriz[i][0],nome[i],matriz[i][3]);

        else
        printf("%5.0f\t\t|%s\t\t|%5.2f\t\t|Prova final\n",matriz[i][0],nome[i],matriz[i][3]);
     }
}
