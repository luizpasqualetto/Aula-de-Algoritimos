#include <stdio.h>
#include <math.h>

main()
{
    int i, numero, counter;
    double soma, elevado = 0;

    printf("Digite um numero inteiro e positivo\n");
    scanf("%d", &numero);

    soma = 1;
    counter = 1;

    for(int i = 1; i <= 15; i++)
    {
        counter++;
        elevado = pow(numero, counter);
        soma += elevado / i;
    }
    printf("A soma dos termos utilizando a formula pedida eh: %.2f", soma);
}
