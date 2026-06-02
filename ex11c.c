#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COR_VERMELHO printf("\33[31m");
#define COR_VERDE printf("\33[32m");
#define COR_LARANJA printf("\33[33m");
#define COR_AZUL printf("\33[34m");
#define COR_ROXO printf("\33[35m");
#define COR_BRANCO printf("\33[37m");


#define TAM 10

int main() {

    int i, b;
    char string[TAM];

    srand(time(NULL));
    
    printf("Vetor Aleatorio: ");
    for(i=0; i<TAM; i++) {
        string[i] = 65 +(rand()%26);
        printf("%c ", string[i]);
    }

    printf("\n");

    for(i=0; i<TAM; i++) {
        for(b=i+1; b<TAM; b++){
            if(string[b]==string[i]){
                string[b]=64;
                string[i]=64;
            }
        }
    }

    printf("Vetor alterado: ");
    for(i=0; i<TAM; i++) {
        if(string[i]==64){
            COR_AZUL
            printf("%c ", string[i]);
        }
        else{
            COR_BRANCO
            printf("%c ", string[i]);
        }
    }



    return 0;
}