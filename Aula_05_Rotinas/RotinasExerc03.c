#include <stdio.h>
#include <ctype.h>

char input;

void validaEntrada(char *entrada);

main()
{
    char entrada;

    printf("Digite S ou N para continuar\n");

    validaEntrada(&entrada);

    printf("Entrada aprovada: %c", entrada);

    return 0;
}

void validaEntrada(char *entrada)
{

    char auxiliar = 's';

    scanf("%c", &auxiliar);

    auxiliar = tolower(auxiliar);

    while(auxiliar != 's' && auxiliar != 'n')
    {
        printf("Input invalido, por favor digite apenas S ou N\n");
        scanf(" %c", &auxiliar);
    }
    *entrada = auxiliar;
}