#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *valor;
    int i, num = 0;     // i será a variável contadora, e num será a variável que retornará quantos números pares foram fornecidos
    
    valor = (int**) malloc(10 * sizeof(int*));
    
    for(i = 0; i <10; i++)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d",&valor[i]);          // leitura dos números inteiros
    }
    
    for(i = 0; i <10; i++)
    {
        if (valor[i] % 2 == 0)          // verificando se os números são pares
        {   
            num += 1; 
        }
    }
    
    printf("\n\n");
    printf("Existem %d numero(s) par(es)\n", num);  // saída de dados
    
    free(valor);                // liberando a memória
    return 0;
}


