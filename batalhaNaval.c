#include<stdio.h> //biblioteca

#define p1 5 //constantes
#define p2 5

int main(){

    int tabuleiro[10][10], cone[p1][p2], cruz[p1][p2], octa[p1][p2];//variaveis
    int navio1[3]={3,3,3}, navio2[3]={3,3,3};
    int navio=3;

        for (int linha = 0; linha < 10; linha++) //loop para prencher matriz tabuleiro com "0".
        {
            for (int coluna = 0; coluna < 10; coluna++)
            {
                tabuleiro[linha][coluna]=0;
            }
        }
        
        printf("\tImpressão do Tabuleiro\n"); //impressao tabuleiro 

         for (int linha = 0; linha < 10; linha++)
            {
               for (int coluna = 0; coluna < 10; coluna++)
               {
                printf(" %d ", tabuleiro[linha][coluna]);
               }
               printf("\n");
            }

                for (int x = 4; x < 7; x++)//loop navio horizontal
                {
                    tabuleiro[3][x]=navio;
                }

                for (int y = 5; y < 8; y++)//loop navio vertical
                {
                    tabuleiro[y][8]=navio;
                }

                for (int i = 0; i < 3 ; i++)//loop navio diagonal 1
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
                
                for (int i = 7; i < 10 ; i++) //loop navio diagonal 2
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

                printf("\tImpressão dos Navios!\n"); //impressao tabuleiro com os navios

         for (int linha = 0; linha < 10; linha++)
            {
               for (int coluna = 0; coluna < 10; coluna++)
               {
                printf(" %d ", tabuleiro[linha][coluna]);
               }
               printf("\n");
            }
        
            for (int linha = 0; linha < 10; linha++) //zerando tabuleiro
            {
                for (int coluna = 0; coluna < 10; coluna++)
                {
                    tabuleiro[linha][coluna]=0;
                }
            }
            
            for (int i = 0; i < 5; i++) //logica poder cone
            {
                for (int j = 0; j < 5; j++)
                {
                    cone[i][j]=0;
                    
            if (j==2 || i==2 || (i+j)==2 || (i+j)==4)
            {
                cone[i][j]=1;
            }
            if (cone[0][4]==1)
            {
                cone[i][j]=0;
            }
                }
            }

            for (int i = 0; i < 5; i++) //logica poder cruz
            {
                for (int j = 0; j < 5; j++)
                {
                    cruz[i][j]=0;
                    if (j==2 || i==2)
                    {
                        cruz[i][j]=1;
                    }
                }
            }
            
            for (int i = 0; i < 5; i++) //logica poder octaedro(diamante)
            {
                for (int j = 0; j < 5; j++)
                {
                    octa[i][j]=0;
                    if (j==2 || i==2)
                    {
                        octa[i][j]=1;
                    }
        
                    if (octa[2][0]==1 || octa[0][2]==1 || octa[2][4]==1 || octa[4][2]==1)
                    {
                        octa[i][j]=0;
                    }
                }
            }

            for (int i = 0, x = 5; i < 5 , x < 10; i++, x++) //loops para prencher a matriz com os poderes
            {
                for (int j = 0, y = 1; j < 5 , y < 6; j++, y++)
                {
                    tabuleiro[x][y] = cruz[i][j];
                }
            }
            for (int i = 0, x = 0; i < 5 , x < 5; i++, x++)
            {
                for (int j = 0, y = 5; j < 5 , y < 10; j++, y++)
                {
                    tabuleiro[x][y] = octa[i][j];
                }
            }
            for (int x = 0; x < 3; x++)
            {
                for (int y = 0; y < 5; y++)
                {
                    tabuleiro[x][y] = cone[x][y];
                }}
            

            printf("\tImpressão das Habilidades!\n"); //impressao da matriz com os poderes

            for (int linha = 0; linha < 10; linha++)
            {
               for (int coluna = 0; coluna < 10; coluna++)
               {
                printf(" %d ", tabuleiro[linha][coluna]);
               }
               printf("\n");
            }


return 0;//fim do codigo
}