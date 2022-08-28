#include <stdio.h>
#include <stdlib.h>

    int main(void)
    {
        int i = 0;                                  // variável contadora do tipo inteiro inicializada = 0
        int vetorTeste[5] = { 1, 5 , 9, 15, 21 };   // vetor de 5 posições e seus respectivos valores inteiros
        int *ptr = vetorTeste;                      // '*ptr' está apontando para o 'vetorTeste'
        
        while (ptr <= &vetorTeste[4]){              // enquanto 'ptr' for menor ou igual ao endereço do 'vetorTeste' na posição 4
            printf("%d - %p - %d\n", i, ptr, *ptr); // imprimindo os endereço de memória (ptr) em forma de hexadecimais e os valores do 'vetorTeste' (*ptr)
            i++;    // 'i' é apenas uma variável que irá de 0 até 4
            ptr++;  // 'ptr' é o endereço que irá aumentar da posição 0 até 4
    }

    return 0;
}





