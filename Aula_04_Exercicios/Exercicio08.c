#include <stdio.h>


#define TAMANHO 10

main()
{
    int conjunto[TAMANHO], i, somaAux, quantAux, soma, contaMais, contaMenos;

    somaAux = quantAux = soma = contaMais = contaMenos = 0;

    for(i = 0; i < TAMANHO; i++)
    {
        printf("Digite um numero para o conjunto[%d]\n", i);
        scanf("%d", &conjunto[i]);

        somaAux += conjunto[i];
        quantAux++;
    }

    soma = somaAux / quantAux;

    for(i = 0; i < TAMANHO; i++)
    {
        if(conjunto[i] > soma)
        {
            contaMais++;
        }
        else if (conjunto[i] < soma)
        {
            contaMenos++;
        }
    }

    printf("media aritmetica: %d\n", soma);
    printf("A quantidade de numeros do conjunto maior que a media aritmetica eh: %d\n", contaMais);
    printf("A quantidade de numeros do conjunto menor que a media aritmetica eh: %d", contaMenos);

}