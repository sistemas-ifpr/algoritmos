#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand( time(NULL) );
    int a[10], b[10], i;
    
    for (i = 0; i <= 9; i++) {
        a[i] = rand() % 10;
        b[i] = a[i] * a[i];
        printf("%d:\t%d\n", a[i], b[i]);
    }
}



