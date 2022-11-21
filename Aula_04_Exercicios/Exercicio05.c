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

    float provasAlunos[ALUNOS][PROVAS];
    int i, j;
    float random;

    srand(time(NULL));

    for(i = 0; i < ALUNOS; i++)
    {
        printf("ID Aluno: %d\t", i);

        for(j = 0; j < PROVAS; j++)
        {	
            random = ((float)rand()/(float)(RAND_MAX));

            provasAlunos[i][j] = random;

            printf("Prova %d Nota: %.2f\t", (j + 1), provasAlunos[i, j]);
        }
        printf("\n");
    }

}