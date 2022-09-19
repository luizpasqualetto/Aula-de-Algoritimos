#include <stdio.h>

int main()
{
    int soma, resto;

    for(int i = 0; i <= 500; i++)
    {
        resto = i % 2;

        if(resto != 0)
        {
            soma += i;
        }
    }
    printf("A soma de todos os valores impares de 1 a 500 eh: %d", soma);
}