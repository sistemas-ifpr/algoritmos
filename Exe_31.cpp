#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand( time(NULL) ); // SEMENTE
    int m[10], i, somaMenor = 0, 
            qtIguais = 0, mediaMaior = 0, qtMaior = 0;
    
    // Entrada:
    for (i = 0; i < 10; i++) {
        m[i] = rand() % 200;
        printf("%d, ", m[i]);
    }
    
    // Processamento:
    for (i = 0; i < 10; i++) {
        if (m[i] < 100) {
            somaMenor += m[i]; // idem: soma = soma + x;
        } else if (m[i] > 100) {
            mediaMaior += m[i];
            qtMaior += 1;
        } else {
            qtIguais++;
        }
    }
    mediaMaior = mediaMaior / qtMaior;
    
    // Saída:
    printf("\nSoma dos menores: %d\n", somaMenor);
    printf("Quantidade de iguais: %d\n", qtIguais);
    printf("Media dos Maiores: %d\n", mediaMaior);
}




