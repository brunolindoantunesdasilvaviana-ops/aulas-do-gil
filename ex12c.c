#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COR_VERMELHO printf("\33[31m");
#define COR_VERDE printf("\33[32m");
#define COR_LARANJA printf("\33[33m");
#define COR_AZUL printf("\33[34m");
#define COR_ROXO printf("\33[35m");
#define COR_BRANCO printf("\33[37m");


#define TAM 20

int main() {

    int i, b, c;
    char string[TAM], pl[TAM+2];

    srand(time(NULL));
    
    printf("Vetor Aleatorio: ");
    for(i=0; i<TAM; i++) {
        string[i] = 64 +(rand()%27);
        COR_BRANCO
        printf("%c ", string[i]);
    }

    printf("\nPalavra: ");
    scanf("%[^\n]", pl);

    printf("Vetor Marcado: ");
    for(i=0; i<TAM; i++) {
        for()
    }



    return 0;
}