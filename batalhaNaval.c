/* DESAFIO BATALHA NAVAL - TEMA 4 - MateCheck */

#include <stdio.h>
#include<locale.h>

int main() {

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    //Declarando vetores para linhas (1-10) e colunas (A-J):

    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //Declarando matriz para tabuleiro de 10x10:

    int matriztabuleiro [10][10] = {0}; 

    //Iniciando o jogo:

    printf("\n---- Seja bem-vindo ao jogo Batalha Naval ----\n");

    // Posicionando os navios (Horizontal e Vertical) representados por 3.
    //Horizontal:
     matriztabuleiro[2][2] = 3; 
     matriztabuleiro[2][3] = 3;
     matriztabuleiro[2][4] = 3;
 
    //Vertical:
     matriztabuleiro[6][7] = 3; // vertical
     matriztabuleiro[7][7] = 3;
     matriztabuleiro[8][7] = 3;
    
    
    // for para o cabeçalho das colunas da matriz
    printf("  ");
    for (int j = 0; j < 10; j++) {
        printf(" %c", coluna[j]);
    }
    printf("\n");


    // for para as linhas da matriz
    for (int i = 0; i < 10; i++) {
        printf("%2d", linha[i]); 
        for (int j = 0; j < 10; j++) {
            printf(" %d", matriztabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
