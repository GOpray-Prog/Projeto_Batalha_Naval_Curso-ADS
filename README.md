# Batalha Naval - Jogo em C

## Descrição
Este é um jogo simples de **Batalha Naval** implementado em **linguagem C**. O jogo permite que o jogador posicione três navios em um tabuleiro de 10x10, utilizando coordenadas no formato **linha e coluna** (ex: `2b`).

## Como Jogar
1. O jogo inicia imprimindo um tabuleiro 10x10 preenchido com `0`.
2. O jogador insere as posições de três navios utilizando coordenadas no formato `linha-coluna` (ex: `2b`).
3. O tabuleiro é atualizado, e as posições escolhidas pelo jogador são marcadas com `3`.
4. O tabuleiro atualizado é impresso na tela.

## Exemplo de Saída
```
Este é seu Tabuleiro
   a b c d e f g h i j
9  0 0 0 0 0 0 0 0 0 0  9
8  0 0 0 0 0 0 0 0 0 0  8
...
0  0 0 0 0 0 0 0 0 0 0  0
   a b c d e f g h i j

Conforme seu tabuleiro, digite a posição do seu 1º Navio (ex: 2b):
2b
Conforme seu tabuleiro, digite a posição do seu 2º Navio (ex: 5d):
5d
Conforme seu tabuleiro, digite a posição do seu 3º Navio (ex: 8a):
8a

Sua Posicao
   a b c d e f g h i j
9  0 0 0 0 0 0 0 0 0 0  9
8  3 0 0 0 0 0 0 0 0 0  8
...
5  0 0 0 3 0 0 0 0 0 0  5
...
2  0 3 0 0 0 0 0 0 0 0  2
...
0  0 0 0 0 0 0 0 0 0 0  0
   a b c d e f g h i j
```

## Estrutura do Código
- **Inicialização**: O tabuleiro é criado como uma matriz 10x10 e preenchido com `0`.
- **Entrada do Jogador**: O jogador insere três coordenadas para posicionar os navios.
- **Validação**: O jogo verifica se as coordenadas inseridas estão dentro dos limites do tabuleiro.
- **Atualização do Tabuleiro**: Os navios são marcados com `3` nas posições escolhidas.
- **Saída**: O tabuleiro atualizado é exibido ao jogador.

## Possíveis Melhorias
- Adicionar um oponente (IA ou segundo jogador)
- Implementar ataques e verificação de acertos
- Criar um sistema de rodadas
- Melhorar a interface gráfica (exibir navios, água e tiros com diferentes caracteres)

## Como Compilar e Executar
Para compilar o código, use um compilador **GCC**:
```bash
gcc batalha_naval.c -o batalha_naval
```
Para executar o jogo:
```bash
./batalha_naval
```

## Autor
Criado por [Guilherme Oliveira - GOPRAY]

