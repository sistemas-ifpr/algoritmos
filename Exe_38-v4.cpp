#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fatorial(int x);

int main() {
    srand( time(NULL) );
    int a[10], b[10], i;
    
    for (i = 0; i <= 9; i++) {
        a[i] = rand() % 10;
        b[i] = fatorial(a[i]);
        printf("%d:\t%d\n", a[i], b[i]);
    }
}

int fatorial(int x) {
    int fat = 1, i;
    for (i = x; i >=1; i--) {
        fat = fat * i;
    }
    return fat;
}

