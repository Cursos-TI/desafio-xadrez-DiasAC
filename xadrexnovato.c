#include <stdio.h>

int main(){

    int movimentobispo = 5;
    int movimentorainha = 8;
    int movimentotorre = 5;
    int cavalo_esquerda = 1;
    int cavalo_baixo = 2;
    int i, j, k, l;

    printf("--- Jogo Xadrez ---\n");
    
    printf (" *** Movimento Bispo: ***\n");
    for (i = 0; i <movimentobispo; i++)     // movimento do bispo usando o loop for.
    {
        printf("Cima Direita\n");
    }
        printf ("\n");

    printf("*** Movimento Rainha: ***\n");     // movimento da rainha usando o loop while.
    i = 0;
    while (i < movimentorainha)
    {
        printf("Esquerda\n");
        i++;
    }
    
        printf("\n");

    printf ("*** Movimento Torre: ***\n");   // movimento da torre usando loop do-while.
    i = 0;
    do{
        printf("Direita \n");
        i++;
    } while (i < movimentotorre);

        printf("\n");

    printf ("*** Movimento Cavalo ***\n");
    for (i = 0; i <cavalo_baixo; i++)     // movimento do cavalo usando o loop aninhado for.
    {
        printf ("Baixo\n");
        
        for (j = 0; j < cavalo_baixo; j++){
            
        }
    } 

    
    while (k < cavalo_esquerda){    // movimento do cavalo usando o loop aninhado while. 
        printf ("Esquerda\n");
        k++;
    }
   
    while (l < cavalo_esquerda){
        l++;
    }


    
    return 0;
}