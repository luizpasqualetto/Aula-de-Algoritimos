#include <stdio.h>

int main()
{
    int idade = 0, idadeMedia = 0, countMedia = 0, idadeSoma = 0;

    printf("Digite um numero de anos desejado e finalize o programa com um numero igual ou menor a 0\n");
    scanf("%d", &idade);

    while(idade > 0)
    {
        scanf("%d", &idade);
        idadeSoma += idade;
        countMedia++;
    }
    
    idadeMedia = idadeSoma / countMedia;

    printf("Voce digitou %d idades, a idade media foi %d.", countMedia, idadeMedia);
}