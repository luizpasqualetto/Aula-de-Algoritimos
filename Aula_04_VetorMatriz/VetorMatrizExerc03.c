#include <stdio.h>

int main()
{
    int numero, vetor[20] = {1, 9, 2, 5, 6, 8, 3, 4, 5, 7, 7, 5, 3, 2, 8, 2, 10, 3, 4, 8}, soma;

    printf("Digite a quantidade de numeros inteiros que devem ser somados do vetor\n");
    scanf("%d", &numero);

    soma = 0;

    for(int i = 0; i<numero; i++)
    {
        soma += vetor[i];
    }

    printf("%d", soma);
}