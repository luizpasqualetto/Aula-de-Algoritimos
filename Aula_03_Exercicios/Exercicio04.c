#include <stdio.h>

main()
{
    int numero, produto, i;

    produto = 1;
    i = 1;

    printf("Digite um numero para verificar se o mesmo eh triangular \n");
    scanf("%d", &numero);

    while(produto < numero)
    {
        // Aumenta o valor do i até que o mesmo seja maior que o numero.
        produto = i*(i+1)*(i+2);
        i++;
    }
    // Reduz o valor do i para que o programa chegue no valor do produto que seria triangular, se esse for o caso. 
    i--;

    if(produto == numero)
    {
        printf("O valor digitado eh triangular.");
    }
    else
    {
        printf("O valor digitao nao eh triangular.");
    }
}