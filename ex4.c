#include <stdio.h>

    int main ()
    {
        int n1, n2;         // 'n1' e 'n2' são as variáveis do tipo inteiro
    
        printf("Digite um numero inteiro: ");
        scanf("%d", &n1);   // leitura da primeira variável
        
        printf("Digite um numero inteiro: ");
        scanf("%d", &n2);   // leitura da segunda variável
        
        printf("\n\n");
        printf("NUMERO COM MAIOR ENDEREÇO: ");
    
        if( &n1 < &n2 ) {               // se o endereço de memória de 'n1' for menor que 'n2'
            printf("%d\n", n2);         // imprima 'n2'
            printf("SEU ENDEREÇO: %d\n", &n2);
            
        } else if ( &n1 > &n2 ) {       // se o endereço de memória de 'n1' for maior que o de 'n2'
            printf("%d\n", n1);         // imprima n1
            printf("SEU ENDEREÇO: %d\n", &n1);
        }
    return (0);
      
    }
    
    
    

