#include <stdio.h>
#include <stdlib.h>

    void faz_algo( int *a) {
        
        printf("Valor de a = %d\n", *a);
        *a = *a * 2;
        
        if(*a>=200)
            return;
        
        else 
            faz_algo(a);
    }
    
    int main(void) {
        int a;
        printf("Digite um valor\n");
        scanf("%d", &a);
        
        faz_algo(&a);
        printf("A saída é %d",a);
    
    }


