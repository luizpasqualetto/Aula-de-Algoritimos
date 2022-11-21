#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define ALUNOS 10
#define PROVAS 3

main()
{
    setlocale(LC_ALL, "Portuguese");

    int provasAlunos[ALUNOS][PROVAS];
    int i, j;
    int menorProva;
    int menorP1, menorP2, menorP3;

    srand(time(NULL));

    menorP1 = menorP2 = menorP3 = 0;

    for(i = 0; i < ALUNOS; i++)
    {
        printf("ID Aluno: %d\t", i);
        menorProva = 10;

        for(j = 0; j < PROVAS; j++)
        {
            int random = rand() % 10;
            
            provasAlunos[i][j] = random;

            printf("Prova %d Nota: %d \t |", (j + 1), provasAlunos[i][j]);

            if(provasAlunos[i][j] <= menorProva)
            {
                menorProva = provasAlunos[i][j];
            }
        }

        for(j = 0; j < PROVAS; j++)
        {
            if(menorProva == provasAlunos[i][j] && j == 0)
            {
                menorP1++;
            }
            else if(menorProva == provasAlunos[i][j] && j == 1)
            {
                menorP2++;
            }
            else if(menorProva == provasAlunos[i][j] && j == 2)
            {
                menorP3++;
            }
        }

        printf("Menor Nota de Prova: %d\t", menorProva);
        printf("\n");
    }

    printf("A quantidade de alunos com a menor nota na P1 foram %d\n.", menorP1);
    printf("A quantidade de alunos com a menor nota na P2 foram %d\n.", menorP2);
    printf("A quantidade de alunos com a menor nota na P3 foram %d\n.", menorP3);
}