#include <stdio.h>

int main()
{
    float numero, soma, total;

    printf("Digite um numero\n");
    scanf("%f", &numero);

    for(int i=1; i<=10; i++)
    {
        soma = numero / i;
        total += soma;
        printf("%.2f\n", soma);
    }

    printf("A soma dos 10 primeiros termos eh: %.2f.", total);

}