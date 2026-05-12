#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
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

    for(i=0; i<1; i++) {
        pos = rand()%TAM;
        if(vet[pos] == 10) {
            vet[pos] = 11;
        }
        else {
            i--;
        }
    }

    while(fim < 2 && aux < 3) {
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
            if(aux == 3){
                vet[pos] -= 10;
                for(int i = 0; i < TAM; i++){
                    printf("%i|",vet[pos]); 
                    vet[pos] -= 10; 
                }
                
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
                fim = 1;
                aux1 = 1;
            }
            else{
                aux +=1;
            }
            if(aux == 3){
              break;
            }
        }
        else {
            fim = 2;
        }
        
    }
    if(aux == 3 && aux1 == 0){
        WHITE
        printf("|");
        for(int i = 0; i < TAM; i++){
            if(vet[i]>=10){
                vet[i]= vet[i] - 10;
            }
            BLUE
            printf("0%i", vet[i]);
            WHITE
            printf("| ");
        }
        WHITE
        printf("\nperdeu!");
    }
    else if(aux1 == 1){
        printf("\nGanhou!");
    }

    
    return 0;
}