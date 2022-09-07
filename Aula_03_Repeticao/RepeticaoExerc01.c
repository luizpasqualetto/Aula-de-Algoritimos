#include <stdio.h>

int main()
{
    float fatorial, numero;

    fatorial = 1;

    printf("Por favor digite um numero para descobrir seu fatorial.\n");
    scanf("%f", &numero);

        for(int i = 1; i <= numero; i++) 
        {
            fatorial*=i;
        }

    printf("O valor fatorial do numero digitado eh %.2f\n", fatorial);

}