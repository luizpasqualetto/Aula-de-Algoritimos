#include <stdio.h>
#include <math.h>

int main()
{
    float numero;

    printf("Digite um numero para verificar se o mesmo eh maior, igual ou menor que zero \n");

    scanf("%f", &numero);

    if(numero > 0) {
        printf("O numero digitado eh maior que zero");
    }

    else if(numero == 0) {
        printf("O numero digitado eh igual a zero");
    }
    else {
        printf("O numero digitado eh menor a zero");
    }
}
