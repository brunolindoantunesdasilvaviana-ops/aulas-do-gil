#include <stdio.h>

int main () {
    int alt, aux = 1;

    printf("Digite a altura:");
    scanf("%i", &alt);


    for(int i = 1; i <= alt; i += 2) {
        for(; aux <= i ; aux ++) {
            if(aux == i) {
                printf("\n");
            }
            if(aux != i) {
                printf("O");
            }
        }
        aux = 0;
    }



    return 0;
}