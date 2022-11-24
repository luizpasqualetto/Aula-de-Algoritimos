#include <stdio.h>
#include <ctype.h>

float calculoMedia(float n1, float n2, float n3, char casoN);

main()
{
    float nota1, nota2, nota3, mediaF;
    char caso;

    printf("Digite a primeira, segunda e terceira nota do aluno:\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    printf("Digite A para calcular a media aritmetica e P para calcular a media ponderada:\n");
    scanf(" %c", &caso);

    caso = tolower(caso);

    mediaF = calculoMedia(nota1, nota2, nota3, caso);

    printf("A media final eh: %.2f", mediaF);

}

float calculoMedia(float n1, float n2, float n3, char casoN)
{
    float media;

    switch(casoN)
    {
        case 'a':
        media = (n1 + n2 + n3) / 3;
        break;

        case 'p':
        media = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
        break;

        default:
        printf("Input de caso invalido\n");
        break;
    }

    return media;
}