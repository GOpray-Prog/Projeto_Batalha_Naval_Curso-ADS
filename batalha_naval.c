#include <stdio.h>


int main(){
   int posicao_linha[3];
   char posicao_coluna[3];
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



    for (int i = 0; i < 3; i++)
    {
    printf("\nConforme seu tabuleiro, digite a posicao do seu %dº Navio(ex: 2b):\n", i+1);
    scanf(" %d%c", &posicao_linha[i], &posicao_coluna[i]); 
    getchar();

    }


for (int i = 0; i < 3; i++)
{  // Verifica os limites do tabuleiro
if (posicao_coluna[i] - 'a' < 0 || posicao_coluna[i] - 'a' > 9 || posicao_linha[i] < 0 || posicao_linha[i] > 9)
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
    printf("    a b c d e f g h i j\n");
   
    
}