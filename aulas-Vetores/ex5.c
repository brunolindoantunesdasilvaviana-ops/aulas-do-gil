#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 5
int main() {

    int veta[TAM], vetb[TAM], vetc[10], a=0, b=0;

    srand(time(NULL));
    
    printf("Vetor A: ");
    for(int i=0; i < TAM; i++) {
        veta[i] = 10 + (rand()%90);
        printf("%i ", veta[i]);
    }

    printf("\nVetor B: ");
    for(int i=0; i < TAM; i++) {
        vetb[i] = 10 + (rand()%90);
        printf("%i ", vetb[i]);
    }
    printf("\nVetor C: ");
    for(int i=0; i < 10; i++) {
        if(i == 0 || i == 2 || i == 4 || i == 6 || i == 8){
            vetc[i] = veta[a];
            a++;
        }
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 9){
            vetc[i] = vetb[b];
            b++;
        }
    }
    for(int i=0; i < 10; i++) {
        printf("%i ", vetc[i]);
    }

    return 0;
}