#include <stdio.h>

int main () {
    int alt, aux = 1, esp, aux2;

    printf("Digite a altura:");
    scanf("%i", &alt);

    aux2 = alt;

    for(int i = 1; i <= alt; i += 2) {
        aux2 -= 2;
        esp = 1;
        for(; esp <= aux2; esp +=2) {
            printf(" ");
        }
        for(int j=0; j < i; j++) {
            printf("O");
        }
        printf("\n");
    }
    aux2 = 1;
    for(int i = alt - 2; i >= 1; i -= 2) {
        esp = 1;
        for(; esp <= aux2; esp += 2) {
            printf(" ");
        }
        for(int j = 0; j < i; j++) {
            printf("O");
        }
        printf("\n");
        aux2 += 2;
    }


    return 0;
}