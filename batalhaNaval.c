#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro[11][11]={{1,0,0,0,0,0,0,0,0,0,0},{2,0,0,0,0,0,0,0,0,0,0},{3,0,0,0,0,0,0,0,0,0,0},{4,0,0,0,0,0,0,0,0,0,0},{5,0,0,0,0,0,0,0,0,0,0},{6,0,0,0,0,0,0,0,0,0,0},{7,0,0,0,0,0,0,0,0,0,0},{8,0,0,0,0,0,0,0,0,0,0},{9,0,0,0,0,0,0,0,0,0,0},{10,0,0,0,0,0,0,0,0,0,0}};
    int navio1[3]={3,3,3}, navio2[3]={3,3,3};
    int linha,coluna,x,y;

        printf("\tBem Vindo a Batalha Naval!\n");
        printf("\tImpressão do Tabuleiro\n");
        printf("    A  B  C  D  F  G  H  I  J  L\n");

         for (linha = 0; linha < 10; linha++)
            {
               for (coluna = 0; coluna < 11; coluna++)
               {
                printf(" %d ", tabuleiro[linha][coluna]);
               }
               printf("\n");
            }
                for (x = 2; x < 5; x++)
                {
                    tabuleiro[3][x]=3;
                }
                for (y = 5; y < 8; y++)
                {
                    tabuleiro[y][8]=3;
                }
                printf("\tImpressão dos Navios!\n");
        printf("    A  B  C  D  F  G  H  I  J  L\n");

         for (linha = 0; linha < 10; linha++)
            {
               for (coluna = 0; coluna < 11; coluna++)
               {
                printf(" %d ", tabuleiro[linha][coluna]);
               }
               printf("\n");
            }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
