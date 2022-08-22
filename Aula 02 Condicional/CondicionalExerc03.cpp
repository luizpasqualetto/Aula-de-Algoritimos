#include <iostream>

int main()
{
    int lado1, lado2, lado3;

    printf("Digite os 3 lados para verificar se eh um triangulo: \n");

    printf("Digite o valor do 1 lado: ");

    scanf("%d", &lado1);

    printf("Digite o valor do 2 lado: ");

    scanf("%d", &lado2);

    printf("Digite o valor do 3 lado: ");

    scanf("%d", &lado3);

    if(lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado2 + lado1) {
        if (lado1 == lado2 && lado1 == lado3) {
            printf("Os lados formam um triangulo equilatero");
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Os lados formam um triangulo isosceles");
        }
        else {
            printf("Os lados formam um triangulo escaleno");
        }
    }
    else {
        printf("Os lados nao formam um triangulo.");
    }
}
