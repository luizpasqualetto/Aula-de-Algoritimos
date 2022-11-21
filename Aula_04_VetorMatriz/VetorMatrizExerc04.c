#include <stdio.h>

#define Linha 3
#define Coluna 6

int main()
{

    float matriz[Linha][Coluna] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    float colunaSoma[Coluna] = {0};
    int i, j;

 
    printf("A Matriz completa eh:\n");

    for ( i = 0; i < Linha; i++)
    {
        for (j = 0; j < Coluna; j++)
        {
            printf("%.0f\t", matriz[i][j]);
        }
        printf("\n");
    }

    for( j = 0; j < Coluna; j++ )
    {
        for( i = 0; i < Linha; i++ )
        {
         colunaSoma[j] = colunaSoma[j] + matriz[i][j];
        }

    printf("A soma dos elementos da coluna %d eh : %.2f\n",(j+1),colunaSoma[j]);
    colunaSoma[j]=0;
    }

}