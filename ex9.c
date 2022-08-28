#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int mat,nota;                // mat representa o número de matrícula e nota é a nota do aluno
    int **matriz;                // cada linha representa um aluno, a primeira coluna será sua matrícula e a segunda coluna sua nota
    int i;
    
    matriz = (int**)malloc(10 * sizeof(int*));   // alocando memória das linhas
    
    for (mat=0; mat<10; mat++) 
        matriz[mat] = (int*) malloc(2 * sizeof(int)); //alocando memória das colunas
    
    
    for (mat=0; mat<10; mat++) {
    
        for (nota=0; nota<2; nota++) {
        
            
            printf("Digite o numero de matricula do aluno %d, e sua nota. ", mat+1); // ao inserir os dados, primeiro deve-se digitar a matrícula, dar enter, e depois a nota, e assim por diante.
            scanf("%d", &matriz[mat][nota]);
        }    
    }    
    
    
    for (mat=0; mat<10; mat++)
    {
        for (nota=0; nota<2; nota++)
            printf("%d\t",matriz[mat][nota]); 
            printf("\n"); 
    }
    
    for (i = 0; i < 2; i++)
        free(matriz[i]);         // liberando a memória 
        
    free(matriz);                // liberando a memória
    
    return 0;
}
