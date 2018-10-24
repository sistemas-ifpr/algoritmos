#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fatorial(int x);

int main() {
    srand( time(NULL) );
    int a[10], b[10], i;
    
    for (i = 0; i <= 9; i++) {
        // Entrada:
        a[i] = rand() % 100;
    }
    
    for (i = 0; i <= 9; i++) {    
        // Processamento:
        b[i] = 0;
        int j;
        for (j = i; j <= 9; j++) {
            b[i] = b[i] + a[j];
        }
        
        // Saída:
        printf("%d - %d\n", a[i], b[i]);
    }
}



