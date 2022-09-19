#include <stdio.h>

int main()
{
    int numeros, cache = 0;

    printf("Digite 100 numeros para determinar o seu maior numero\n");
    scanf("%d\n", &numeros);
    cache = numeros;

    for(int i=1; i<=100; i++)
    {
        scanf("%d", &numeros);

        if(numeros>cache)
        {
            cache = numeros;
        }
    }
    
    printf("O maior numero eh: %d", cache);
}