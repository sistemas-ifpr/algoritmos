#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// EXE 21 - Fibnacci: 1, 1, 2, 3, 5, 8, 13
int main() {
    int i, num = 1, numAnt = 0, aux;
    
    for (i = 1; i <= 20; i++) {
        printf("%d, ", num);
        aux = num;
        num = num + numAnt; // próximo num
        numAnt = aux;
    }
}
