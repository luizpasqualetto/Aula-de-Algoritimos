#include <stdio.h>

char input;

void validaEntrada(char *entrada);
void loopEntrada(char entrada2);

main()
{

    loopEntrada();
    printf("Saiu do loop");

}

void loopEntrada(char entrada2)
{

    printf("Digite um valor valido");
    scanf("%d", entrada2);

}

void validaEntrada(char *entrada)
{

    entrada = tolower(entrada);

    if(entrada == 's' || entrada == 'n')
    {

        return 0;

    }
    else
    {

        loopEntrada();
        
    }
}