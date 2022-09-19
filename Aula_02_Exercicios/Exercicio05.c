#include <stdio.h>
#include <string.h>

int main()
{

char nome[15];
float salario = 0, salarioFinal = 0;

printf("Digite o seu nome \n");
scanf("%s", &nome);

printf("Digite o seu salario \n");
scanf("%f", &salario);

if(salario <= 1000) 
{
    salarioFinal = salario * 1.20;
}
else if(1000.01 <= salario <= 5000) 
{
    salarioFinal = salario * 1.10;
}
else 
{
    salarioFinal = salario;
}

printf("%s, Seu salario novo eh %.2f e seu salario antigo eh %.2f", nome, salarioFinal, salario);

}
