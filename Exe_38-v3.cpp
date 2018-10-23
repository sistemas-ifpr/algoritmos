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
    if (x == 1)
        return 1;
    else
        return x * fatorial(x-1);
}



