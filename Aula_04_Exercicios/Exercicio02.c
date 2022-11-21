#include <stdio.h>
#include <math.h>
#include <time.h>

main()
{

    int vetorA[20], vetorB[30], vetorC[50];
    int i = 0;

    srand(time(NULL));

    for(i = 0; i <= 20; i++)
    {
        vetorA[i] = rand() % 10;
        printf("VetorA[%d] = %d\n", i, vetorA[i]);
        
    }

    for(i = 0; i <= 30; i++)
    {
        vetorB[i] = rand() % 10;
        printf("VetorB[%d] = %d\n", i, vetorB[i]);
        
    }

    for(i = 0; i <= 50; i++)
    {

        if(i <= 20)
        {
            vetorC[i] =vetorA[i];
        }

        else
        {
            vetorC[i] = vetorB[i-21];
        }

        printf("VetorC[%d] = %d\n", i, vetorC[i]);

    }
}