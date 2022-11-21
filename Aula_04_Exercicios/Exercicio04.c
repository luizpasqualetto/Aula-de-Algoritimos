#include <stdio.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define TAMANHO 50

main()
{
    setlocale(LC_ALL, "Portuguese");

    char vetorChars[TAMANHO];
    char buscaChar;
    int i, checkChar = 0;

    srand(time(NULL));

    printf("Digite uma letra para ver quantas vezes aparece dentro do vetor.\n");
    scanf("%c", &buscaChar);

    for(i = 0; i < TAMANHO; i++)
    {
        int randomChar = rand() % 26;

        vetorChars[i] = 97 + randomChar;

        if(vetorChars[i] == buscaChar)
        {
            printf("Posição %d: %c\n", i, buscaChar);
            checkChar++;
        }
        // printf para debugging, remova as // da linha de baixo para verificar que o script ta funcionando corretamente.
        // printf("Posição %d: %c\n", i, vetorChars[i]);
    }
    if(checkChar < 1)
    {
        printf("O char digitado não existe dentro do vetor.");
    }
}