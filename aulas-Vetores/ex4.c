#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10
int main() {

    int vet[TAM], esc, oc=0;

    srand(time(NULL));

    printf("Vetor aleatorio: ");
    for(int i=0; i < TAM; i++) {
        vet[i] = 10 + (rand()%11);
        printf("%i ", vet[i]);
    }

    printf("\nNumero para a busca: ");
    scanf("%i", &esc);

    for(int i=0; i < TAM; i++) {
        if(vet[i] == esc){
            oc++;
        }
    }
    if(oc >= 1) {
        printf("Total de ocorrencias: %i", oc);
        printf("\nEncontrado no(s) indice(s): ");
        for(int i=0; i < TAM; i++) {
        if(vet[i] == esc){
            printf("%i ", i);
        }
        }
    }
    if(oc == 0) {
        printf("O numero %i não foi encontrado", esc);
    }

    return 0;
}