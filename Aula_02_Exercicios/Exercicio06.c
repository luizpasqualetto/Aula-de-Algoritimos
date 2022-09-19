#include <stdio.h>


int main()
{
    float notaA, notaB, notaC, mediaFinal;

    printf("Digite a sua primeira nota: \n");
    scanf("%f", &notaA);

    printf("Digite a sua segunda nota: \n");
    scanf("%f", &notaB);

    printf("Digite a sua terceira nota: \n");
    scanf("%f", &notaC);

    mediaFinal = (notaA + notaB + notaC) / 3;

    if(mediaFinal >= 8.0) 
    {
        printf("Sua nota final eh %.1f, e seu conceito foi A", mediaFinal);
    }
    else if(5.0 <= mediaFinal <= 8.0) 
    {
        printf("Sua nota final eh %.1f,  e seu conceito foi B", mediaFinal);
    }
    else 
    {
        printf("Sua nota final eh %.1f, e seu conceito foi C", mediaFinal);
    }
}
