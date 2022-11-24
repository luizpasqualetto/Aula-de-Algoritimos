#include <stdio.h>
#include <string.h>

void completarNome(char *primN, char *ultiN, char *nComp);

main()
{
    char pNome[50], uNome[50], nomeCompleto[100];

    printf("Qual o seu primeiro nome: ");
    scanf("%s", &pNome);

    printf("Qual o seu ultimo nome: ");
    scanf("%s", &uNome);

    completarNome(pNome, uNome, nomeCompleto);

    printf("o seu nome completo eh: %s", nomeCompleto);
}

void completarNome(char *primN, char *ultiN, char *nComp)
{
    int i;

    for(i = 0; i < strlen(primN); i++)
    {
        nComp[i] = primN[i];
    }

    nComp[i] = ' ';

    for(i = 0; i < strlen(ultiN); i++)
    {
        nComp[strlen(primN) + 1 + i] = ultiN[i];
    }
    // necessario para parar dizer ao string (%s) onde parar, insere um char NULL no ultimo indice do vetor de chars, finalizando o string.
    nComp[strlen(primN) + 1 + i] = '\0';
}