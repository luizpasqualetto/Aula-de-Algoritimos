#include <stdio.h>
#include <math.h>
#include <time.h>

#define TAMANHO 5
main()
{
    int matrizA[TAMANHO][TAMANHO], matrizB[TAMANHO][TAMANHO], matrizC[TAMANHO][TAMANHO], i, j;
    //fix by removing tamanhoX and tamanhoY but why?

    srand(time(NULL));

    for(i = 0; i < TAMANHO; i++)
    {
        for(j = 0; j < TAMANHO; j++)
        {
            matrizA[i][j] = rand() % 10;
            matrizB[i][j] = rand() % 10;
        }
    }

    for(i = 0; i < TAMANHO; i++)
    {
        for(j = 0; j < TAMANHO; j++)
        {
            matrizC[i][j] = matrizA[i][j] * matrizB[i][j];

            printf("Matriz A[%d[%d]:%d \t*\t Matriz B[%d[%d]:%d \t=\t Matriz C[%d[%d]:%d \n", i, j, matrizA[i][j], i, j, matrizB[i][j], i, j, matrizC[i][j]);
        }
    }
}