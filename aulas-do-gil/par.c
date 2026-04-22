#include <stdio.h>

int main() {

    int val1, val2, fim = 0;

    printf("Digite dois valores inteiros: ");
    scanf("%i %i", &val1, &val2);


    printf("Numeros pares:");

    for(int i = val1; i <= val2; i ++) {
        if (i %2 == 0 && fim == 0) {
            printf("%i ", i);
        }
        if(i == val2 && fim == 0){
            printf("\nNumeros impares:");
            fim = 1;
            i = val1;
        }
        if(i %2 == 1 && fim == 1) {
            printf("%i ", i);
        }
    }
    return 0;
}