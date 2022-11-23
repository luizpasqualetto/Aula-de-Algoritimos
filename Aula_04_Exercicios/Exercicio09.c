#include <stdio.h>

#define ALUNOS 5

main()
{
    int disciplina1[ALUNOS], disciplina2[ALUNOS], i;

    for(i = 0; i < ALUNOS; i++)
    {
        printf("Digite o ID do %do aluno que esta matriculado na disciplina D1: ", i+1);
        scanf("%d", &disciplina1[i]);
        printf("Digite o ID do %do aluno que esta matriculado na disciplina D2: ", i+1);
        scanf("%d", &disciplina2[i]);
    }

    for(i = 0; i < ALUNOS; i++)
    {
        if(disciplina1[i] == disciplina2[i])
        {
            printf("O aluno com ID %d está matriculado em ambas as disciiplinas\n", disciplina1[i]);
        }
        else
        {
            printf("Não existem alunos matriculados em ambas as disciplinas");
        }
    }
}