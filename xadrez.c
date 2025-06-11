#include <stdio.h>
int main(){
    int torre = 0;
    int bispo = 0;
    int rainha = 0;
    int cavalo = 1;

printf("Torre:\n");

    for (torre; torre < 5; torre++) {
        printf ("direita\n");
    }
printf("\n");

printf("Rainha:\n");

    while (rainha <= 8){
    printf ("esquerda\n");
    rainha++;
    }
printf("\n");

printf("Bispo:\n");
    do { 
        printf("esquerda\n");
        printf("cima\n");
        bispo++;

    } while (bispo <=5);

printf("\n");
    
printf("Cavalo:\n");
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n");
        }
    printf("Esquerda\n");    
        
    }
    

    
    return 0;
}