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

    int i, b, c;
    char string[TAM], pl[TAM+2];

    srand(time(NULL));

    printf("Vetor aleatorio: ");
    
    for(i=0; i<TAM; i++) {
        string[i] = 65 +(rand()%26);
        if(rand()%2 == 0) {
            string[i] += 32;
        }
        printf("%c ", string[i]);
    }

    printf("\nPalavra: ");
    scanf("%[^\n]", pl);

    for(i=0;pl[i] != '\0'; i++){
        for(b=0; b<TAM; b++) {
            if(pl[i]==string[b]){
                c++;
            }
        }
    }

    if(c==i){
        printf("\nÉ Possivel");
    }
    else{
        printf("\nNão é Possivel");
    }

    return 0;
}