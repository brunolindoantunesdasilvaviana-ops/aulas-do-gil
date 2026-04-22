#include <stdio.h>

int main() {

    int alt, i, j, espaços;

    printf("Digite a altura: ");
    scanf("%i", &alt);

    i=1;


    if(alt %2 == 1) {
        int meio = (alt / 2) + 1;
        for(i = 1; i <= meio; i++) {
            for(j = 1; j <= meio - i; j ++) {
                printf("  ");
                }
            for (j = 1; j <= (2 * i - 1); j++){
                printf("🤣");
            }
            printf ("\n");
        }
        for (j = 1; j <= (2 * i - 1); j ++);{
            printf("🤣");
        }
        printf("\n");
    }
    if(alt %2 == 0){
        printf("Altura invalida");
    }


    return 0;
}