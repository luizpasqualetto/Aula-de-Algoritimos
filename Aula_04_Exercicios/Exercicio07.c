#include <stdio.h>

main()
{
    int numeroSoma[10], soma, i;

    for(i = 0; i < 10; i++)
    {
        printf("Digite um numero para o vetor[%d] :", i);
        scanf("%d", &numeroSoma[i]);

        if(numeroSoma[i] % 2 != 0)
        {
            soma += numeroSoma[i];
        }
    }
    printf("A soma dos valores impares eh %d", soma);
}