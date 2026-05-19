#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int vet[12], i, quant, quant2;

    srand(time(NULL));

    for(i=0; i<12; i ++) {
        vet[i] = 10 + (rand()%41);
        printf("%i ", vet[i]);
    }

    for(i=0; i<12; i ++) {
        if(vet[i] >= 20 && vet[i] <= 40){
            quant+=1;
        }
    }
    printf("\nA quantidade de números entre 20 e 40: %i \n", quant);

    printf("Todos os números pares:");
    for(i=0; i<12; i ++) {
        if(vet[i]%2==0){
            printf("%i ", vet[i]);
        }
    }

    for(i=0; i<12; i ++) {
        if(vet[i] > 35){
            quant2+=1;
        }
    }
    printf("\nA quantidade de números maiores que 35: %i ", quant2);
    return 0;
}