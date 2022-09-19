#include <stdio.h>

int main()
{
    float alturaCic, alturaFul;
    int anos = 0;

    alturaFul = 1.50;
    alturaCic = 1.10;

    while(alturaFul > alturaCic)
    {
        alturaFul = alturaFul + 0.20;
        alturaCic = alturaCic + 0.30;
        anos++;
    }
    printf("Levou %d anos para Ciclano %.2f, ficar maior que o Fulano %.2f", anos, alturaCic, alturaFul);
}