#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Linha 3
#define Coluna 3

int main()
{
    int matrizA[Linha][Coluna];
    int soma = 0;
    int i, j;

    srand(time(NULL));

    for(i = 0; i < Linha; i++)
    {
        for(j = 0; j < Coluna; j++)
        {
            matrizA[i][j] = rand() % 100;
        }
    }

    for (i = 0; i < Linha; i++)
    {
        for (j = 0; j < Coluna; j++)
        {
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < Linha; i++)
    {
        for (j = 0; j < Coluna; j++)
        {
            if(i == j || i > j)
            {
                soma += matrizA[i][j];
            }
        }
    }

    printf("A soma dos elementos abaixo da diagonal, incluindo a diagonal da matriz eh: %d", soma);


}