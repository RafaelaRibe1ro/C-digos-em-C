#include <stdio.h>
#include <stdio.h>

    int main() {
    	float matriz[3][3]; // matriz com 3 linhas e 3 colunas
    	int i, j;           // variáveis contadoras
    	
    	printf("NUMEROS:\t ENDERECO:\n");
    	
    	for (i=0; i<3; i++) {       // representa as linhas da matriz
    		for (j=0; j<3; j++)     // representa as colunas da matriz
    		// imprimindo o endereço de memória de números aleatórios:
    			printf("%.2f\t %d\n", matriz[i][j] = rand(), &matriz[i][j]); // a função 'rand()' foi usada para gerar valores aleatórios
    	}	
    	
    	return 0;
    }

