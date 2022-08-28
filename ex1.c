// ex.1
#include <stdio.h>
#include <stdlib.h>

    typedef struct {
    // declaração das variáveis de cada indivíduo
        int idade;
        float altura; 
        float peso;
        char nome[50];
    } Individuo;

    int main()
    {
        Individuo *pessoas;
        int i;
        pessoas = (Individuo*)malloc(3 * sizeof(Individuo));    // alocando memória do vetor 'pessoas'
        

        for(i=0; i<3; i++)              // lê os dados de cada pessoa
        {
            printf("\nDigite o %dº nome: ",i+1);
            scanf("%s", &pessoas[i].nome);          // leitura do nome
            
            printf("Digite sua idade: ");
            scanf("%d", &pessoas[i].idade);         // leitura da idade
            
            printf("Digite sua altura: ");
            scanf("%f", &pessoas[i].altura);        // leitura da altura
            
            printf("Digite seu peso: ");
            scanf("%f", &pessoas[i].peso);          // leitura do peso
            
        }
        
        // saída de dados informando nome, altura e peso
        printf("\nDADOS: \n");
        
        for(i=0; i<3; i++)
        {
            printf("Nome: %s\t Idade: %d\t Altura: %.2f\t Peso: %.2f\n",pessoas[i].nome, pessoas[i].idade, pessoas[i].altura, pessoas[i].peso);
        }
        
        
    free(pessoas);                // liberando a memória

    }


