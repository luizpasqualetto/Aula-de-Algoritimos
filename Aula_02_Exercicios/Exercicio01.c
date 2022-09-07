#include <stdio.h>

int main()
{
    int numero1, numero2, numero3;

    printf("Digite tres numeros para verificar a ordem crescente deles: \n");

    printf("Digite o valor do 1 numero: \n");

    scanf("%d", &numero1);

    printf("Digite o valor do 2 numero: \n");

    scanf("%d", &numero2);

    printf("Digite o valor do 3 numero: \n");

    scanf("%d", &numero3);

    if(numero1 < numero2 && numero2 < numero3) {
        printf("A ordem crescente dos valores eh: %d, %d e %d", numero1, numero2, numero3);
    }
    else if(numero1 < numero3 && numero3 < numero2){
        printf("A ordem crescente dos valores eh: %d, %d e %d", numero1, numero3, numero2);
    }
    else if(numero2 < numero1 && numero1 < numero3){
        printf("A ordem crescente dos valores eh: %d, %d e %d", numero2, numero1, numero3);
    }
    else if(numero2 < numero3 && numero3 < numero1){
        printf("A ordem crescente dos valores eh: %d, %d e %d", numero2, numero3, numero1);
    }
    else if(numero3 < numero1 && numero1 < numero2){
        printf("A ordem crescente dos valores eh: %d, %d e %d", numero3, numero1, numero2);
    }
    else{
        printf("A ordem crescente dos valores eh: %d, %d e %d", numero3, numero2, numero1);
    }
}
