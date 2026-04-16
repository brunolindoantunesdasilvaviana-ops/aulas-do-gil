#include <stdio.h>

int main() {

    int val, soma, aux;

    printf("Digite um numero inteiro: ");
    scanf("%i", &val);

    printf("[");
    for(int i=1; i < val; i++) {
        if(val %i ==0){
            soma += i;
            printf(" %i ", i);
            if (soma < val) {
                printf(" + ");
            }
        }

    }
    printf("]");
    if(soma == val){
        printf (" = %i Perfeito", val);
    }
    else {
        printf (" != %i Imperfeito", val);
    }
    return 0;
}