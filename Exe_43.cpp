#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// EXE 43 (29)
int main() {
    srand(time(NULL));
    int i, a[10], n;
    
    for (i = 0; i < 10; i++) {
        a[i] = rand() % 10;
        printf("%d, ", a[i]);
    }
    
    printf("\nInforme um numero para buscar: ");
    scanf(" %d", &n);
    
    int temNro = 0;
    for (i = 0; i < 10; i++) {
        if (a[i] == n) {
            temNro = 1;
            break;
        }
    }
    
    if (temNro) {
        printf("O numero existe, na posicao %d.", i);
    } else {
        printf("O numero NAO existe.");
    }
    
    
}
