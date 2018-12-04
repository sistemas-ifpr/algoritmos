// EXE 22-v2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ehPrimo(int n) {
    int i, ehPrimo = 1;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            ehPrimo = 0;
            break;
        }
    }
    return ehPrimo;
}

int main() {
    int n;
    
    printf("Informe um numero: ");
    scanf(" %d", &n);
    
    if (ehPrimo(n)) {
        printf("Eh primo!");
    } else {
        printf("Nao eh primo ;[");
    }
}
