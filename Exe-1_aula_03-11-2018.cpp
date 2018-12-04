#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const float PI = 3.14;
    float r, h, vol;
    
    printf("Informe o raio da lata: ");
    scanf(" %f", &r);
    printf("Informe a altura da lata: ");
    scanf(" %f", &h);
    
    vol = PI * r * r * h;
    
    printf("\nO volume da lata eh: %f", vol);
}
