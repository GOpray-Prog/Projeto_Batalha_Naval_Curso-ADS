#include <stdio.h>
#include <string.h> // Biblioteca que me permite receber dois valores em uma string

int main(){
  int condicao, condicao1;
  int tabuleiro[10][10] = {0};
   
do
{
    int posicao_linha[6] = {0};  // Zera as posições do array
    char posicao_coluna[6] = {0}; // Zera os caracteres
    char compara[6][4] = {{0}};   // Zera todas as strings
    char posicoes[6][4] = {{0}};  // Zera todas as strings
    condicao = 0;
    condicao1 = 0;

    

    //Tabuleiro
    printf("\nEste é seu Tabuleiro\n");
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
    sprintf(posicoes[i], "%d%c", posicao_linha[i], posicao_coluna[i]);
    strcpy(compara[i], posicoes[i]);
    getchar();

    }

    printf("\nConforme seu tabuleiro, digite a posicao do seu 2º Navio(ex: 2b):\n");
    printf("Obs: O tamanho do seu navio tem que ser 3, ou seja, ocupar 3 celulas(ex: 2b,3c,4d\n");
    for (int i = 3; i < 6; i++)
    {
    printf("\nTamanho %d\n", i-2);
    scanf(" %d%c", &posicao_linha[i], &posicao_coluna[i]);
    sprintf(posicoes[i], "%d%c", posicao_linha[i], posicao_coluna[i]);
    strcpy(compara[i], posicoes[i]);
    getchar();

    }


    for (int i = 0; i < 6; i++)
    {  // Verifica os limites do tabuleiro
    if (posicao_coluna[i] - 'a' < 0 || posicao_coluna[i] - 'a' > 9 || posicao_linha[i] < 0 || posicao_linha[i] > 9)
    {
        printf("\nERRO !!! A marcaçao %d%c esta fora do tabuleiro!\n", posicao_linha[i], posicao_coluna[i]);
        condicao = 1;
    }else 
    {
        // Atribui o valor 3 na posição escolhida
        
        tabuleiro[posicao_linha[i]][posicao_coluna[i]- 'a'] = 3;
    }
    }

    // compara as posiçoes(Tive que usar outra biblioteca pois nao o sinal de comparaçao "==" entre duas strings)
    for (int i = 0; i < 6; i++){
       for (int j = 0; j < i; j++)
       {
        if (strcmp(posicoes[i], compara[j]) == 0)
        {
            printf("\nERRO !!! A posiçao %s ja foi ocupada\n", posicoes[i]);
            condicao1 = 1;
        }
       }  
    }   
    if (condicao == 1 || condicao1 == 1)
    {
     printf("Tente Novamente!\n");
     printf("\nJogo Reiniciado!\n");
      
     //Reinicia a variavel tabuleiro
     for (int i = 0; i < 10; i++)
     {
         for (int j = 0; j < 10; j++)
         {
             tabuleiro[i][j] = 0;
         }
    }
 } 
}while (condicao == 1 || condicao1 == 1);


        // Atualiza sua posiçao no tabuleiro
        printf("\nSucesso !!!\n");
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


