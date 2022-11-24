#include <stdio.h>

int elevado(int numX, int numY);

main()
{
    int numeroX, numeroY, resultado;

    printf("Digite um numero \n");
    scanf("%d", &numeroX);


    printf("Elevado a qual potencia \n");
    scanf("%d", &numeroY);

    resultado = elevado(numeroX, numeroY);

    printf("o resultado eh: %d", resultado);

}

int elevado(int numX, int numY)
{
    int res = 1;

    for(int i = 0; i < numY; i++)
    {
        res *= numX;
    }
    return res;
}