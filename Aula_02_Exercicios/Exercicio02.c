#include <stdio.h>

int main()
{
    float numero1, numero2;

    printf("Digite dois numeros: \n");

    scanf("%f", &numero1);

    scanf("%f", &numero2);

    if(numero1 > numero2){
        printf("O maior numero eh %.2f", numero1);
    }
    else{
        printf("O maior numero eh %.2f", numero2);
    }

}
