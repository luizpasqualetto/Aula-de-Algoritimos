#include <stdio.h>
#include <math.h>
#include <locale.h>

int absoluto(int numero);

main()
{
    setlocale(LC_ALL, "Portuguese");

    int numeroAbs, numero;

    printf("Digite um numero para retornar o valor absoluto desse numero: \n");
    scanf("%d", &numero);

    numeroAbs = absoluto(numero);

    printf("%d", numeroAbs);

}

int absoluto(int numero)
{
    if(numero > 0)
    {
        return numero;
    }
    else
    {
        return -numero;
    }
}