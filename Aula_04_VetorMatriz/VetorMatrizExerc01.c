#include <stdio.h>

#define Elemento 100

int main()
{
    int vetor[Elemento], i;

    for(i = 0; i<=Elemento; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i<=Elemento; i++)
    {
        if(vetor[i] == 64)
        {
            printf("A posição %d contem um 64\n", i);
        }
    }
}