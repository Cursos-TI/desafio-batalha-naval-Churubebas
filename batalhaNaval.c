#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro[10][10]={{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}};
    int navio1[3]={3,3,3}, navio2[3]={3,3,3};
    int navio=3;
   
        printf("\tBem Vindo a Batalha Naval!\n");
        printf("\tImpressão do Tabuleiro\n");

         for (int linha = 0; linha < 10; linha++)
            {
               for (int coluna = 0; coluna < 10; coluna++)
               {
                printf(" %d ", tabuleiro[linha][coluna]);
               }
               printf("\n");
            }
                for (int x = 4; x < 7; x++)
                {
                    tabuleiro[3][x]=navio;
                }

                for (int y = 5; y < 8; y++)
                {
                    tabuleiro[y][8]=navio;
                }

                for (int i = 0; i < 3 ; i++)
                {
                    for (int j = 0; j < 10; j++)
                    {
                        if ((i)==(j))
                        {
                            tabuleiro[i][j]=navio;
                        }else
                            continue;
                        }
                }
                
                for (int i = 7; i < 10 ; i++)
                {
                    for (int j = 0; j < 10; j++)
                    {
                        if ((i+j)==9)
                        {
                            tabuleiro[i][j]=navio;
                        }else
                            continue;
                        }
                }

                printf("\tImpressão dos Navios!\n");

         for (int linha = 0; linha < 10; linha++)
            {
               for (int coluna = 0; coluna < 10; coluna++)
               {
                printf(" %d ", tabuleiro[linha][coluna]);
               }
               printf("\n");
            }

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
