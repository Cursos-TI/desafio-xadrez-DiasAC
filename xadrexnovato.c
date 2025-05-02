#include <stdio.h>

void mover_torre(int casas) {     // função recursiva para torre, bispo e rainha
    if (casas > 0) {
        printf("Direita\n");
        mover_torre(casas - 1);
    }
}

void mover_bispo(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        printf("Direita\n");
        mover_bispo(casas - 1);
    }
}

void mover_rainha(int casas) {
    if (casas > 0){
        printf ("Esquerda\n");
        mover_rainha (casas -1);
    }

}

void mover_cavalo(int casas) {
    for (int a = 0; a <= 2; a++) {
        for (int b = 0; b <= 2; b++) {
            if (a == 2 && b == 1) {
                
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break;  
            }
        }
    }
}

int main() {

    printf("Movimento da Torre:\n");   // movimento das peças chamando a função void.
    mover_torre(5);
    printf("\n");

    printf("Movimento do Bispo:\n");
    mover_bispo(5);
    printf("\n");

    printf("Movimento da Rainha:\n");
    mover_rainha(8);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    mover_cavalo (3);
    printf("\n");

    return 0;
}