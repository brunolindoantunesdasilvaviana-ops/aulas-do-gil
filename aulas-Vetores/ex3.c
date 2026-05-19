#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 5
int main() {

    int vet[TAM], num=1, sai = 0;

    printf("Digite 5 valores:\n");
    
    for(int i=0; i < TAM; i ++) {
        printf("%iº Numero: ", num);
        scanf("%i", &vet[i]);
        num ++;
    }
    for(int i=4; sai < TAM;) {
        if(i > -1) {
            printf("%i ", vet[i]);
            i= i-1;
        }
        if(i == -1) {
            sai+=6;
        }
    }



    return 0;
}