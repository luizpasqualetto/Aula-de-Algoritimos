#include <stdio.h>
int main()
{
    int vetor[100], i;

    for(i = 0; i<=100; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i<=100; i++)
    {
        if(vetor[i] == 64)
        {
            printf("A posição %d contem um 64\n", i);
        }
    }
}