#include <stdio.h>

int main() {

    int val1, val2, sla;

    printf("Valores inicial e final:");
    scanf("%i %i", &val1, &val2);

    printf("Pares: ");
    for(int i=1; i <= val2; i++){
        sla=0;
        for(int num=1; sla < 1; num ++) {
            if(i % num == 0) {
                printf("%i", num);
                if(i == num || num == i) {
                    sla = 1;
                }
            }
        }
    }

    return 0;
}