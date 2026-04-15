#include <stdio.h>

int main() {

    int val1, val2, soma, aux;

    printf("Digite dois valores: ");
    scanf("%i %i", &val1, &val2);

    soma=val1;
    printf("%i = %i \n", val1, soma);

    for(int i=val1 + 1; i<= val2; i++){
        soma= val1 + i;
        printf("%i + %i = %i \n", val1, i, soma);
        val1 = soma;
    }

    return 0;
}