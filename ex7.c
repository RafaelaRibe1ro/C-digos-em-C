#include <stdio.h>
#include <stdlib.h>

    int main(void)
    {
        int i;          // variável contadora  
        int vetorTeste[5] = {1, 5, 9, 15, 21 };     // vetor com 5 números inteiros declarados
        int *ptr = vetorTeste;                      // o ponteiro '*ptr' está apontando para o vetor
        
        // imprimindo endereços hexadecimais
        printf("%p\n", vetorTeste);
        printf("%p\n", ptr); 
        printf("%p\n", &ptr);       

        for( i = 0; i < 5; ++i) {           // estrutura de repetição que irá imprimir o endereço de memória de cada posição do vetor
            printf("%d - %p\n", i, &ptr[i]);
        }
        
        for( i = 0; i < 5; ++i) {           // estrutura de repetição que irá imprimir os valores de cada posição do vetor
            printf("%d - %d\n", i, ptr[i]);
        }
        
        for( i = 0; i < 5; ++i) {           // estrutura de repetição que irá imprimir os valores de cada posição do vetor
            printf("%d - %d\n", i, *(ptr + i));
        }
        
        for( i = 0; i < 5; ++i, ptr++) {    // estrutura de repetição que irá imprimir os valores de cada posição do vetor
             printf("%d - %d\n", i, *ptr);
        }
        
        return 0;
    }


