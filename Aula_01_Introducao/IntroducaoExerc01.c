#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {

    int v1, v2, v3, v4, soma;

    printf("Digite o primeiro de quatro numeros para somar:");
    scanf("%d", &v1);

    printf("Digite o segundo de quatro numeros para somar:");
    scanf("%d", &v2);

    printf("Digite o terceiro de quatro numeros para somar:");
    scanf("%d", &v3);

    printf("Digite o quarto de quatro numeros para somar:");
    scanf("%d", &v4);

    soma = v1 + v2 + v3 + v4;

    printf("A soma dos quatro numeros eh: %d\n", soma);

    system("pause");
}
