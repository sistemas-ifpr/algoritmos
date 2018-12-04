// EXE 22:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, ehPrimo = 1;
    
    printf("Informe um numero: ");
    scanf(" %d", &n);
    
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            ehPrimo = 0;
            break;
        }
    }
    
    if (ehPrimo) {
        printf("Eh primo!");
    } else {
        printf("Nao eh primo ;[");
    }
}
