#include <stdio.h>
#include <unistd.h>

int main() {

    int min, seg;

    printf("Digite os minutos e os segundos: ");
    scanf("%i %i", &min, &seg);

    printf("Tempo inicial: %02d:%02d", min, seg);
    for(; min >=0 && seg >=0; seg -= 1) {
        system("clear");
        if(seg == 0) {
            seg = 59;
            min -= 1;
        }
    printf("\n%02d:%02d ", min, seg);


        fflush(stdout);
        usleep(10000);
    }
    return 0;
}