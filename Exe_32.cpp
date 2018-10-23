#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand( time(NULL) ); // SEMENTE
    int a[10], i, ctPar = 0;
    
    // Entrada:
    for (i = 0; i < 10; i++) {
        a[i] = rand() % 100;
        printf("%d, ", a[i]);
    }
    
    // Processamento:
    for (i = 0; i < 10; i++) {
        if (a[i] % 2 == 0)
            ctPar++;
    }
    int porcPar = ctPar * 100 /10;
    
    // Saída:
    printf("\nPercentual de PARES: %d\%", porcPar);
    printf("\nPercentual de IMPARES: %d\%", 
                (100 - porcPar));
    
}





