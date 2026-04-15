#include <stdio.h>

int main() {

    int val, ant, atu, prox;

    printf("Digite o valor do termo: ");
    scanf("%i", &val);

    ant=1;
    atu=1;

    printf("Fibonacci(%i) %i %i ", val, ant, atu);
    val-=2;
    for(int i=1; i <= val; i++) {
        prox=ant + atu;
        ant=atu;
        atu= prox;
        printf("%i ", atu);
    }




    return 0;
}