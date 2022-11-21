#include <stdio.h>

int subtracao(int n1, int n2);
int produto(int n1, int n2);
int divisao(int n1, int n2);
int fatorial(int n1);
int arranjos(int numero1, int numero2);
int combinacoes(int numero1, int numero2);

main()
{
    int numero1, numero2, arranjo, combinacao;

    printf("Digite o valor do primeiro numero.\n");
    scanf("%d", &numero1);

    printf("Digite o valor do segundo numero.\n");
    scanf("%d", &numero2);

    arranjo = arranjos(numero1, numero2);
    combinacao = combinacoes(numero1, numero2);

    printf("O valor do arranjo eh: %d \n", arranjo);

    printf("O valor da combinacao eh: %d", combinacao);
}

int subtracao(int n1, int n2)
{
    return n1 - n2;
}

int produto(int n1, int n2)
{
    return n1 * n2;
}

int divisao(int n1, int n2)
{
    return n1 / n2;
}

int fatorial(int n1)
{
    int fatorial = 1, i;

    for(i = 1; i <= n1; i++)
    {
        fatorial = fatorial * i;
    }
    return fatorial;
}

int arranjos(int numero1, int numero2)
{
    if(numero1 < numero2)
    {
        return 0;
    }
    else
    {
        return divisao(fatorial(numero1), fatorial(subtracao(numero1, numero2)));
    }
}

int combinacoes(int numero1, int numero2)
{
    if(numero1 < numero2)
    {
        return 0;
    }
    else
    {
        return divisao(fatorial(numero1), produto(fatorial(numero2), fatorial(subtracao(numero1, numero2))));
    }
}