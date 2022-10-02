#include <stdio.h>

int main()
{
    int numero = 1, resto, i = 0;

    //descomenta abaixo para verificar o que vai produzir um erro de variavel nao existente, apesar de ter sido declarada dentro do while()
    //escopo2 = 2;

    while(i == 0)
    {
        // escopo2 existe para este while e todos os escopos abaixo do 2, mas não para o main
        //escopo3 = 3;
        int escopo2 = 2;

        numero++;
        if(numero%3 == 2)
        {
            //igualmente o escopo3 existe apenas para o escopo deste if e todos os abaixos.
            int escopo3 = 3;
            escopo2 = 3;

            printf("o numero no primeiro loop eh %d\n", numero);
            if(numero%5 == 3)
            {
                //aqui seria o quarto "bloco" de escopo

                printf("o numero no segundo loop eh %d\n", numero);
                if(numero%7 == 4)
                {
                    //e aqui seria o quinto escopo

                    i++;
                    printf("O menor numero possivel cuja divisão por 3, 5 e 7 resulta em 2, 3 e 4 respectivamente eh %d.", numero);
                } // 5
            } // 4
        } // 3
    } // 2
} // 1