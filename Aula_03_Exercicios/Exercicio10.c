#include <stdio.h>

main()
{
    int numero, fibbo1, fibbo2, soma;

    printf("Digite até que termo deve ser calculado a sequencia de fibbonaci.\n");
    scanf("%d", &numero);
    
    if(numero > 2)
    {
        fibbo1 = 1;
        fibbo2 = 1;

        printf("O valor dos primeiro %d termos da sequencia de fibbonacia eh : ", numero);

        for(int i = 1; i<=numero; i++)
        {
            soma = fibbo1 + fibbo2;
            fibbo1 = fibbo2;
            fibbo2 = soma;

            printf("%d, ");
        }
    }
    else
    {
        printf("O valor digitado é menor ou igual a 2.");
    }
}