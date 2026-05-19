#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define BLACK printf("\033[0;30m");
#define RED printf("\033[0;31m");
#define GREEN printf("\033[0;32m");
#define YELLOW printf("\033[0;33m");
#define BLUE printf("\033[0;34m");
#define PURPLE printf("\033[0;35m");
#define CYAN printf("\033[0;36m");
#define WHITE printf("\033[0;37m");

int main() {

    int i, pos, vet[TAM], fim = 0, aux = 0, aux1 = 0;

    srand(time(NULL));
    for(i=0; i<TAM; i++) {
        vet[i] = 10;
    }

    for(i=0; i<8; i++) {
        pos = rand()%TAM;
        if(vet[pos] == 10) {
            vet[pos] = 11;
        }
        else {
            i--;
        }
    }
    for(i=0; i<6; i++) {
        pos = rand()%TAM;
        if(vet[pos] == 10) {
            vet[pos] = 12;
        }
        else {
            i--;
        }
    }
    for(i=0; i<4; i++) {
        pos = rand()%TAM;
        if(vet[pos] == 10) {
            vet[pos] = 13;
        }
        else {
            i--;
        }
    }
    for(i=0; i<2; i++) {
        pos = rand()%TAM;
        if(vet[pos] == 10) {
            vet[pos] = 14;
        }
        else {
            i--;
        }
    }

    while(fim < 2) {
        system("clear");
        YELLOW
        printf("|");
        for(i=0; i<TAM; i++) {
            printf("%02i|", i);
        }
        WHITE
        printf("\n|");
        for(i=0; i<TAM; i++) {
            if(vet[i] >= 10) {
                printf("??|");
            }
            else{
                BLUE
                printf("%02i", vet[i]);
                WHITE
                printf("|");
            }
        }
        if(fim == 0) {
            printf("\nJogada=> ");
            scanf("%i", &pos);
            vet[pos] -= 10;

            if(vet[pos] == 1) {
                WHITE
                printf("\n|");
                for(int i = 0; i < TAM; i++){
                if(vet[i]>=10){
                vet[i]= vet[i] - 10;
                }
                BLUE
                printf("0%i", vet[i]);
                WHITE
                printf("| ");
                }
                aux1++;
            }
            else{
                aux ++;
            }
        }
        else {
            fim = 2;
        }
        
    }
    
    return 0;
}