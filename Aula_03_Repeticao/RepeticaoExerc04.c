#include <stdio.h>

int main()
{
    int numero = 1, resto, i = 0;

    while(i == 0)
    {
        numero++;
        if(numero%3 == 2)
        {
            printf("o numero no primeiro loop eh %d\n", numero);
            if(numero%5 == 3)
            {
                printf("o numero no segundo loop eh %d\n", numero);
                if(numero%7 == 4)
                {
                    i++;
                    printf("O menor numero possivel cuja divisão por 3, 5 e 7 resulta em 2, 3 e 4 respectivamente eh %d.", numero);
                }
            }
        }
    }
}