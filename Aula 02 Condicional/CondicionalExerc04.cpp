#include <iostream>

int main()
{
    int codigo;
    float salarioAtual, salarioNovo, valorAumento;

    printf("Digite o codigo do seu novo cargo: ");

    scanf("%d", &codigo);

    printf("Digite o seu salario atual: ");

    scanf("%d", &salarioAtual);

    switch (codigo) {
        case 1:
            salarioNovo = salarioAtual * 1.50;

            valorAumento = salarioNovo - salarioAtual;

            printf("Seu cargo novo eh Escrituario, o valor do seu aumento foi %f e o seu salaro novo eh %f", valorAumento, salarioNovo);
    }
}
