#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand( time(NULL) ); // SEMENTE
    int i, a[10];
    char b[10];
    
    // Entrada:
    for (i = 0; i < 10; i++) {
        a[i] = rand() % 300;
    }
    
    // Processamento:
    for (i = 0; i <= 9; i++) {
        if (a[i] < 100)
            b[i] = 'a';
        else if (a[i] == 100)
            b[i] = 'b';
        else if (a[i]  > 100 && a[i] < 200)
            b[i] = 'c';
        else if (a[i] == 200)
            b[i] = 'd';
        else
            b[i] = 'e';
    }
    
    // saida:
    for (i = 0; i <= 9; i++) {
        printf("%d - %c\n", a[i], b[i]);
    }
}





