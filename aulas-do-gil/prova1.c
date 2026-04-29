#include <stdio.h>

int main() {

    int val1, val2;

    printf("Valores inicial e final:");
    scanf("%i %i", &val1, &val2);

    printf("Pares: ");
    for(int i=1; i <= val2; i++){
        if(i %2 == 0) {
            printf("%i ", i);
        }
    }

    return 0;
}