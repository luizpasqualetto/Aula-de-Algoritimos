#include <stdio.h>
#include <math.h>
#include <time.h>


#define Tamanho 20
main()
{

    long vetorA[Tamanho], vetorB[Tamanho];
    int i;

    srand(time(NULL));

    for(i = 0; i < Tamanho; i++)
    {
        vetorA[i] = rand() % 10;
        vetorB[i] = 0;
        
    }

    for (i = 0; i < Tamanho; i++)
    {
        printf("%d ", vetorA[i]);
    }

    printf("\n");

    for(i = 0; i < Tamanho; i++)
    {
        if(i % 2 == 0)
        {
            vetorB[i] = pow(vetorA[i], 3);
        }
        else
        {
            vetorB[i] = vetorA[i] / 2;
        }
    }

    for (i = 0; i < Tamanho; i++)
    {
        printf("%d, ", vetorB[i]);
    }
}