#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    
    printf("Numeros terminados em 0:\n");
    for (i = 1000; i <= 9999; i = i + 10) {
        printf("%d, ", i);
    }
}
