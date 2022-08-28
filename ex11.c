#include <stdio.h>
#include <stdlib.h>

int main() {

	char *gabarito;                     // vetor que representa o gabarito das questões
	char **respostas;                   // matriz que representa os alunos nas linhas e as respostas nas colunas
    int *matriz;                        // vetor que representa o número de matrícula
    float media = 0;                    // "media" indica a nota média da turma
	int cont = 0;                       // variável contadora
	int i, j;                           // variáveis contadoras
	float *notas;                       // vetor que representa as notas de cada aluno

    // alocando memória do vetor 'gabarito'
    gabarito = (int*) malloc(10 * sizeof(int));

    //alocando memória do vetor 'notas'
    notas = (int*) malloc(10 * sizeof(int));
    
    //alocando memória do vetor 'matriz'
    matriz =  (int*) malloc(10 * sizeof(int));
    
    // alocando memória da matriz 'respostas'
    respostas =  (int**) malloc(10 * sizeof(int*));     // alocação de memória das colunas
    for (i = 0; i < 10; ++i) {
        respostas[i] = (int*) malloc(10 * sizeof(int));  // alocação de memória das linhas
    }
    

	for (i=0; i<10; i++) 
	{
		printf("Informe o gabarito da questao %d: ", i+1);
		scanf(" %c", &gabarito[i]);         // leitura do gabarito das questões
	}
	
	printf("\n\n");
	
	for(j=0; j<10; j++)
    {
        printf("Digite o numero de matricula do aluno %d: ",j+1); 
        scanf("%d",&matriz[j]);         // leitura do número de matrícula dos alunos 
    }
	
    printf("\n\n");
    
	for (j=0; j<10; j++) {

		printf("Informe as respostas do aluno %d:\n", j+1);

		for (i=0; i<10; i++) {

			printf("Questao %d: ", i+1);

			scanf(" %c", &respostas[j][i]);     // leitura das respostas de todas as questões de cada aluno

		}

		notas[j] = 0;

	}
    
    // calculando a nota de cada aluno
	for (j=0; j<10; j++) {

		for (i=0; i<10; i++) {

			if (respostas[j][i] == gabarito[i]) {

				notas[j]++;
			}
		}
	}

	printf("\nDADOS:\n");
    
    // saída de dados informando a nota dos alunos e se foram aprovados ou reprovados
	for (j=0; j<10; j++)
    {
		printf("Matricula: %d\t nota: %.2f\t%s\n", matriz[j], notas[j], (notas[j] <7) ? "Reprovado" : "Aprovado");
    }
    
    printf("\n");
    
    // calculando o número de alunos aprovados
    cont = 0;
    
    for(j=0; j<10; j++)
    {
        if (notas[j] >= 7)
        {
            cont++;
        }
    }
    
    printf("O numero de alunos aprovados foi: %d", cont);
    printf("\n");
    
    // calculando a nota média da turma

    media = (notas[0]+notas[1]+notas[2]+notas[3]+notas[4]+notas[5]+notas[6]+notas[7]+notas[8]+notas[9])/ 10;
    
    printf("Media da turma: %.2f \n", media);
    
    for (i = 0; i < 10; i++)
        free(respostas[i]);         // liberando a memória 
        
    free(respostas);                // liberando a memória
    free(matriz);                   // liberando a memória
    free(gabarito);                // liberando a memória
    free(notas);                   // liberando a memória
    
	return 0;

}



