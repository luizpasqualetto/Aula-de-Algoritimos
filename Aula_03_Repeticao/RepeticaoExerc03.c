#include <stdio.h>

int main()
{
    float soma, numeros;

    printf("Digite 10 numeros para serem somados\n");

    for(int i=0; i<10; i++)
    {
        scanf("%f", &numeros);
        soma += numeros;
    }

    printf("A soma dos 10 digitos é %.2f", soma);
}