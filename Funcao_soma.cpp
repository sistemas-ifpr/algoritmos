#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma(int x, int y);

int main() {
    int x = 2;
    int y = 3;
    
    int soma = soma(x, y);
    
    printf("Soma: %d", soma);
}

int soma (int x, int y) {
    return x + y;
}



