#include <stdio.h>

int main()
{
    int matrizA[5][3] = {1,5,6,3,2,9,5,6,2,3,6,3,2,1,2}, matrizB[5][3] = {9,2,3,7,6,4,5,8,3,1,9,7,5,4,3}, matrizSoma[5][3];

    printf("A  +  B  =  C\n");

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d  +  %d  =  %d\n", matrizA[i][j], matrizB[i][j], matrizSoma[i][j]);
        }
    }
}