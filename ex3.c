#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    // versão recursiva
    int fibonacciRecursivo(int n) {
        int x;
        if(n == 1)
            return (1);
         
        if(n == 2)
            return (1);
            
        x = fibonacciRecursivo(n-1) + fibonacciRecursivo(n -2);
        return (x);
    }
    
    // minha versão iterativa
    int fibonacciIterativo(int n) {
        int x = 0;                  // 'x' inicializa com valor = 0
        int termo1 = 1;             // 'termo1' é o primeiro número da sequência e tem valor = 1
        int termo2 = 1;             // 'termo2' é o segundo número da sequência e tem valor = 1
        int i;     
        for (i = 3; i <= n; i = i + 1) 
        // a sequência começa a partir de i = 3 pois os dois primeiros números já possuem valor definido
        {                                        
            x = termo1 + termo2;     
            termo1 = termo2;                           
            termo2 = x;                           
        }                                        
        return x;                             
        
    }

    int main(void) 
    {
        int saida = 0;
        int n = 0;
        clock_t t1, t2; // duas variaveis para guardar o registro do tempo
        float diff;
        
        printf("Entre com um numero 'n'\n");
        scanf("%d", &n);
        
        t1 = clock(); // registra este instante inicial
        saida = fibonacciRecursivo(n);
        t2 = clock(); // registra este instante final
        diff = (((float ) t2 - (float) t1) / 1000000.0F); //milesegundos
        printf("O calculo recursivo do %d termo Fibonacci gerou %d e levou %.6f ms/s\n", n, saida, diff);
        
        t1 = clock(); // registra este instante inicial
        saida = fibonacciIterativo(n);
        t2 = clock(); // registra este instante final
        diff = (((float ) t2 - (float) t1) / 1000000.0F); //milesegundos
        printf("O calculo iterativo do %d termo Fibonacci gerou %d e levou %.6f ms/s\n", n, saida, diff);
    
        return 0;
    }




