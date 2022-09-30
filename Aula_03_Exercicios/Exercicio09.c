#include <stdio.h>

main()
{
    int numero, soma;

    printf("Digite um numero\n");
    scanf("%d", &numero);

    soma = 0;

    for(int i = 1; i<=numero; i++)
    {
        soma += i;
    }

    printf("O valor da soma de todos os termos de 1 a %d eh %d", numero, soma);
}