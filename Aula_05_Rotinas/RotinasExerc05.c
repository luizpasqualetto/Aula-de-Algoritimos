#include <stdio.h>

int incrementar(int *n);
int decrementar(int *n);

main()
{
    int numero;

    printf("Digite um numero para testar as rotinas:\n");
    scanf("%d", &numero);

    incrementar(&numero);
    printf("Numero digitado +1: %d\n", numero);

    decrementar(&numero);
    printf("Numero digitado -1: %d\n", numero);

}

int incrementar(int *n)
{
    *n = *n + 1;

    return *n;
}

int decrementar(int *n)
{
    *n = *n - 1;

    return *n;
}