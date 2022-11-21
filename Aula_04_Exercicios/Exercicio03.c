#include <stdio.h>
#include <locale.h>

#define TAMANHO 20

main()
{
    setlocale(LC_ALL, "Portuguese");

    double vetorA[TAMANHO];
    double somaTotal = 0;
    int i = 0;

    for(i = 0; i < TAMANHO; i++)
    {
        printf("Digite o valor do vetorA[%d]: \n", i);
        scanf("%lf", &vetorA[i]);
    }

    for(i = 0; i < TAMANHO / 2; i++)
    {
        somaTotal += (vetorA[i] - vetorA[(TAMANHO - 1) - i]) * (vetorA[i] - vetorA[(TAMANHO - 1) - i]);
        printf ("Soma total %.2lf, loop %d\n", somaTotal, (i + 1));
    }

    printf("O valor da soma final é: %.2lf", somaTotal);

}