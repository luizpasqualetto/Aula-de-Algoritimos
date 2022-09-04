#include <iostream>

int main()
{
    int codigo;
    float precoKwh, quantidade, valorTotal;

    printf("Digite o seu codigo de consumidor \n");

    scanf("%d", &codigo);

    printf("Digite o preco de seu consumo  \n");

    scanf("%f", &precoKwh);

    printf("Digite a quantidade do seu consumo  \n");

    scanf("%f", &quantidade);

    valorTotal = precoKwh * quantidade;

    if(valorTotal <= 11.20){

        printf("O valor final da sua conta eh R$11.20 e seu codigo de consumidor eh %d", codigo);
    }
    else{
        printf("O valor final da sua conta eh R$%.2f e seu codigo de consumo eh %d", valorTotal, codigo);
    }
}
