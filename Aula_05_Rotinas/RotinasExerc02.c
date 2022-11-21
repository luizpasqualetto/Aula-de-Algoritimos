#include <stdio.h>

int numero1, numero2, somaN;

int somaNumeroInteiro(int numero1, int numero2);

main()
{
    printf("Digita dois numeros para somar os numeros entre eles.\n");

    printf("Numero 1: \n");
    scanf("%d", &numero1);
    
    printf("Numero 2: \n");
    scanf("%d", &numero2);

    somaN = somaNumeroInteiro(numero1, numero2);

    printf("A soma dos N termos entre %d e %d eh: %d", numero1, numero2, somaN);
    
}

int somaNumeroInteiro(int numero1, int numero2)
{
    int soma;

    for(int i = numero1 + 1; i < numero2; i++)
    {
        soma += i;
    }

    return soma;
}