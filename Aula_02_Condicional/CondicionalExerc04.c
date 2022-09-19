#include <stdio.h>

int main()
{
    int codigo;
    float salarioAtual, salarioNovo, valorAumento;

    printf("Digite o codigo do seu novo cargo: ");

    scanf("%d", &codigo);

    printf("Digite o seu salario atual: ");

    scanf("%f", &salarioAtual);

    switch (codigo) 
    {
        case 1:
            salarioNovo = salarioAtual * 1.50;

            valorAumento = salarioNovo - salarioAtual;

            printf("Seu cargo novo eh Escrituario, o valor do seu aumento foi %.2f e o seu salario novo eh %.2f", valorAumento, salarioNovo);

            break;

        case 2:
            salarioNovo = salarioAtual * 1.35;

            valorAumento = salarioNovo - salarioAtual;

            printf("Seu cargo novo eh Secretario, o valor do seu aumento foi %.2f e o seu salaro novo eh %.2f", valorAumento, salarioNovo);

            break;

        case 3:
            salarioNovo = salarioAtual * 1.20;

            valorAumento = salarioNovo - salarioAtual;

            printf("Seu cargo novo eh Caixa, o valor do seu aumento foi %.2f e o seu salaro novo eh %.2f", valorAumento, salarioNovo);

            break;

        case 4:
            salarioNovo = salarioAtual * 1.10;

            valorAumento = salarioNovo - salarioAtual;

            printf("Seu cargo novo eh Gerente, o valor do seu aumento foi %.2f e o seu salaro novo eh %.2f", valorAumento, salarioNovo);

            break;

        case 5:

            printf("Seu cargo novo eh Diretor, o valor do seu aumento foi 0 e o seu salaro novo eh %.2f", salarioAtual);

            break;

        default:
            printf("O valor eh invalido, por favor digite um numero de cargo valido");
    }
}
