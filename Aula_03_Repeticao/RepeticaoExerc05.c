#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero para determinar os impares entre o 0 e esse numero dado.\n");
    scanf("%d", &numero);

    if(numero <= 0)
    {
        printf("o numero é invalido");
    }
    else
    {
        printf("Os numeros impares são: ");
        for(int i=0; i<=numero; i++) 
        {
            if(i%2 != 0)
            {
                printf("%d, ", i);
            }
        }
    }
}