#include <stdio.h>

int main()
{
    float altura, peso, massa;

    printf("Digite o seu peso\n");

    scanf("%f", &peso);

    printf("Digite a sua altura verificando que existe o ponto decimal  \n");

    scanf("%f", &altura);

    massa = peso / (altura * altura);

    printf("Sua massa eh %.2f, e seu peso esta classificado como: ", massa);

    if(massa < 26) 
    {
        printf("Normal");
    }
    else if(26 < massa < 30)
    {
        printf("Obeso");
    }
    else
    {
        printf("Obeso Morbido");
    }
}
