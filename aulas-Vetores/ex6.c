#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10

int main() {
    int vet[TAM], num = TAM;

    srand(time(NULL));
    
    printf("Vetor aleatorio (com repeticao):\n", TAM);
    for(int i = 0; i < TAM; i++) {
        vet[i] = 10 + (rand() % 11);
        printf("%i ", vet[i]);
    }
    
    for(int i = 0; i < num; i++) {
        for(int b = i + 1; b < num; b++) {
            if(vet[i] == vet[b]) {
                for(int k = b; k < num - 1; k++) {
                    vet[k] = vet[k+1];
                }
                num--;
                b--;
            }
        }
    }
    
    printf("\n\nVetor aleatorio (sem repeticao %i):\n", num);
    for(int i = 0; i < num; i++) {
        printf("%i ", vet[i]);
    }

    return 0;
}