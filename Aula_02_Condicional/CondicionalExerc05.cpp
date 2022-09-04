#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c, raiz1, raiz2, delta;

    printf("Por favor digite o valor de a \n");

    scanf("%f", &a);

    printf("Por favor digite o valor de b \n");

    scanf("%f", &b);

    printf("Por favor digite o valor de c \n");

    scanf("%f", &c);

    delta = (b * b) - 4 * a * c;

    if(delta >= 0)
    {

    raiz1 = (-b + sqrt(delta) ) / 2 * a;

    raiz2 = (-b - sqrt(delta) ) / 2 * a;

    printf("A primeira raiz eh %f \n", raiz1);

    printf("A segunda raiz eh %f \n", raiz2);

    printf("As raizes sao reais");

    }

    else
    {
        printf("O delta eh menor ou igual a 0, a raiz eh complexa");
    }

}
