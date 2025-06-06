/* DESAFIO BATALHA NAVAL - TEMA 4 - MateCheck */

#include <stdio.h>
#include<locale.h>

int main() {

    /* Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal*/

    //Declarando inicialização de Matriz para representar tabuleiro.
    //Valores em zero representa água.
    
    int tabuleiro[10][10] = {0}; 

    printf("\n---- Seja bem-vindo ao Batalha Naval ----\n");

    // Declarando valores em 3 para representar navio posição: Horizontal
    for (int navio1 = 0; navio1 < 0 + 3; navio1++){
    tabuleiro[4][navio1] = 3; 
    }

    // Declarando valores em 3 para representar navio posição: Vertical
    for (int navio2 = 7; navio2 < 7 + 3; navio2++){
        tabuleiro[navio2][9] = 3; 
    }

    // Declarando valores em 3 para representar navio posição: Diagonal direita
    for (int navio3 = 0; navio3 < 3; navio3++) {
    tabuleiro[0 + navio3][0 + navio3] = 3;
    }

    // Declarando valores em 3 para representar navio posição: Diagonal esquerda
    for (int navio4 = 0; navio4 < 3; navio4++) {
    tabuleiro[7 + navio4][2 - navio4] = 3;
    }

    // Imprimindo o cabeçalho com letras de A a J (coluna)
    // Espaço para índice
    printf("   "); 
        for (char coluna = 'A'; coluna <= 'J'; coluna++) {
            printf(" %c", coluna);
        }
        printf("\n");

    // Declarando estrutura for para imprimir linhas numéricas de 1 a 10
    for (int a = 0; a < 10; a++) {
        printf("%2d ", a + 1); 
        for (int b = 0; b < 10; b++) {
            printf(" %d", tabuleiro[a][b]);
        }
        printf("\n");
    }

    return 0;
}
