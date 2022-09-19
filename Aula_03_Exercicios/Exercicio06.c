#include <stdio.h>
#include <math.h>

main()
{
    int numero, soma, elevado;

    soma = 0;

    for(int i = 1; i <= 15; i++)
    {
        soma = soma + 1;
    }

    printf("A soma dos termos utilizando a formula pedida eh: %d", soma);
}