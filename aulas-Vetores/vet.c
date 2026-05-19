#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10

int main() {

    int i, vet[TAM], soma;


    srand(time(NULL));

    for(i=0; i<TAM; i ++) {
        vet[i] = rand()%10;
    }

    for(i=0; i<TAM; i++) {
        printf("%i ", vet[i]);
    }

    for(i=0; i<TAM; i++) {
        soma += vet[i];
    }
    printf("\nSoma = %i", soma);

    return 0;
}