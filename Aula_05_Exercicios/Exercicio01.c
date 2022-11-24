#include <stdio.h>

int funcao(int numeroA, int numeroB, int numeroC);

main()
{
    int somaF, a, b, c;

    printf("digite o valor de a, b e c respectivamente: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    somaF = funcao(a, b, c);

    printf("O resultado da funcao para as entradas eh:%d", somaF);

}

int funcao(int numeroA, int numeroB, int numeroC)
{
    int soma, i;

    if(numeroC > numeroB)
    {
        for(i = numeroB; i <= numeroC; i++)
        {
            if(i % numeroA == 0)
            {
                soma += i;
            }
        }
    }
    else if(numeroB > numeroC)
    {
        for (i = numeroC; i < numeroB; i++)
        {
            if(i % numeroA == 0)
            {
                soma += i;
            }
        }
    }

    return soma;

}
