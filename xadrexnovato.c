#include <stdio.h>
int main(){

    int movimentobispo = 5;
    int movimentorainha = 8;
    int movimentotorre = 5;
    
    int i;

    printf("--- Jogo Xadrez ---\n");
    
    printf (" *** Movimento Bispo: ***\n");
    for (i = 0; i <movimentobispo; i++)     // movimento do bispo usando o loop for.
    {
        printf("Cima Direita\n");
    }
    
    printf("*** Movimento Rainha: ***\n");     // movimento da rainha usando o loop while.
    i = 0;
    while (i < movimentorainha)
    {
        printf("Esquerda\n");
        i++;
    }
    
    printf ("*** Movimento Torre: ***\n");   // movimento da torre usando loop do-while.
    i = 0;
    do{
        printf("Direita \n");
        i++;
    } while (i < movimentotorre);
    
    return 0;
} 