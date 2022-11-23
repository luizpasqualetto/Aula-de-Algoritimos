#include <stdio.h>


#define TAMANHO 30
main()
{
    char sequencia[TAMANHO];
    int i;

    for(i = 0; i < TAMANHO; i++)
    {
        printf("Char %d: \n", i + 1);
        scanf(" %c", &sequencia[i]);
    }

    for(i = 0; i < TAMANHO; i++)
    {
        if(sequencia[i] == 'a' || sequencia[i] == 'e' || sequencia[i] == 'i' || sequencia[i] == 'o' || sequencia[i] == 'u')
        {
            sequencia[i] = '@';
        }
        printf("%c", sequencia[i]);
    }
}