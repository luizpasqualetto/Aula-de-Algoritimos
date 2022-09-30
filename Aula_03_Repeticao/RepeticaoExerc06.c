#include <stdio.h>

int main()
{
    float numero, soma, total, sinal;

    printf("Digite um numero\n");
    scanf("%f", &numero);

    soma = 0;
    sinal = 1;

    for(int i=1; i<10; i++)
    {
        soma = numero  * sinal / i;
        total += soma;
        sinal *= -1;

        printf("%.2f\n", soma);
    }

    printf("A soma dos 10 primeiros termos eh: %.2f.", total);

}