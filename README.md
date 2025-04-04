# Jogo Batalha Naval

## Descrição
Este é um jogo de Batalha Naval desenvolvido em linguagem C. O objetivo do jogo é posicionar e atacar navios no tabuleiro, simulando uma batalha naval clássica.

## Funcionalidades Principais
- Inicialização do tabuleiro de 10x10.
- Posicionamento de navios.
- Opções de ataque em diferentes direções.
- Impressão do tabuleiro atualizado após cada jogada.
- Verificação de colisão com navios.

## Estrutura do Código
O código está organizado nas seguintes funções:

### 1. `verifica_navio()`
Verifica se um ataque atingiu um navio, informando ao jogador se houve explosão.

### 2. `imprimirTabuleiro()`
Exibe o tabuleiro atualizado no console, mostrando as posições ocupadas pelos navios e ataques.

### 3. `habilit_cone()`
Realiza ataques em forma de cone, permitindo que o jogador escolha a direção do ataque:
- Norte
- Sul
- Leste
- Oeste
- Nordeste
- Noroeste
- Sudeste
- Sudoeste

### 4. `habilit_cruz()`
Realiza um ataque em forma de cruz ao redor da posição escolhida.

### 5. `habilit_octaedro()`
Executa um ataque em forma de losango, afetando várias posições ao redor do alvo.

## Como Compilar e Executar
1. Instale um compilador C, como GCC.
2. Salve o código em um arquivo chamado `batalha_naval.c`.
3. Compile o código:
   ```bash
   gcc batalha_naval.c -o batalha_naval
   ```
4. Execute o jogo:
   ```bash
   ./batalha_naval
   ```

## Melhorias Futuras
- Implementar interação com o jogador para inserção dos navios.
- Criar um modo multiplayer.
- Melhorar a interface visual com uso de bibliotecas gráficas.

## Contribuição
Se desejar contribuir com melhorias ou correções, sinta-se à vontade para criar um pull request ou abrir uma issue no repositório.

## Autor
Desenvolvido por **Guilherme Oliveira - GOPRAY**.

---

Divirta-se jogando! 🚢💥
