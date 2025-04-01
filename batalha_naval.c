#include <stdio.h>


int main(){
   int posicao_linha[6];
   char posicao_coluna[6];
   int tabuleiro[10][10];


    //Tabuleiro
    printf("Este é seu Tabuleiro\n");
    printf("   a b c d e f g h i j\n");

    for (int linha = 9; linha >= 0; linha--) {
      printf("%d  ", linha);
       for (int coluna = 0; coluna <= 9; coluna++) {
         tabuleiro[linha][coluna] = 0;
         printf("%d ", tabuleiro[linha][coluna]);
       }
       printf("  %d\n", linha);
    }
    printf("   a b c d e f g h i j\n");


    printf("\nConforme seu tabuleiro, digite a posicao do seu 1º Navio(ex: 2b):\n");
    printf("Obs: O tamanho do seu navio tem que ser 3, ou seja, ocupar 3 celulas(ex: 2b,3c,4d\n");
    for (int i = 0; i < 3; i++)
    {
    printf("\nTamanho %d\n", i+1);
    scanf(" %d%c", &posicao_linha[i], &posicao_coluna[i]); 
    getchar();

    }

    printf("\nConforme seu tabuleiro, digite a posicao do seu 2º Navio(ex: 2b):\n");
    printf("Obs: O tamanho do seu navio tem que ser 3, ou seja, ocupar 3 celulas(ex: 2b,3c,4d\n");
    for (int i = 3; i < 6; i++)
    {
    printf("\nTamanho %d\n", i-2);
    scanf(" %d%c", &posicao_linha[i], &posicao_coluna[i]); 
    getchar();

    }

for (int i = 0; i < 6; i++)
{  // Verifica os limites do tabuleiro
if (posicao_coluna[i] - 'a' < 0 || posicao_coluna[i] - 'a' > 9 || posicao_linha[i] < 0 || posicao_linha[i] > 9 || posicao_linha[i] == posicao_linha[i])
{
    printf("Posição inválida!\n");
} else 
{
    // Atribui o valor 3 na posição escolhida
    tabuleiro[posicao_linha[i]][posicao_coluna[i]- 'a'] = 3;
}
}
    // Atualiza sua posiçao no tabuleiro
    printf("\nSua Posicao\n");
    printf("    a b c d e f g h i j\n");

    for (int linha = 9; linha >= 0; linha--)
    {
       printf("%d   ", linha);
       for (int coluna = 0; coluna <= 9; coluna++)
       {    
           printf("%d ", tabuleiro[linha][coluna]);
        
         }
       printf("  %d\n", linha);
      }
    printf("    a b c d e f g h i j\n\n");
   
    
}