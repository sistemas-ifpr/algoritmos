#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand( time(NULL) ); // SEMENTE
    int m[10], i, soma = 0;
    
    // Entrada:
    for (i = 0; i < 10; i++) {
        m[i] = rand() % 200;
        printf("%d, ", m[i]);
    }
    
    // Processamento:
    for (i = 0; i < 10; i++) {
        soma = soma + m[i];
    }
    
    // Saída:
    printf("\nSoma: %d\n", soma);
}




