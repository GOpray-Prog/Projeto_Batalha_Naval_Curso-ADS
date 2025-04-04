#include <stdio.h>
#include <string.h> // Biblioteca que me permite receber dois valores em uma string

int opcao = 0;
int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com zeros
char habi_cone[9];
int posicao_linha[6] = {0};
char posicao_coluna[6] = {0};
char compara[6][4] = {{0}};
char posicoes[6][4] = {{0}};

void verifica_navio()
{

  // Verifica se o canhão atingiu alguma parte do navio
  for (int i = 1; i >= 0; i--)
  {
    int navio_linha = posicao_linha[i];
    int navio_coluna = posicao_coluna[i] - 'a';

    if (tabuleiro[navio_linha][navio_coluna] == 1)
    {
      printf("\nVocê acabou de explodir seu navio! Booooom!\n");
      break;
    }
  }
}

void imprimirTabuleiro()
{

  printf("\nTabuleiro atualizado:\n");
  printf("   a b c d e f g h i j\n");
  for (int i = 9; i >= 0; i--)
  {
    printf("%d  ", i);
    for (int j = 0; j < 10; j++)
    {
      printf("%d ", tabuleiro[i][j]);
    }
    printf("  %d\n", i);
  }
  printf("   a b c d e f g h i j\n");
}

void habilit_cone()
{

  // Canhao de Proa para baixo (Sul)
  if (opcao == 1)
  {

    int linha = posicao_linha[2];
    int coluna = posicao_coluna[2] - 'a';

    tabuleiro[linha][coluna] = 1;
    tabuleiro[linha - 1][coluna - 1] = 1;
    tabuleiro[linha - 1][coluna] = 1;
    tabuleiro[linha - 1][coluna + 1] = 1;
    tabuleiro[linha - 2][coluna - 2] = 1;
    tabuleiro[linha - 2][coluna - 1] = 1;
    tabuleiro[linha - 2][coluna] = 1;
    tabuleiro[linha - 2][coluna + 1] = 1;
    tabuleiro[linha - 2][coluna + 2] = 1;
    imprimirTabuleiro();
    verifica_navio();
  }
  // Canhao de Proa para Cima (Norte)
  else if (opcao == 2)
  {
    int linha = posicao_linha[2];
    int coluna = posicao_coluna[2] - 'a';

    tabuleiro[linha][coluna] = 1;
    tabuleiro[linha + 1][coluna - 1] = 1;
    tabuleiro[linha + 1][coluna] = 1;
    tabuleiro[linha + 1][coluna + 1] = 1;
    tabuleiro[linha + 2][coluna - 2] = 1;
    tabuleiro[linha + 2][coluna - 1] = 1;
    tabuleiro[linha + 2][coluna] = 1;
    tabuleiro[linha + 2][coluna + 1] = 1;
    tabuleiro[linha + 2][coluna + 2] = 1;
    imprimirTabuleiro();
    verifica_navio();
  }

  // Canhao de Proa para Direita (Leste)
  else if (opcao == 3)
  {
    int linha = posicao_linha[2];
    int coluna = posicao_coluna[2] - 'a';

    tabuleiro[linha][coluna] = 1;
    tabuleiro[linha - 1][coluna + 1] = 1;
    tabuleiro[linha][coluna + 1] = 1;
    tabuleiro[linha + 1][coluna + 1] = 1;
    tabuleiro[linha - 2][coluna + 2] = 1;
    tabuleiro[linha - 1][coluna + 2] = 1;
    tabuleiro[linha][coluna + 2] = 1;
    tabuleiro[linha + 1][coluna + 2] = 1;
    tabuleiro[linha + 2][coluna + 2] = 1;
    imprimirTabuleiro();
    verifica_navio();
  }
  // Canhao de Proa para Esquerda (Oeste)
  else if (opcao == 4)
  {
    int linha = posicao_linha[2];
    int coluna = posicao_coluna[2] - 'a';

    tabuleiro[linha][coluna] = 1;
    tabuleiro[linha - 1][coluna - 1] = 1;
    tabuleiro[linha][coluna - 1] = 1;
    tabuleiro[linha + 1][coluna - 1] = 1;
    tabuleiro[linha - 2][coluna - 2] = 1;
    tabuleiro[linha - 1][coluna - 2] = 1;
    tabuleiro[linha][coluna - 2] = 1;
    tabuleiro[linha + 1][coluna - 2] = 1;
    tabuleiro[linha + 2][coluna - 2] = 1;
    imprimirTabuleiro();
    verifica_navio();
  }

  else if (opcao == 5)
  {
    // Canhão de Proa Apontado para Cima Diagonal Esquerda (Noroeste)
    int linha = posicao_linha[2];
    int coluna = posicao_coluna[2] - 'a';

    tabuleiro[linha][coluna] = 1;
    tabuleiro[linha + 1][coluna] = 1;
    tabuleiro[linha][coluna - 1] = 1;
    tabuleiro[linha + 1][coluna - 1] = 1;
    tabuleiro[linha + 2][coluna] = 1;
    tabuleiro[linha][coluna - 2] = 1;
    tabuleiro[linha + 3][coluna] = 1;
    tabuleiro[linha + 2][coluna - 1] = 1;
    tabuleiro[linha + 1][coluna - 2] = 1;
    tabuleiro[linha][coluna - 3] = 1;
    imprimirTabuleiro();
    verifica_navio();
  }

  else if (opcao == 6)
  {
    // Canhão de Proa Apontado para Baixo Diagonal Direita (Sudeste)
    int linha = posicao_linha[2];
    int coluna = posicao_coluna[2] - 'a';

    tabuleiro[linha][coluna] = 1;
    tabuleiro[linha + 1][coluna] = 1;
    tabuleiro[linha][coluna + 1] = 1;
    tabuleiro[linha + 1][coluna + 1] = 1;
    tabuleiro[linha + 2][coluna] = 1;
    tabuleiro[linha][coluna + 2] = 1;
    tabuleiro[linha + 3][coluna] = 1;
    tabuleiro[linha + 2][coluna + 1] = 1;
    tabuleiro[linha + 1][coluna + 2] = 1;
    tabuleiro[linha][coluna + 3] = 1;
    imprimirTabuleiro();
    verifica_navio();
  }

  else if (opcao == 7)
  {
    // Canhão de Proa Apontado para Baixo Diagonal Esquerda (Sudoeste)
    int linha = posicao_linha[2];
    int coluna = posicao_coluna[2] - 'a';

    tabuleiro[linha][coluna] = 1;
    tabuleiro[linha - 1][coluna] = 1;
    tabuleiro[linha - 2][coluna] = 1;
    tabuleiro[linha - 3][coluna - 2] = 1;
    tabuleiro[linha][coluna - 1] = 1;
    tabuleiro[linha - 1][coluna - 1] = 1;
    tabuleiro[linha - 2][coluna - 1] = 1;
    tabuleiro[linha][coluna - 2] = 1;
    tabuleiro[linha - 1][coluna - 2] = 1;
    tabuleiro[linha][coluna - 3] = 1;
    imprimirTabuleiro();
    verifica_navio();
  }

  else if (opcao == 8)
  {
    // Canhão de Proa Apontado para Cima Diagonal Direita (Nordeste)
    int linha = posicao_linha[2];
    int coluna = posicao_coluna[2] - 'a';

    tabuleiro[linha][coluna] = 1;
    tabuleiro[linha + 1][coluna] = 1;
    tabuleiro[linha + 2][coluna] = 1;
    tabuleiro[linha + 3][coluna] = 1;
    tabuleiro[linha][coluna + 1] = 1;
    tabuleiro[linha + 1][coluna + 1] = 1;
    tabuleiro[linha + 2][coluna + 1] = 1;
    tabuleiro[linha][coluna + 2] = 1;
    tabuleiro[linha + 1][coluna + 2] = 1;
    tabuleiro[linha][coluna + 3] = 1;
    imprimirTabuleiro();
    verifica_navio();

  }
}

void habilit_cruz(){

  int linha = posicao_linha[2];
  int coluna = posicao_coluna[2] - 'a';
  
  tabuleiro[linha][coluna] = 1;
  tabuleiro[linha - 1][coluna] = 1;
  tabuleiro[linha - 2][coluna] = 1;
  tabuleiro[linha + 1][coluna] = 1;
  tabuleiro[linha + 2][coluna] = 1;
  tabuleiro[linha][coluna - 1] = 1;
  tabuleiro[linha][coluna - 2] = 1;
  tabuleiro[linha][coluna + 1] = 1;
  tabuleiro[linha][coluna + 2] = 1;
  imprimirTabuleiro();
  verifica_navio();


}

void habilit_octaedro(){


  int linha = posicao_linha[2];
  int coluna = posicao_coluna[2] - 'a';
  
  for (int i = -3; i <= 3; i++) {
      for (int j = -3; j <= 3; j++) {
          
          if (i + j <= 3 && i + j >= -3 && i - j <= 3 && i - j >= -3) {
              tabuleiro[linha + i][coluna + j] = 1;
          }
      }
  }
  
  imprimirTabuleiro();
  verifica_navio();

}

int main()
{

  int condicao, condicao1;
  int escolha = 0;

  do
  {
    condicao = 0;
    condicao1 = 0;

    imprimirTabuleiro();

    printf("\nConforme seu tabuleiro, digite a posicao do seu Navio(ex: 2b):\n");
    printf("Obs: O tamanho do seu navio tem que ser 3, ou seja, ocupar 3 celulas(ex: 2b,3c,4d\n");
    printf("Obs: Atencao !!! A proa do seu navio será sempre o ultima posiçao\n");
    for (int i = 0; i < 3; i++)
    {
      printf("\nTamanho %d\n", i + 1);
      scanf(" %d%c", &posicao_linha[i], &posicao_coluna[i]);
      sprintf(posicoes[i], "%d%c", posicao_linha[i], posicao_coluna[i]);
      strcpy(compara[i], posicoes[i]);
      getchar();
    }

    for (int i = 0; i < 3; i++)
    { // Verifica os limites do tabuleiro
      if (posicao_coluna[i] - 'a' < 0 || posicao_coluna[i] - 'a' > 9 || posicao_linha[i] < 0 || posicao_linha[i] > 9)
      {
        printf("\nERRO !!! A marcaçao %d%c esta fora do tabuleiro!\n", posicao_linha[i], posicao_coluna[i]);
        condicao = 1;
      }
      else
      {
        // Atribui o valor 3 na posição escolhida

        tabuleiro[posicao_linha[i]][posicao_coluna[i] - 'a'] = 3;
      }
    }

    // compara as posiçoes(Tive que usar outra biblioteca pois nao da para comprarar apenas com sinal de comparaçao "==" entre duas strings)
    for (int i = 0; i < 3; i++)
    {
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

      // Reinicia a variavel tabuleiro
      for (int i = 0; i < 10; i++)
      {
        for (int j = 0; j < 10; j++)
        {
          tabuleiro[i][j] = 0;
        }
      }
    }
  } while (condicao == 1 || condicao1 == 1);

  printf("\nEscolha qual ataque deseja fazer.\n");
  printf("1 para o Canhao de Proa\n");
  printf("2 para Ataque de Minas Sub-Aquaticas\n");
  printf("3 para Torpedo\n");
  scanf("%d", &escolha);

  switch (escolha)
  {
  case 1:
    printf("\nVoce escolheu o Canhao de Proa.\nAgora aponte a direção do seu canhao.\n");
    printf("1 - Baixo\n");
    printf("2 - Cima\n");
    printf("3 - Direita\n");
    printf("4 - Esquerda\n");
    printf("5 - Cima Diagonal Esquerda\n");
    printf("6 - Baixo Diagonal Direita\n");
    printf("7 - Baixo Diagonal Esquerda\n");
    printf("8 - Diagonal Cima Direita\n");
    scanf("%d", &opcao);

    // Canhao de Proa apontado para baixo
    if (opcao == 1)
    {
      habilit_cone(opcao);
      if (posicao_linha[0] == 1 || posicao_coluna[0] - 'a' == 1)
      {
        printf("Voce acabou de explodir seu navio! Booooom!");
      }

      // Canhao de Proa apontado para Cima
    }
    else if (opcao == 2)
    {
      habilit_cone(opcao);

      // Canhao de Proa apontado para Direita
    }
    else if (opcao == 3)
    {
      habilit_cone(opcao);

      // Canhao de Proa apontado para Esquerda
    }
    else if (opcao == 4)
    {
      habilit_cone(opcao);
    }
    // Canhao de Proa apontado para Cima Diagonal Esquerda
    else if (opcao == 5)
    {
      habilit_cone(opcao);
    }
    // Canhao de Proa apontado para Baixo Diagonal Direita
    else if (opcao == 6)
    {
      habilit_cone(opcao);
    }
    // Canhao de Proa apontado para Baixo Diagonal Esquerda
    else if (opcao == 7)
    {
      habilit_cone(opcao);
    }
    // Canhao de Proa apontado para Cima Diagonal Direita
    else if (opcao == 8)
    {
      habilit_cone(opcao);
    }
    break;

    case 2:

     habilit_cruz();

    break;

    case 3:

      habilit_octaedro();

    break;


  default:
    printf("Opcao Invalida!");
    break;
  }
}
