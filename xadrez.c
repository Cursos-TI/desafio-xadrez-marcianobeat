#include <stdio.h>
int main(){
    int torre = 0;
    int bispo = 0;
    int rainha = 0;

printf("Torre\n");

    for (torre = 0; torre < 5; torre++) {
        printf ("direita\n");
    }

printf("Rainha\n");

    while (rainha <= 8){
    printf ("esquerda\n");
    rainha++;
    }

printf("Bispo\n");
    do { 
        printf("esquerda para cima\n");
        bispo++;

    } while (bispo <=5);
    
    
    return 0;
}