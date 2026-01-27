#include <stdio.h>

int main(){
   //t = torre, b = bispo, r = rainha
    int t = 0, b = 0, r = 0;

    printf("Bem-vindo ao Xadrez!\n");
    
    // Mover a torre 5 casas para a direita
    
    printf("Movendo a torre 5 casas para a direita...\n");

    for( t = 0; t < 5; t++) {
        printf("Direita\n");
    }

    // Mover o bispo 5 casas para cima e a direita

    printf("Movendo o bispo 5 casas para cima e a direita...\n");

    while( b < 5) {
        printf("Cima-Direita\n");
        b++;
    }

    // Mover a rainha 8 casas para a esquerda

    printf("Movendo a rainha 8 casas para a esquerda...\n");

    do {
        printf("Esquerda\n");
        r++;
    } while( r < 8);
 


    return 0;
}