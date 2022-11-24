#include <stdio.h>

int calculo(int num1, int num2);

main()
{

    int numero1 = 0, numero2 = 1, resultadoF = 0;

    do
    {
        if(numero1 >= numero2)
        {
            printf("Erro! O primeiro numero digitado eh maior ou igual ao segundo numero!\n");
        }
        printf("Digite o valor do primeiro e do segundo numero respectivamente (O primeiro nao pode ser igual ou maior que o segundo)\n");
        scanf("%d", &numero1);
        scanf("%d", &numero2);
    } while (numero1 >= numero2);

    printf("O valor da soma, subtracao, multiplicacao e divisao do numero %d pelo %d eh respectivamente: \n", numero1, numero2);
    resultadoF = calculo(numero1, numero2);
    
}

int calculo(int num1, int num2)
{
    int soma, subtracao, multiplicacao, divisao, resultado;

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    resultado = printf("%d, %d, %d, %d", soma, subtracao, multiplicacao, divisao);

    return resultado;
}
