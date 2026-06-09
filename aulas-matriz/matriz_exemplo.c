#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#define COR_VERMELHO printf("\33[31m");
#define COR_VERDE printf("\33[32m");
#define COR_LARANJA printf("\33[33m");
#define COR_AZUL printf("\33[34m");
#define COR_ROXO printf("\33[35m");
#define COR_BRANCO printf("\33[37m");


#define NL 5
#define NC 5

int main(){

    int l, c;
    int mat[NL][NC];

    srand(time(NULL));

    for(l=0; l<NL; l++) {
        for(c=0; c<NC; c++){
            mat[l][c] = 10 + rand()%41;
            printf("[%i]", mat[l][c]);
        }
        printf("\n");
    }

    return 0;
}