#include <stdio.h>

int main()
{
    int numero = 1, resto, i = 0;

    while(i == 0)
    {
        numero++;
        resto = numero%3;
        if(resto == 2)
        {
            resto = numero%5;
            if(resto == 3)
            {
                resto = numero%7;
                if(resto == 4)
                {
                    i++;
                    printf("O menor numero possivel cuja divisão por 3, 5 e 7 resulta em 2, 3 e 4 respectivamente eh %d.", numero);
                    break;
                }
            }
        }
    }
}