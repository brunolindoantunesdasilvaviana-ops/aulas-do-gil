#include <stdio.h>
#include <unistd.h>

int main() {

    int alt, emo = 1, j = 1, emo2 = 1, j2 = 1;

    printf("Digite a altura de um triangulo: ");
    scanf("%i", &alt);

    if(alt >= 3) {
        printf("Altura: %i", alt);
        printf("*\n");
        for(int i=1; i <= alt - 1; i++) {
            for(; emo <= j; emo++) {
                if(emo == 1 || emo == j) {
                    printf("*");
                }
                if(emo != j) {
                    printf(" ");
                }

            }
            j+=2;
            emo = 1;
            printf("\n");
        }
        for(;emo2 <= alt; emo2 ++) {
                if(emo2 == 1) {
                    printf("*  ");
                }
                else {
                    printf("* ");
                }
            }
    }

    if (alt <= 2) {
        printf("Altura invalida");
    }
    

    return 0;

}