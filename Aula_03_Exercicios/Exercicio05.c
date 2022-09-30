#include <stdio.h>

main()
{
    float fatorial, soma, numero;

    printf("Digite um numero inteiro e positivo\n");
    scanf("%f", &numero);

    soma = 1;

    for(int i = 1; i < numero; i++)
    {
        fatorial = 1;
        fatorial *= i;
        soma += (1 / fatorial);
    }

    printf("A soma dos termos utilizando a formula pedida eh: %f", soma);
}