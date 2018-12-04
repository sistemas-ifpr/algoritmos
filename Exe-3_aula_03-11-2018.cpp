#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int a[10], i, qtPares = 0;
    
    for (i = 0; i < 10; i++) {
        a[i] = rand() % 100;
        printf("%d, ", a[i]);
        
        if (a[i] % 2 == 0) {
            qtPares = qtPares + 1;
        }
    }
    
    printf("\nForam gerados %d pares.", qtPares);
}
