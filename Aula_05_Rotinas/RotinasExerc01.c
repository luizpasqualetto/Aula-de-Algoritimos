#include <stdio.h>

int polaridade(int numeroV);

main()
{
    int numero = 0;

    printf("Digite um valor para verificar se eh positivo ou negativo\n");
    scanf("%d", &numero);
    numero = polaridade(numero);
    printf("%d", numero);
}

int polaridade(int numeroV)
{
    if(numeroV > 0)
    {
        return 1;
    }
    else if(numeroV < 0);
    {
        return 0;
    }
}