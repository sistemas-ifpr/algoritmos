#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand( time(NULL) ); // SEMENTE
    int a[20], b[20], i, j = 0;
    
    for (i = 0; i < 20; i++) {
        a[i] = rand() % 100;
    }
    
    // Jogo os pares:
    for (i = 0; i < 20; i++) {
        if (a[i] % 2 == 0) {
            b[j] = a[i];
            j++;
        }
    }
    
    // Jogo os ímpares:
    for (i = 0; i < 20; i++) {
        if (a[i] % 2 != 0) {
            b[j] = a[i];
            j++;
        }
    }
    
    // Saída:
    for (i = 0; i < 20; i++) {
        printf("%d -- %d\n", a[i], b[i]);
    }
}




