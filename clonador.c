#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COR_VERMELHO printf("\33[31m");
#define COR_VERDE printf("\33[32m");
#define COR_LARANJA printf("\33[33m");
#define COR_AZUL printf("\33[34m");
#define COR_ROXO printf("\33[35m");
#define COR_BRANCO printf("\33[37m");


#define TAM 20

int main() {

    int sen, num;

    printf("Descubra se seu cartão foi clonado");
    printf("\nDigite a senha do seu cartão: ");
    scanf("%i", &sen);
    printf("\nDigite os numeros atras do seu cartão: ");
    scanf("%i", &num);
    printf("\nseu cartão foi clonado 67 vezes");


    return 0;
}