#include <stdio.h>

main()
{
    int numero, soma, fatorial;

    printf("Digite um numero inteiro e positivo\n");
    scanf("%d", &numero);

    fatorial = 1;
    soma = 1;

    for(int i = 1; i <= numero; i++)
    {
        fatorial *= i;
        soma = soma + 1 / fatorial;
        printf("valor de soma no for loop %d\n", soma);
        printf("valor de fatorial no for loop %d\n", fatorial);
        printf("valor de i no for loop %d\n", i);
    }

    printf("A soma dos termos utilizando a formula pedida eh: %d", soma);
}