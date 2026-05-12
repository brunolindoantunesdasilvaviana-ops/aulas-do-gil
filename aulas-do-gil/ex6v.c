#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int vet[12], i, maior=0, maiori=0, menor=100, menori=100;

    srand(time(NULL));

    for(i=0; i<12; i ++) {
        vet[i] = 0;
        printf("|%02i|", i);
    }
    printf("\n");
    for(i=0; i<12; i ++) {
        vet[i] = 10 + (rand()%90);
        printf("|%i|", vet[i]);
    }
    for(i=0; i<12; i ++) {
        if(vet[i] >= maior){
            maior=vet[i];
            maiori=i;
        }
    }
    for(i=0; i<12; i ++) {
        if(vet[i] <= menor){
            menor=vet[i];
            menori=i;
        }
    }
    printf("\nMaior = %i / Posição = %i", maior, maiori);
    printf("\nMenor = %i / Posição = %i", menor, menori);
    return 0;
}