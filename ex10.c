#include <stdio.h>
#include <stdlib.h>

    typedef struct Aluno{
    //declaração das variáveis
        int matricula;
        float notas[3];
        char nome[50];
        float media;
        
    } Aluno;

    int main()
    {
        Aluno *turma;
        int i, j;
        float media = 0;
        
        turma = (Aluno*)malloc(5 * sizeof(Aluno)); // alocando memória do vetor 'turma'
        
        for(i=0; i<5; i++)              // lê os dados de cada aluno
        {
            printf("\nDigite o nome do aluno %d: ",i+1);
            scanf("%s", &turma[i].nome);                                // leitura do nome
                
            printf("Digite o numero de matricula do aluno %d: ",i+1);
            scanf("%d", &turma[i].matricula);                           // leitura do número de matrícula
            
                for(j=0; j<3; j++)
                {
                    printf("Digite a %dº nota do aluno %d: ",j+1,i+1);
                    scanf("%f", &turma[i].notas[j]);                    // leitura das notas
                }
        }
    
        for(i=0; i<5; i++)              //imprime os dados de cada aluno
        {
            printf("\nNome: %s\t Matricula: %d\t ", turma[i].nome, turma[i].matricula);
            
                for(j=0; j<3; j++)
                {
                    printf(" %dº nota: %.2f ", j+1, turma[i].notas[j]);
                }
        }
    
        for(i=0; i<5; i++)              //calcula a media das notas de cada aluno
        {
                turma[i].media = (turma[i].notas[0] + turma[i].notas[1] + turma[i].notas[2]) / 3;
        }
    printf ("\n\n");
    
        for(i=0; i<5; i++)              //imprime o nome e a media das notas de cada aluno
        {
           printf("%s: media = %.2f\n",turma[i].nome, turma[i].media);
        }   
        
    free(turma);                // liberando a memória
        return 0;
    }



