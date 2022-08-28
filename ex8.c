#include <stdio.h>
#include <stdlib.h>

    int main (void) 
    {
        float vetor[10];        // representa um vetor de 10 posições do tipo real
        int i;                  // variável contadora

        printf("\nPOSICAO:\t ENDERECO:\n");
        
        for(i = 0; i < 10; i++) {
            vetor[i] = rand(); // a função rand foi usada para gerar valores aleatórios
        }
        
        // cada posição no vetor terá um endereço de memória diferente, então usa-se estrutura de repetição
        for(i = 0; i < 10; i++) {
            printf("%d\t\t %d\n", i, &vetor[i]); // imprimindo cada posição e seu respectivo endereço
        }
         
        return (0);
    }






