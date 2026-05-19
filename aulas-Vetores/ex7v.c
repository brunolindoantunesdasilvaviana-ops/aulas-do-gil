#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int vet[4], i, soma, div;

    srand(time(NULL));

    for(i=0; i<4; i ++) {
        vet[i] = rand()%100;
        printf("%i ", vet[i]);
        soma += vet[i];
    }
    div = soma/4;
    printf("\nMedia: %i", div);
    
    return 0;
}