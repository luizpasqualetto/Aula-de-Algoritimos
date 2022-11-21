#include <stdio.h>
#include <math.h>
#include <locale.h>

float eq2ndGrau(float numeroA, float numeroB, float numeroC, float *raiz1, float *raiz2);

main()
{
    setlocale(LC_ALL, "Portuguese");

    float numeroA, numeroB, numeroC, raiz1, raiz2;

    numeroA = numeroB = numeroC = raiz1 = raiz2 = 0;

    printf("Digite o valor de 'a' da equação: \n");
    scanf("%f", &numeroA);

    printf("Digite o valor de 'b' da equação: \n");
    scanf("%f", &numeroB);

    printf("Digite o valor de 'c' da equação: \n");
    scanf("%f", &numeroC);

    if(eq2ndGrau(numeroA, numeroB, numeroC, &raiz1, &raiz2))
    {
        printf("Valor da raiz 1: %.2f\n", raiz1);
        printf("Valor da raiz 2: %.2f\n", raiz2);
    }
    else
    {
        printf("Não possui raizes reais");
    }
}

float eq2ndGrau(float numeroA, float numeroB, float numeroC, float *raiz1, float *raiz2)
{
    float delta;

    if(numeroA == 0)
    {
        return 0;
    }

    delta = (numeroB * numeroB) - 4 * (numeroA * numeroC);

    if (delta < 0)
    {
        return 0;
    }

    else
    {
        *raiz1 = (-numeroB - sqrt(delta)) / (2 * numeroA);
        *raiz2 = (-numeroB + sqrt(delta)) / (2 * numeroA);
        return 1;
    }
}