#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main()
{
    int c;
    char apartamento, nome[15];
    float diarias, valorDiaria, consumo, taxaServico, totalDiaria, subtotal, total;

    printf("Digite o seu nome\n");
    scanf(" %s", &nome);

    printf("Digite o tipo de apartamento (A, B, C ou D)\n");
    scanf(" %c", &apartamento);

    printf("Digite o numero de diarias\n");
    scanf(" %f", &diarias);

    printf("Digite o valor do seu consumo\n");
    scanf(" %f", &consumo);

    switch(toupper(apartamento))
    {
        case 'A':
            valorDiaria = 150;
            break;
        case 'B':
            valorDiaria = 100;
            break;
        case 'C':
            valorDiaria = 75;
            break;
        case 'D':
            valorDiaria = 50;
            break;
        default:
            printf("Tipo invalido de apartamento");
    }

    printf("%s, voce se hospedou em um apartamento tipo %c por %.0f dias.\n", nome, apartamento, diarias);
    printf("O resumo dos seus gastos foi:\n");
    printf("Valor Diaria = %.2f\n", valorDiaria);
    printf("Valor Consumo = %.2f\n", consumo);

    totalDiaria = valorDiaria * diarias;

    printf("Total Diaria = %.2f\n", totalDiaria);

    subtotal = totalDiaria + consumo;

    printf("Subtotal = %.2f\n", subtotal);

    taxaServico = subtotal * 0.10;

    printf("Taxa de Servico = %.2f\n", taxaServico);

    total = subtotal + taxaServico;
    
    printf("Total = %.2f\n", total);

}
