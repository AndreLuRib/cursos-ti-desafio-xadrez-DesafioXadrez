#include <stdio.h>

/* Movimento recursivo da Torre (Direita) */
void moverTorre(int casas) {
    if (casas <= 0) {
        return; // condição de parada da recursão
    }

    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

/* Movimento recursivo da Rainha (Esquerda) */
void moverRainha(int casas) {
    if (casas <= 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/* Movimento recursivo do Bispo com loops aninhados
   Loop externo: movimento vertical
   Loop interno: movimento horizontal */
void moverBispo(int casas) {
    int vertical, horizontal;

    if (casas <= 0) {
        return;
    }

    /* Loops aninhados */
    for (vertical = 1; vertical <= casas; vertical++) {
        for (horizontal = 1; horizontal <= casas; horizontal++) {
            printf("Cima\n");
            printf("Direita\n");
        }
        break; // executa apenas uma diagonal por chamada
    }

    moverBispo(casas - 1); // chamada recursiva
}

/* ======================================================
   FUNÇÃO PRINCIPAL
   ====================================================== */

int main() {

    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 3;

    int linha, coluna;

    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casasRainha);

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(casasBispo);

    printf("\n=== Movimento do Cavalo ===\n");

    /* Movimento do Cavalo em L:
       2 casas para cima e 1 para a direita */
    for (linha = 1; linha <= 3; linha++) {

        if (linha > 2) {
            break; // limita o movimento vertical
        }

        printf("Cima\n");

    }

        for (coluna = 1; coluna <= 2; coluna++) {

            if (coluna == 2) {
                continue; // ignora iteração extra
            }

            printf("Direita\n");
        }
    

    return 0;
}
